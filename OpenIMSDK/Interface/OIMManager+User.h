//
//  OIMManager+User.h
//  OpenIMSDK
//
//  Created by x on 2022/2/16.
//

#import "OIMManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface OIMManager (User)

/*
 * 根据uid批量查询用户信息
 *
 * @param uids 用户id列表
 */
- (void)getUsersInfo:(NSArray <NSString *> *)uids
           onSuccess:(nullable OIMFullUsersInfoCallback)onSuccess
           onFailure:(nullable OIMFailureCallback)onFailure;

/*
 * 修改当前登录用户信息
 *
 */
- (void)setSelfInfo:(OIMUserInfo *)userInfo
          onSuccess:(nullable OIMSuccessCallback)onSuccess
          onFailure:(nullable OIMFailureCallback)onFailure;

/*
 * 当前登录用户信息
 *
 */
- (void)getSelfInfoWithOnSuccess:(nullable OIMUserInfoCallback)onSuccess
                       onFailure:(nullable OIMFailureCallback)onFailure;

/**
 *  更新FMC token
 */
- (void)updateFcmToken:(NSString *)fmcToken
             onSuccess:(nullable OIMSuccessCallback)onSuccess
             onFailure:(nullable OIMFailureCallback)onFailure;

/**
 *  订阅用户的在线状态
 */
- (void)subscribeUsersStatus:(NSArray<NSString *> *)userIDs
                   onSuccess:(nullable OIMUserStatusInfosCallback)onSuccess
                   onFailure:(nullable OIMFailureCallback)onFailure;

/**
 *  取消订阅用户的在线状态
 */
- (void)unsubscribeUsersStatus:(NSArray<NSString *> *)userIDs
                     onSuccess:(nullable OIMSuccessCallback)onSuccess
                     onFailure:(nullable OIMFailureCallback)onFailure;

/**
 *  获取所有已订阅用户的在线状态
 */
- (void)getSubscribeUsersStatusWithOnSuccess:(nullable OIMUserStatusInfosCallback)onSuccess
                                   onFailure:(nullable OIMFailureCallback)onFailure;

/**
 *  普通用户获取用户状态
 */
- (void)getUserStatus:(NSArray<NSString *> *)userIDs
            onSuccess:(nullable OIMUserStatusInfosCallback)onSuccess
            onFailure:(nullable OIMFailureCallback)onFailure;

- (void)getUsersInfoStranger:(NSArray<NSString *> *)userIDs
                     groupID:(NSString * _Nullable)groupID
                   onSuccess:(nullable OIMUsersInfoCallback)onSuccess
                   onFailure:(nullable OIMFailureCallback)onFailure;
@end

NS_ASSUME_NONNULL_END
