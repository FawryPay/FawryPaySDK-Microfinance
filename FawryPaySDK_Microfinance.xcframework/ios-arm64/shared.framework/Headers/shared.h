#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedFawryPaymentSdk, SharedLanguage, SharedLoginResponse, SharedApiResponse<__covariant T, __covariant E>, SharedFawryError, SharedPaymentAddResponse, SharedFawryPaymentSdkConfig, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedFawryErrorCompanion, SharedCacheKeys, SharedSharedPrefs, SharedLoginResponseCompanion, SharedCustomPropertiesCompanion, SharedCustomProperties, SharedKeyValuePairCompanion, SharedKeyValuePair, SharedNetworkTrnInfo, SharedMsgRqHdrCompanion, SharedMsgRqHdr, SharedNetworkTrnInfoCompanion, SharedRegSvcRq, SharedSignonRq, SharedPresSvcRq, SharedPaySvcRq, SharedRequestCompanion, SharedRequest, SharedSignonProfileCompanion, SharedSignonProfile, SharedSignonRqCompanion, SharedRecCtrlIn, SharedBillInqRqCompanion, SharedBillInqRq, SharedPresSvcRqCompanion, SharedRecCtrlInCompanion, SharedContactInfoCompanion, SharedContactInfo, SharedCustIds, SharedSourceOfFunds, SharedCustDataCompanion, SharedCustData, SharedCustIdCompanion, SharedCustId, SharedCustIdsCompanion, SharedSourceOfFund, SharedCustSearchDataCompanion, SharedCustSearchData, SharedGetCustRqCompanion, SharedGetCustRq, SharedGetCustomerRequestCompanion, SharedGetCustomerRequest, SharedMngCustRqCompanion, SharedMngCustRq, SharedRegSvcRqCompanion, SharedSourceOfFundCompanion, SharedSourceOfFundsCompanion, SharedCurAmtCompanion, SharedCurAmt, SharedDepAccIdFromCompanion, SharedDepAccIdFrom, SharedPmtAddRq, SharedPaySvcRqCompanion, SharedPaymentAddRequestCompanion, SharedPaymentAddRequest, SharedPaymentType, SharedPmtInfo, SharedPmtAddRqCompanion, SharedPmtInfoCompanion, SharedStatusCompanion, SharedStatus, SharedAcctTerminalsCompanion, SharedAcctTerminals, SharedCustId_Companion, SharedCustId_, SharedCustIds_Companion, SharedCustIds_, SharedSourceOfFund_, SharedSourceOfFunds_, SharedCustSearchDataRCompanion, SharedCustSearchDataR, SharedCustsSearchDataCompanion, SharedCustsSearchData, SharedGetCustRsCompanion, SharedGetCustRs, SharedResponse, SharedGetCustomerInfoResponseCompanion, SharedGetCustomerInfoResponse, SharedTerminalInfo, SharedNetworkTrnInfo_, SharedMsgRqHdr_Companion, SharedMsgRqHdr_, SharedNetworkTrnInfo_Companion, SharedRegSvcRsCompanion, SharedRegSvcRs, SharedSignonRs, SharedResponseCompanion, SharedSignonProfile_Companion, SharedSignonProfile_, SharedSignonRsCompanion, SharedSourceOfFund_Companion, SharedSourceOfFunds_Companion, SharedTerminalInfoCompanion, SharedBalanceCompanion, SharedBalance, SharedCurAmt_Companion, SharedCurAmt_, SharedCustomProperties_Companion, SharedCustomProperties_, SharedCustomPropertyCompanion, SharedCustomProperty, SharedDepAccIdFrom_Companion, SharedDepAccIdFrom_, SharedFeesAmtCompanion, SharedFeesAmt, SharedNetworkTrnInfo__, SharedMsgRqHdr__Companion, SharedMsgRqHdr__, SharedNetworkTrnInfo__Companion, SharedPmtAddRs, SharedPaySvcRsCompanion, SharedPaySvcRs, SharedResponse_, SharedPaymentAddResponseCompanion, SharedPmtInfoVal, SharedPmtAddRsCompanion, SharedPmtInfo_Companion, SharedPmtInfo_, SharedPmtTransId, SharedPmtInfoValCompanion, SharedPmtTransIdCompanion, SharedSignonRs_, SharedResponse_Companion, SharedSignonProfile__Companion, SharedSignonProfile__, SharedSignonRs_Companion, SharedPaymentApi, SharedCacheManager, SharedPaymentInjector, SharedPaymentContextArgs, SharedKodein_diLazyDI, SharedErrorType, SharedApiResponseError, SharedKotlinNothing, SharedApiResponseSuccess<T>, SharedConstant, SharedConstantHttpCode, SharedConstantResponseCode, SharedKtor_client_coreHttpClient, SharedLoginConfigs, SharedDateUtils, SharedEncryptionUtil, SharedErrorHandler, SharedLanguage_, SharedKtor_client_coreHttpClientEngineConfig, SharedKtor_client_coreHttpClientConfig<T>, SharedKtor_eventsEvents, SharedKtor_client_coreHttpReceivePipeline, SharedKtor_client_coreHttpRequestPipeline, SharedKtor_client_coreHttpResponsePipeline, SharedKtor_client_coreHttpSendPipeline, SharedKtor_client_coreHttpRequestBuilder, SharedKotlinThrowable, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKtor_client_coreHttpResponse, SharedKtor_client_coreResponseException, SharedKtor_httpURLProtocol, SharedKodein_diDIModule, SharedKodein_diDITrigger, SharedKtor_client_coreHttpRequestData, SharedKtor_client_coreHttpResponseData, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedKtor_client_coreProxyConfig, SharedKtor_utilsAttributeKey<T>, SharedKtor_eventsEventDefinition<T>, SharedKtor_utilsPipelinePhase, SharedKtor_utilsPipeline<TSubject, TContext>, SharedKtor_client_coreHttpReceivePipelinePhases, SharedKotlinUnit, SharedKtor_client_coreHttpRequestPipelinePhases, SharedKtor_client_coreHttpResponsePipelinePhases, SharedKtor_client_coreHttpResponseContainer, SharedKtor_client_coreHttpClientCall, SharedKtor_client_coreHttpSendPipelinePhases, SharedKtor_httpHeadersBuilder, SharedKtor_client_coreHttpRequestBuilderCompanion, SharedKtor_httpURLBuilder, SharedKtor_utilsTypeInfo, SharedKtor_httpHttpMethod, SharedKtor_utilsGMTDate, SharedKtor_httpHttpStatusCode, SharedKtor_httpHttpProtocolVersion, SharedKtor_httpURLProtocolCompanion, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, SharedKtor_httpUrl, SharedKtor_httpOutgoingContent, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKtor_client_coreHttpClientCallCompanion, SharedKtor_utilsStringValuesBuilderImpl, SharedKtor_httpURLBuilderCompanion, SharedKotlinCancellationException, SharedKtor_httpHttpMethodCompanion, SharedKtor_ioMemory, SharedKtor_ioChunkBuffer, SharedKtor_ioBuffer, SharedKotlinByteArray, SharedKtor_ioByteReadPacket, SharedKtor_utilsGMTDateCompanion, SharedKtor_utilsWeekDay, SharedKtor_utilsMonth, SharedKtor_httpHttpStatusCodeCompanion, SharedKtor_httpHttpProtocolVersionCompanion, SharedKodein_diDIBuilderDelegateBinder<T>, SharedKodein_diDIDefinition<C, A, T>, SharedKotlinTriple<__covariant A, __covariant B, __covariant C>, SharedKodein_diSearchSpecs, SharedKotlinKTypeProjection, SharedKtor_httpUrlCompanion, SharedKtor_httpContentType, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedKtor_ioMemoryCompanion, SharedKtor_ioBufferCompanion, SharedKtor_ioChunkBufferCompanion, SharedKotlinByteIterator, SharedKtor_ioInputCompanion, SharedKtor_ioInput, SharedKtor_ioByteReadPacketCompanion, SharedKtor_utilsWeekDayCompanion, SharedKtor_utilsMonthCompanion, SharedKodein_diScopeRegistry, SharedKodein_diDIDefining<C, A, T>, SharedKotlinKVariance, SharedKotlinKTypeProjectionCompanion, SharedKtor_httpHeaderValueParam, SharedKtor_httpHeaderValueWithParametersCompanion, SharedKtor_httpHeaderValueWithParameters, SharedKtor_httpContentTypeCompanion, SharedKotlinx_coroutines_coreAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, SharedKodein_diReference<__covariant T>, SharedKotlinx_coroutines_coreAtomicOp<__contravariant T>, SharedKotlinx_coroutines_coreOpDescriptor, SharedKotlinx_coroutines_coreLockFreeLinkedListNode, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol SharedFawryCallbacksLogin, SharedPlatform, SharedKotlinComparable, SharedKotlinx_serialization_coreKSerializer, SharedLoginRepo, SharedPaymentRepo, SharedKotlinCoroutineContext, SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable, SharedKtor_client_coreHttpClientEngine, SharedKtor_client_coreHttpClientEngineCapability, SharedKtor_utilsAttributes, SharedKotlinIterator, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKodein_diDIContainer, SharedKodein_diDI, SharedKodein_diDIContext, SharedKodein_diDIAware, SharedKotlinKProperty, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKtor_client_coreHttpClientPlugin, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinSuspendFunction2, SharedKtor_httpHttpMessageBuilder, SharedKotlinx_coroutines_coreJob, SharedKtor_httpHeaders, SharedKtor_httpHttpMessage, SharedKtor_ioByteReadChannel, SharedKodein_diDIBuilder, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKodein_diDITree, SharedKaveritTypeToken, SharedKotlinLazy, SharedKotlinKType, SharedKotlinKAnnotatedElement, SharedKotlinKCallable, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinFunction, SharedKtor_client_coreHttpRequest, SharedKtor_utilsStringValues, SharedKotlinMapEntry, SharedKtor_utilsStringValuesBuilder, SharedKtor_httpParameters, SharedKtor_httpParametersBuilder, SharedKotlinKClass, SharedKotlinx_coroutines_coreChildHandle, SharedKotlinx_coroutines_coreChildJob, SharedKotlinSequence, SharedKotlinx_coroutines_coreSelectClause0, SharedKtor_ioReadSession, SharedKotlinSuspendFunction1, SharedKotlinAppendable, SharedKodein_diDIBuilderDirectBinder, SharedKodein_diDIBinding, SharedKodein_diDIBuilderTypeBinder, SharedKodein_diContextTranslator, SharedKodein_diDIBuilderConstantBinder, SharedKodein_diDirectDI, SharedKodein_diDIContainerBuilder, SharedKodein_diDIBindBuilder, SharedKodein_diScope, SharedKodein_diDIBindBuilderWithScope, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKodein_diExternalSource, SharedKotlinKClassifier, SharedKotlinKDeclarationContainer, SharedKotlinx_coroutines_coreParentJob, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinSuspendFunction0, SharedKtor_ioObjectPool, SharedKodein_diDIBindingCopier, SharedKodein_diBindingDI, SharedKodein_diBinding, SharedKodein_diDirectDIAware, SharedKodein_diDirectDIBase, SharedKodein_diWithContext, SharedKodein_diScopeCloseable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FawryPaymentSdk")))
@interface SharedFawryPaymentSdk : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fawryPaymentSdk __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFawryPaymentSdk *shared __attribute__((swift_name("shared")));
- (void)clearCache __attribute__((swift_name("clearCache()")));
- (void)initializeGatewayBaseUrl:(NSString *)gatewayBaseUrl sofUrlPath:(NSString *)sofUrlPath gwUrlPath:(NSString *)gwUrlPath language:(SharedLanguage *)language isSslEnabled:(BOOL)isSslEnabled __attribute__((swift_name("initialize(gatewayBaseUrl:sofUrlPath:gwUrlPath:language:isSslEnabled:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginAccountId:(NSString *)accountId csp:(NSString * _Nullable)csp sender:(NSString *)sender callback:(id<SharedFawryCallbacksLogin>)callback terminalType:(NSString * _Nullable)terminalType completionHandler:(void (^)(SharedApiResponse<SharedLoginResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(accountId:csp:sender:callback:terminalType:completionHandler:)")));
- (void)loginAccountId:(NSString *)accountId csp:(NSString * _Nullable)csp sender:(NSString *)sender callback:(id<SharedFawryCallbacksLogin>)callback terminalType:(NSString * _Nullable)terminalType completion:(void (^)(SharedLoginResponse * _Nullable, SharedFawryError * _Nullable))completion __attribute__((swift_name("login(accountId:csp:sender:callback:terminalType:completion:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)payWithSDATotalAmount:(NSString *)totalAmount billTypeCode:(NSString *)billTypeCode csp:(NSString * _Nullable)csp sender:(NSString *)sender sdaFees:(SharedDouble * _Nullable)sdaFees terminalType:(NSString *)terminalType secretKey:(NSString * _Nullable)secretKey billingAccount:(NSString * _Nullable)billingAccount customerMobile:(NSString * _Nullable)customerMobile completionHandler:(void (^)(SharedApiResponse<SharedPaymentAddResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("payWithSDA(totalAmount:billTypeCode:csp:sender:sdaFees:terminalType:secretKey:billingAccount:customerMobile:completionHandler:)")));
- (void)payWithSDATotalAmount:(NSString *)totalAmount billTypeCode:(NSString *)billTypeCode csp:(NSString * _Nullable)csp sender:(NSString *)sender sdaFees:(SharedDouble * _Nullable)sdaFees terminalType:(NSString *)terminalType secretKey:(NSString * _Nullable)secretKey billingAccount:(NSString * _Nullable)billingAccount customerMobile:(NSString * _Nullable)customerMobile completion:(void (^)(SharedPaymentAddResponse * _Nullable, SharedFawryError * _Nullable))completion __attribute__((swift_name("payWithSDA(totalAmount:billTypeCode:csp:sender:sdaFees:terminalType:secretKey:billingAccount:customerMobile:completion:)")));
@property NSString * _Nullable billTypeCode __attribute__((swift_name("billTypeCode")));
@property NSString * _Nullable billingAccount __attribute__((swift_name("billingAccount")));
@property NSString * _Nullable csp __attribute__((swift_name("csp")));
@property NSString * _Nullable gatewayBaseUrl __attribute__((swift_name("gatewayBaseUrl")));
@property NSString *gwUrlPath __attribute__((swift_name("gwUrlPath")));
@property SharedLanguage *language __attribute__((swift_name("language")));
@property id<SharedFawryCallbacksLogin> _Nullable loginCallback __attribute__((swift_name("loginCallback")));
@property SharedDouble * _Nullable sdaFees __attribute__((swift_name("sdaFees")));
@property NSString * _Nullable sender __attribute__((swift_name("sender")));
@property NSString *sofUrlPath __attribute__((swift_name("sofUrlPath")));
@property NSString *terminalType __attribute__((swift_name("terminalType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FawryPaymentSdk.Config")))
@interface SharedFawryPaymentSdkConfig : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)config __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFawryPaymentSdkConfig *shared __attribute__((swift_name("shared")));
@property BOOL sslEnabled __attribute__((swift_name("sslEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface SharedLanguage : SharedKotlinEnum<SharedLanguage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedLanguage *english __attribute__((swift_name("english")));
@property (class, readonly) SharedLanguage *arabic __attribute__((swift_name("arabic")));
+ (SharedKotlinArray<SharedLanguage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedLanguage *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end

__attribute__((swift_name("FawryCallbacks")))
@protocol SharedFawryCallbacks
@required
@end

__attribute__((swift_name("FawryCallbacksLogin")))
@protocol SharedFawryCallbacksLogin
@required
- (void)onErrorError:(SharedFawryError *)error __attribute__((swift_name("onError(error:)")));
- (void)onLoading __attribute__((swift_name("onLoading()")));
- (void)onSuccessData:(SharedLoginResponse *)data __attribute__((swift_name("onSuccess(data:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FawryError")))
@interface SharedFawryError : SharedBase
- (instancetype)initWithStatusCode:(SharedInt * _Nullable)statusCode message:(NSString * _Nullable)message statusDescription:(NSString * _Nullable)statusDescription __attribute__((swift_name("init(statusCode:message:statusDescription:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFawryErrorCompanion *companion __attribute__((swift_name("companion")));
- (SharedFawryError *)doCopyStatusCode:(SharedInt * _Nullable)statusCode message:(NSString * _Nullable)message statusDescription:(NSString * _Nullable)statusDescription __attribute__((swift_name("doCopy(statusCode:message:statusDescription:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) SharedInt * _Nullable statusCode __attribute__((swift_name("statusCode")));
@property (readonly) NSString * _Nullable statusDescription __attribute__((swift_name("statusDescription")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FawryError.Companion")))
@interface SharedFawryErrorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFawryErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CacheKeys")))
@interface SharedCacheKeys : SharedKotlinEnum<SharedCacheKeys *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCacheKeys *terminalType __attribute__((swift_name("terminalType")));
@property (class, readonly) SharedCacheKeys *accountId __attribute__((swift_name("accountId")));
@property (class, readonly) SharedCacheKeys *profileCode __attribute__((swift_name("profileCode")));
@property (class, readonly) SharedCacheKeys *sofPin __attribute__((swift_name("sofPin")));
@property (class, readonly) SharedCacheKeys *keyExchangeToken __attribute__((swift_name("keyExchangeToken")));
+ (SharedKotlinArray<SharedCacheKeys *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedCacheKeys *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CacheManager")))
@interface SharedCacheManager : SharedBase
- (instancetype)initWithSharedPrefs:(SharedSharedPrefs *)sharedPrefs __attribute__((swift_name("init(sharedPrefs:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getAccountId __attribute__((swift_name("getAccountId()")));
- (NSString * _Nullable)getCustomerProfileCode __attribute__((swift_name("getCustomerProfileCode()")));
- (NSString * _Nullable)getTerminalType __attribute__((swift_name("getTerminalType()")));
- (void)invalidateCache __attribute__((swift_name("invalidateCache()")));
- (void)saveAccountIdAccountId:(NSString * _Nullable)accountId __attribute__((swift_name("saveAccountId(accountId:)")));
- (void)saveCustomerProfileCodeCode:(NSString * _Nullable)code __attribute__((swift_name("saveCustomerProfileCode(code:)")));
- (void)saveTerminalTypeTerminalType:(NSString * _Nullable)terminalType __attribute__((swift_name("saveTerminalType(terminalType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedPrefs")))
@interface SharedSharedPrefs : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (SharedBoolean * _Nullable)getBooleanKey:(NSString *)key __attribute__((swift_name("getBoolean(key:)")));
- (SharedInt * _Nullable)getIntKey:(NSString *)key __attribute__((swift_name("getInt(key:)")));
- (NSString * _Nullable)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
- (void)removeKeyKey:(NSString *)key __attribute__((swift_name("removeKey(key:)")));
- (void)saveBooleanKey:(NSString *)key value:(SharedBoolean * _Nullable)value __attribute__((swift_name("saveBoolean(key:value:)")));
- (void)saveIntKey:(NSString *)key value:(SharedInt * _Nullable)value __attribute__((swift_name("saveInt(key:value:)")));
- (void)saveStringKey:(NSString *)key value:(NSString * _Nullable)value __attribute__((swift_name("saveString(key:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponse")))
@interface SharedLoginResponse : SharedBase
- (instancetype)initWithAccountId:(NSString * _Nullable)accountId terminalType:(NSString * _Nullable)terminalType profileCode:(NSString * _Nullable)profileCode bankId:(NSString * _Nullable)bankId __attribute__((swift_name("init(accountId:terminalType:profileCode:bankId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedLoginResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedLoginResponse *)doCopyAccountId:(NSString * _Nullable)accountId terminalType:(NSString * _Nullable)terminalType profileCode:(NSString * _Nullable)profileCode bankId:(NSString * _Nullable)bankId __attribute__((swift_name("doCopy(accountId:terminalType:profileCode:bankId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accountId __attribute__((swift_name("accountId")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) NSString * _Nullable profileCode __attribute__((swift_name("profileCode")));
@property (readonly) NSString * _Nullable terminalType __attribute__((swift_name("terminalType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponse.Companion")))
@interface SharedLoginResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomProperties")))
@interface SharedCustomProperties : SharedBase
- (instancetype)initWithCustomProperty:(NSArray<id> * _Nullable)customProperty __attribute__((swift_name("init(customProperty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustomPropertiesCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustomProperties *)doCopyCustomProperty:(NSArray<id> * _Nullable)customProperty __attribute__((swift_name("doCopy(customProperty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable customProperty __attribute__((swift_name("customProperty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomProperties.Companion")))
@interface SharedCustomPropertiesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustomPropertiesCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyValuePair")))
@interface SharedKeyValuePair : SharedBase
- (instancetype)initWithKey:(NSString * _Nullable)key value:(NSString * _Nullable)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKeyValuePairCompanion *companion __attribute__((swift_name("companion")));
- (SharedKeyValuePair *)doCopyKey:(NSString * _Nullable)key value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyValuePair.Companion")))
@interface SharedKeyValuePairCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKeyValuePairCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsgRqHdr")))
@interface SharedMsgRqHdr : SharedBase
- (instancetype)initWithNetworkTrnInfo:(SharedNetworkTrnInfo * _Nullable)networkTrnInfo customProperties:(SharedCustomProperties * _Nullable)customProperties clientTerminalSeqId:(NSString * _Nullable)clientTerminalSeqId __attribute__((swift_name("init(networkTrnInfo:customProperties:clientTerminalSeqId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMsgRqHdrCompanion *companion __attribute__((swift_name("companion")));
- (SharedMsgRqHdr *)doCopyNetworkTrnInfo:(SharedNetworkTrnInfo * _Nullable)networkTrnInfo customProperties:(SharedCustomProperties * _Nullable)customProperties clientTerminalSeqId:(NSString * _Nullable)clientTerminalSeqId __attribute__((swift_name("doCopy(networkTrnInfo:customProperties:clientTerminalSeqId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable clientTerminalSeqId __attribute__((swift_name("clientTerminalSeqId")));
@property (readonly) SharedCustomProperties * _Nullable customProperties __attribute__((swift_name("customProperties")));
@property (readonly) SharedNetworkTrnInfo * _Nullable networkTrnInfo __attribute__((swift_name("networkTrnInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsgRqHdr.Companion")))
@interface SharedMsgRqHdrCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMsgRqHdrCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkTrnInfo")))
@interface SharedNetworkTrnInfo : SharedBase
- (instancetype)initWithOriginatorCode:(NSString * _Nullable)originatorCode terminalId:(NSString * _Nullable)terminalId __attribute__((swift_name("init(originatorCode:terminalId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedNetworkTrnInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedNetworkTrnInfo *)doCopyOriginatorCode:(NSString * _Nullable)originatorCode terminalId:(NSString * _Nullable)terminalId __attribute__((swift_name("doCopy(originatorCode:terminalId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable originatorCode __attribute__((swift_name("originatorCode")));
@property (readonly) NSString * _Nullable terminalId __attribute__((swift_name("terminalId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkTrnInfo.Companion")))
@interface SharedNetworkTrnInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNetworkTrnInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request")))
@interface SharedRequest : SharedBase
- (instancetype)initWithRegSvcRq:(SharedRegSvcRq * _Nullable)regSvcRq signonRq:(SharedSignonRq * _Nullable)signonRq isRetry:(NSString * _Nullable)isRetry presSvcRq:(SharedPresSvcRq * _Nullable)presSvcRq paySvcRq:(SharedPaySvcRq * _Nullable)paySvcRq __attribute__((swift_name("init(regSvcRq:signonRq:isRetry:presSvcRq:paySvcRq:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedRequest *)doCopyRegSvcRq:(SharedRegSvcRq * _Nullable)regSvcRq signonRq:(SharedSignonRq * _Nullable)signonRq isRetry:(NSString * _Nullable)isRetry presSvcRq:(SharedPresSvcRq * _Nullable)presSvcRq paySvcRq:(SharedPaySvcRq * _Nullable)paySvcRq __attribute__((swift_name("doCopy(regSvcRq:signonRq:isRetry:presSvcRq:paySvcRq:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable isRetry __attribute__((swift_name("isRetry")));
@property (readonly) SharedPaySvcRq * _Nullable paySvcRq __attribute__((swift_name("paySvcRq")));
@property (readonly) SharedPresSvcRq * _Nullable presSvcRq __attribute__((swift_name("presSvcRq")));
@property (readonly) SharedRegSvcRq * _Nullable regSvcRq __attribute__((swift_name("regSvcRq")));
@property (readonly) SharedSignonRq * _Nullable signonRq __attribute__((swift_name("signonRq")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Request.Companion")))
@interface SharedRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonProfile")))
@interface SharedSignonProfile : SharedBase
- (instancetype)initWithMsgCode:(NSString * _Nullable)msgCode receiver:(NSString * _Nullable)receiver sender:(NSString * _Nullable)sender version:(NSString * _Nullable)version __attribute__((swift_name("init(msgCode:receiver:sender:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSignonProfileCompanion *companion __attribute__((swift_name("companion")));
- (SharedSignonProfile *)doCopyMsgCode:(NSString * _Nullable)msgCode receiver:(NSString * _Nullable)receiver sender:(NSString * _Nullable)sender version:(NSString * _Nullable)version __attribute__((swift_name("doCopy(msgCode:receiver:sender:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable msgCode __attribute__((swift_name("msgCode")));
@property (readonly) NSString * _Nullable receiver __attribute__((swift_name("receiver")));
@property (readonly) NSString * _Nullable sender __attribute__((swift_name("sender")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonProfile.Companion")))
@interface SharedSignonProfileCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSignonProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonRq")))
@interface SharedSignonRq : SharedBase
- (instancetype)initWithClientDt:(NSString * _Nullable)clientDt custLangPref:(NSString * _Nullable)custLangPref signonProfile:(SharedSignonProfile * _Nullable)signonProfile suppressEcho:(NSString * _Nullable)suppressEcho __attribute__((swift_name("init(clientDt:custLangPref:signonProfile:suppressEcho:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSignonRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedSignonRq *)doCopyClientDt:(NSString * _Nullable)clientDt custLangPref:(NSString * _Nullable)custLangPref signonProfile:(SharedSignonProfile * _Nullable)signonProfile suppressEcho:(NSString * _Nullable)suppressEcho __attribute__((swift_name("doCopy(clientDt:custLangPref:signonProfile:suppressEcho:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable clientDt __attribute__((swift_name("clientDt")));
@property (readonly) NSString * _Nullable custLangPref __attribute__((swift_name("custLangPref")));
@property (readonly) SharedSignonProfile * _Nullable signonProfile __attribute__((swift_name("signonProfile")));
@property (readonly) NSString * _Nullable suppressEcho __attribute__((swift_name("suppressEcho")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonRq.Companion")))
@interface SharedSignonRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSignonRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillInqRq")))
@interface SharedBillInqRq : SharedBase
- (instancetype)initWithBankId:(NSString * _Nullable)bankId billTypeCode:(NSString * _Nullable)billTypeCode billingAcct:(NSString * _Nullable)billingAcct deliveryMethod:(NSString * _Nullable)deliveryMethod incOpenAmt:(NSString * _Nullable)incOpenAmt profileCode:(NSString * _Nullable)profileCode recCtrlIn:(SharedRecCtrlIn * _Nullable)recCtrlIn __attribute__((swift_name("init(bankId:billTypeCode:billingAcct:deliveryMethod:incOpenAmt:profileCode:recCtrlIn:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedBillInqRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedBillInqRq *)doCopyBankId:(NSString * _Nullable)bankId billTypeCode:(NSString * _Nullable)billTypeCode billingAcct:(NSString * _Nullable)billingAcct deliveryMethod:(NSString * _Nullable)deliveryMethod incOpenAmt:(NSString * _Nullable)incOpenAmt profileCode:(NSString * _Nullable)profileCode recCtrlIn:(SharedRecCtrlIn * _Nullable)recCtrlIn __attribute__((swift_name("doCopy(bankId:billTypeCode:billingAcct:deliveryMethod:incOpenAmt:profileCode:recCtrlIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) NSString * _Nullable billTypeCode __attribute__((swift_name("billTypeCode")));
@property (readonly) NSString * _Nullable billingAcct __attribute__((swift_name("billingAcct")));
@property (readonly) NSString * _Nullable deliveryMethod __attribute__((swift_name("deliveryMethod")));
@property (readonly) NSString * _Nullable incOpenAmt __attribute__((swift_name("incOpenAmt")));
@property (readonly) NSString * _Nullable profileCode __attribute__((swift_name("profileCode")));
@property (readonly) SharedRecCtrlIn * _Nullable recCtrlIn __attribute__((swift_name("recCtrlIn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillInqRq.Companion")))
@interface SharedBillInqRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBillInqRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresSvcRq")))
@interface SharedPresSvcRq : SharedBase
- (instancetype)initWithBillInqRq:(SharedBillInqRq * _Nullable)billInqRq msgRqHdr:(SharedMsgRqHdr * _Nullable)msgRqHdr rqUID:(NSString * _Nullable)rqUID __attribute__((swift_name("init(billInqRq:msgRqHdr:rqUID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPresSvcRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedPresSvcRq *)doCopyBillInqRq:(SharedBillInqRq * _Nullable)billInqRq msgRqHdr:(SharedMsgRqHdr * _Nullable)msgRqHdr rqUID:(NSString * _Nullable)rqUID __attribute__((swift_name("doCopy(billInqRq:msgRqHdr:rqUID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBillInqRq * _Nullable billInqRq __attribute__((swift_name("billInqRq")));
@property (readonly) SharedMsgRqHdr * _Nullable msgRqHdr __attribute__((swift_name("msgRqHdr")));
@property (readonly) NSString * _Nullable rqUID __attribute__((swift_name("rqUID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PresSvcRq.Companion")))
@interface SharedPresSvcRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPresSvcRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecCtrlIn")))
@interface SharedRecCtrlIn : SharedBase
- (instancetype)initWithMaxRec:(NSString * _Nullable)maxRec __attribute__((swift_name("init(maxRec:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRecCtrlInCompanion *companion __attribute__((swift_name("companion")));
- (SharedRecCtrlIn *)doCopyMaxRec:(NSString * _Nullable)maxRec __attribute__((swift_name("doCopy(maxRec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable maxRec __attribute__((swift_name("maxRec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecCtrlIn.Companion")))
@interface SharedRecCtrlInCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRecCtrlInCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactInfo")))
@interface SharedContactInfo : SharedBase
- (instancetype)initWithAlias:(NSString * _Nullable)alias contactType:(NSString * _Nullable)contactType contactValue:(NSString * _Nullable)contactValue isDefault:(SharedBoolean * _Nullable)isDefault __attribute__((swift_name("init(alias:contactType:contactValue:isDefault:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedContactInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedContactInfo *)doCopyAlias:(NSString * _Nullable)alias contactType:(NSString * _Nullable)contactType contactValue:(NSString * _Nullable)contactValue isDefault:(SharedBoolean * _Nullable)isDefault __attribute__((swift_name("doCopy(alias:contactType:contactValue:isDefault:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSString * _Nullable contactType __attribute__((swift_name("contactType")));
@property (readonly) NSString * _Nullable contactValue __attribute__((swift_name("contactValue")));
@property (readonly) SharedBoolean * _Nullable isDefault __attribute__((swift_name("isDefault")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactInfo.Companion")))
@interface SharedContactInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedContactInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustData")))
@interface SharedCustData : SharedBase
- (instancetype)initWithContactInfo:(NSArray<id> * _Nullable)contactInfo custCategoryCode:(NSString * _Nullable)custCategoryCode custIds:(SharedCustIds * _Nullable)custIds custStatus:(NSString * _Nullable)custStatus custType:(NSString * _Nullable)custType kYCLevel:(NSString * _Nullable)kYCLevel optType:(NSString * _Nullable)optType sourceOfFunds:(SharedSourceOfFunds * _Nullable)sourceOfFunds __attribute__((swift_name("init(contactInfo:custCategoryCode:custIds:custStatus:custType:kYCLevel:optType:sourceOfFunds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustData *)doCopyContactInfo:(NSArray<id> * _Nullable)contactInfo custCategoryCode:(NSString * _Nullable)custCategoryCode custIds:(SharedCustIds * _Nullable)custIds custStatus:(NSString * _Nullable)custStatus custType:(NSString * _Nullable)custType kYCLevel:(NSString * _Nullable)kYCLevel optType:(NSString * _Nullable)optType sourceOfFunds:(SharedSourceOfFunds * _Nullable)sourceOfFunds __attribute__((swift_name("doCopy(contactInfo:custCategoryCode:custIds:custStatus:custType:kYCLevel:optType:sourceOfFunds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable contactInfo __attribute__((swift_name("contactInfo")));
@property (readonly) NSString * _Nullable custCategoryCode __attribute__((swift_name("custCategoryCode")));
@property (readonly) SharedCustIds * _Nullable custIds __attribute__((swift_name("custIds")));
@property (readonly) NSString * _Nullable custStatus __attribute__((swift_name("custStatus")));
@property (readonly) NSString * _Nullable custType __attribute__((swift_name("custType")));
@property (readonly) NSString * _Nullable kYCLevel __attribute__((swift_name("kYCLevel")));
@property (readonly) NSString * _Nullable optType __attribute__((swift_name("optType")));
@property (readonly) SharedSourceOfFunds * _Nullable sourceOfFunds __attribute__((swift_name("sourceOfFunds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustData.Companion")))
@interface SharedCustDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustId")))
@interface SharedCustId : SharedBase
- (instancetype)initWithOfficialId:(NSString * _Nullable)officialId officialIdType:(NSString * _Nullable)officialIdType __attribute__((swift_name("init(officialId:officialIdType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustIdCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustId *)doCopyOfficialId:(NSString * _Nullable)officialId officialIdType:(NSString * _Nullable)officialIdType __attribute__((swift_name("doCopy(officialId:officialIdType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable officialId __attribute__((swift_name("officialId")));
@property (readonly) NSString * _Nullable officialIdType __attribute__((swift_name("officialIdType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustId.Companion")))
@interface SharedCustIdCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustIdCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustIds")))
@interface SharedCustIds : SharedBase
- (instancetype)initWithCustId:(NSArray<id> * _Nullable)custId __attribute__((swift_name("init(custId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustIdsCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustIds *)doCopyCustId:(NSArray<id> * _Nullable)custId __attribute__((swift_name("doCopy(custId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable custId __attribute__((swift_name("custId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustIds.Companion")))
@interface SharedCustIdsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustIdsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustSearchData")))
@interface SharedCustSearchData : SharedBase
- (instancetype)initWithSearchCriteria:(NSString * _Nullable)searchCriteria sourceOfFund:(SharedSourceOfFund * _Nullable)sourceOfFund __attribute__((swift_name("init(searchCriteria:sourceOfFund:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustSearchDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustSearchData *)doCopySearchCriteria:(NSString * _Nullable)searchCriteria sourceOfFund:(SharedSourceOfFund * _Nullable)sourceOfFund __attribute__((swift_name("doCopy(searchCriteria:sourceOfFund:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable searchCriteria __attribute__((swift_name("searchCriteria")));
@property (readonly) SharedSourceOfFund * _Nullable sourceOfFund __attribute__((swift_name("sourceOfFund")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustSearchData.Companion")))
@interface SharedCustSearchDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustSearchDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustRq")))
@interface SharedGetCustRq : SharedBase
- (instancetype)initWithCustSearchData:(SharedCustSearchData * _Nullable)custSearchData bankId:(NSString * _Nullable)bankId __attribute__((swift_name("init(custSearchData:bankId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedGetCustRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedGetCustRq *)doCopyCustSearchData:(SharedCustSearchData * _Nullable)custSearchData bankId:(NSString * _Nullable)bankId __attribute__((swift_name("doCopy(custSearchData:bankId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) SharedCustSearchData * _Nullable custSearchData __attribute__((swift_name("custSearchData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustRq.Companion")))
@interface SharedGetCustRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetCustRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustomerRequest")))
@interface SharedGetCustomerRequest : SharedBase
- (instancetype)initWithRequest:(SharedRequest * _Nullable)request __attribute__((swift_name("init(request:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedGetCustomerRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedGetCustomerRequest *)doCopyRequest:(SharedRequest * _Nullable)request __attribute__((swift_name("doCopy(request:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRequest * _Nullable request __attribute__((swift_name("request")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustomerRequest.Companion")))
@interface SharedGetCustomerRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetCustomerRequestCompanion *shared __attribute__((swift_name("shared")));
- (SharedGetCustomerRequest *)getAccountId:(NSString *)accountId terminalType:(NSString *)terminalType csp:(NSString * _Nullable)csp sender:(NSString *)sender __attribute__((swift_name("get(accountId:terminalType:csp:sender:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MngCustRq")))
@interface SharedMngCustRq : SharedBase
- (instancetype)initWithBankId:(NSString * _Nullable)bankId custData:(SharedCustData * _Nullable)custData __attribute__((swift_name("init(bankId:custData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMngCustRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedMngCustRq *)doCopyBankId:(NSString * _Nullable)bankId custData:(SharedCustData * _Nullable)custData __attribute__((swift_name("doCopy(bankId:custData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) SharedCustData * _Nullable custData __attribute__((swift_name("custData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MngCustRq.Companion")))
@interface SharedMngCustRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMngCustRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegSvcRq")))
@interface SharedRegSvcRq : SharedBase
- (instancetype)initWithAsyncRqUID:(NSString * _Nullable)asyncRqUID getCustRq:(SharedGetCustRq * _Nullable)getCustRq msgRqHdr:(SharedMsgRqHdr * _Nullable)msgRqHdr rqUID:(NSString * _Nullable)rqUID __attribute__((swift_name("init(asyncRqUID:getCustRq:msgRqHdr:rqUID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRegSvcRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedRegSvcRq *)doCopyAsyncRqUID:(NSString * _Nullable)asyncRqUID getCustRq:(SharedGetCustRq * _Nullable)getCustRq msgRqHdr:(SharedMsgRqHdr * _Nullable)msgRqHdr rqUID:(NSString * _Nullable)rqUID __attribute__((swift_name("doCopy(asyncRqUID:getCustRq:msgRqHdr:rqUID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable asyncRqUID __attribute__((swift_name("asyncRqUID")));
@property (readonly) SharedGetCustRq * _Nullable getCustRq __attribute__((swift_name("getCustRq")));
@property (readonly) SharedMsgRqHdr * _Nullable msgRqHdr __attribute__((swift_name("msgRqHdr")));
@property (readonly) NSString * _Nullable rqUID __attribute__((swift_name("rqUID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegSvcRq.Companion")))
@interface SharedRegSvcRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRegSvcRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFund")))
@interface SharedSourceOfFund : SharedBase
- (instancetype)initWithSOFId:(NSString * _Nullable)sOFId sOFType:(NSString * _Nullable)sOFType pin:(NSString * _Nullable)pin terminalType:(NSString * _Nullable)terminalType __attribute__((swift_name("init(sOFId:sOFType:pin:terminalType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSourceOfFundCompanion *companion __attribute__((swift_name("companion")));
- (SharedSourceOfFund *)doCopySOFId:(NSString * _Nullable)sOFId sOFType:(NSString * _Nullable)sOFType pin:(NSString * _Nullable)pin terminalType:(NSString * _Nullable)terminalType __attribute__((swift_name("doCopy(sOFId:sOFType:pin:terminalType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable pin __attribute__((swift_name("pin")));
@property (readonly) NSString * _Nullable sOFId __attribute__((swift_name("sOFId")));
@property (readonly) NSString * _Nullable sOFType __attribute__((swift_name("sOFType")));
@property (readonly) NSString * _Nullable terminalType __attribute__((swift_name("terminalType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFund.Companion")))
@interface SharedSourceOfFundCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSourceOfFundCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFunds")))
@interface SharedSourceOfFunds : SharedBase
- (instancetype)initWithSourceOfFund:(NSArray<id> * _Nullable)sourceOfFund __attribute__((swift_name("init(sourceOfFund:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSourceOfFundsCompanion *companion __attribute__((swift_name("companion")));
- (SharedSourceOfFunds *)doCopySourceOfFund:(NSArray<id> * _Nullable)sourceOfFund __attribute__((swift_name("doCopy(sourceOfFund:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable sourceOfFund __attribute__((swift_name("sourceOfFund")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFunds.Companion")))
@interface SharedSourceOfFundsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSourceOfFundsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurAmt")))
@interface SharedCurAmt : SharedBase
- (instancetype)initWithAmt:(NSString * _Nullable)amt curCode:(NSString * _Nullable)curCode __attribute__((swift_name("init(amt:curCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCurAmtCompanion *companion __attribute__((swift_name("companion")));
- (SharedCurAmt *)doCopyAmt:(NSString * _Nullable)amt curCode:(NSString * _Nullable)curCode __attribute__((swift_name("doCopy(amt:curCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable amt __attribute__((swift_name("amt")));
@property (readonly) NSString * _Nullable curCode __attribute__((swift_name("curCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurAmt.Companion")))
@interface SharedCurAmtCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCurAmtCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepAccIdFrom")))
@interface SharedDepAccIdFrom : SharedBase
- (instancetype)initWithAcctCur:(NSString * _Nullable)acctCur acctId:(NSString * _Nullable)acctId acctType:(NSString * _Nullable)acctType secureAcctKey:(NSString * _Nullable)secureAcctKey __attribute__((swift_name("init(acctCur:acctId:acctType:secureAcctKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDepAccIdFromCompanion *companion __attribute__((swift_name("companion")));
- (SharedDepAccIdFrom *)doCopyAcctCur:(NSString * _Nullable)acctCur acctId:(NSString * _Nullable)acctId acctType:(NSString * _Nullable)acctType secureAcctKey:(NSString * _Nullable)secureAcctKey __attribute__((swift_name("doCopy(acctCur:acctId:acctType:secureAcctKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable acctCur __attribute__((swift_name("acctCur")));
@property (readonly) NSString * _Nullable acctId __attribute__((swift_name("acctId")));
@property (readonly) NSString * _Nullable acctType __attribute__((swift_name("acctType")));
@property (readonly) NSString * _Nullable secureAcctKey __attribute__((swift_name("secureAcctKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepAccIdFrom.Companion")))
@interface SharedDepAccIdFromCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDepAccIdFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaySvcRq")))
@interface SharedPaySvcRq : SharedBase
- (instancetype)initWithMsgRqHdr:(SharedMsgRqHdr * _Nullable)msgRqHdr pmtAddRq:(SharedPmtAddRq * _Nullable)pmtAddRq rqUID:(NSString * _Nullable)rqUID asyncRqUID:(NSString * _Nullable)asyncRqUID __attribute__((swift_name("init(msgRqHdr:pmtAddRq:rqUID:asyncRqUID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPaySvcRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedPaySvcRq *)doCopyMsgRqHdr:(SharedMsgRqHdr * _Nullable)msgRqHdr pmtAddRq:(SharedPmtAddRq * _Nullable)pmtAddRq rqUID:(NSString * _Nullable)rqUID asyncRqUID:(NSString * _Nullable)asyncRqUID __attribute__((swift_name("doCopy(msgRqHdr:pmtAddRq:rqUID:asyncRqUID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable asyncRqUID __attribute__((swift_name("asyncRqUID")));
@property (readonly) SharedMsgRqHdr * _Nullable msgRqHdr __attribute__((swift_name("msgRqHdr")));
@property (readonly) SharedPmtAddRq * _Nullable pmtAddRq __attribute__((swift_name("pmtAddRq")));
@property (readonly) NSString * _Nullable rqUID __attribute__((swift_name("rqUID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaySvcRq.Companion")))
@interface SharedPaySvcRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPaySvcRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentAddRequest")))
@interface SharedPaymentAddRequest : SharedBase
- (instancetype)initWithRequest:(SharedRequest * _Nullable)request __attribute__((swift_name("init(request:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPaymentAddRequestCompanion *companion __attribute__((swift_name("companion")));
- (SharedPaymentAddRequest *)doCopyRequest:(SharedRequest * _Nullable)request __attribute__((swift_name("doCopy(request:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRequest * _Nullable request __attribute__((swift_name("request")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentAddRequest.Companion")))
@interface SharedPaymentAddRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPaymentAddRequestCompanion *shared __attribute__((swift_name("shared")));
- (SharedPaymentAddRequest *)getAccountId:(NSString *)accountId billTypeCode:(NSString *)billTypeCode csp:(NSString *)csp sender:(NSString *)sender amount:(double)amount paymentType:(SharedPaymentType *)paymentType customerMobileNumber:(NSString *)customerMobileNumber terminalType:(NSString *)terminalType secretKey:(NSString * _Nullable)secretKey billingAccount:(NSString * _Nullable)billingAccount __attribute__((swift_name("get(accountId:billTypeCode:csp:sender:amount:paymentType:customerMobileNumber:terminalType:secretKey:billingAccount:)")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentType")))
@interface SharedPaymentType : SharedKotlinEnum<SharedPaymentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPaymentType *post __attribute__((swift_name("post")));
@property (class, readonly) SharedPaymentType *prep __attribute__((swift_name("prep")));
+ (SharedKotlinArray<SharedPaymentType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedPaymentType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtAddRq")))
@interface SharedPmtAddRq : SharedBase
- (instancetype)initWithPmtInfo:(NSArray<SharedPmtInfo *> * _Nullable)pmtInfo __attribute__((swift_name("init(pmtInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPmtAddRqCompanion *companion __attribute__((swift_name("companion")));
- (SharedPmtAddRq *)doCopyPmtInfo:(NSArray<SharedPmtInfo *> * _Nullable)pmtInfo __attribute__((swift_name("doCopy(pmtInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedPmtInfo *> * _Nullable pmtInfo __attribute__((swift_name("pmtInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtAddRq.Companion")))
@interface SharedPmtAddRqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPmtAddRqCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtInfo")))
@interface SharedPmtInfo : SharedBase
- (instancetype)initWithBankId:(NSString * _Nullable)bankId billTypeCode:(NSString * _Nullable)billTypeCode billingAcct:(NSString * _Nullable)billingAcct curAmt:(SharedCurAmt * _Nullable)curAmt deliveryMethod:(NSString * _Nullable)deliveryMethod depAccIdFrom:(SharedDepAccIdFrom * _Nullable)depAccIdFrom inputMethod:(NSString * _Nullable)inputMethod pmtMethod:(NSString * _Nullable)pmtMethod pmtType:(NSString * _Nullable)pmtType prcDt:(NSString * _Nullable)prcDt profileCode:(NSString * _Nullable)profileCode __attribute__((swift_name("init(bankId:billTypeCode:billingAcct:curAmt:deliveryMethod:depAccIdFrom:inputMethod:pmtMethod:pmtType:prcDt:profileCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPmtInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedPmtInfo *)doCopyBankId:(NSString * _Nullable)bankId billTypeCode:(NSString * _Nullable)billTypeCode billingAcct:(NSString * _Nullable)billingAcct curAmt:(SharedCurAmt * _Nullable)curAmt deliveryMethod:(NSString * _Nullable)deliveryMethod depAccIdFrom:(SharedDepAccIdFrom * _Nullable)depAccIdFrom inputMethod:(NSString * _Nullable)inputMethod pmtMethod:(NSString * _Nullable)pmtMethod pmtType:(NSString * _Nullable)pmtType prcDt:(NSString * _Nullable)prcDt profileCode:(NSString * _Nullable)profileCode __attribute__((swift_name("doCopy(bankId:billTypeCode:billingAcct:curAmt:deliveryMethod:depAccIdFrom:inputMethod:pmtMethod:pmtType:prcDt:profileCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) NSString * _Nullable billTypeCode __attribute__((swift_name("billTypeCode")));
@property (readonly) NSString * _Nullable billingAcct __attribute__((swift_name("billingAcct")));
@property (readonly) SharedCurAmt * _Nullable curAmt __attribute__((swift_name("curAmt")));
@property (readonly) NSString * _Nullable deliveryMethod __attribute__((swift_name("deliveryMethod")));
@property (readonly) SharedDepAccIdFrom * _Nullable depAccIdFrom __attribute__((swift_name("depAccIdFrom")));
@property (readonly) NSString * _Nullable inputMethod __attribute__((swift_name("inputMethod")));
@property (readonly) NSString * _Nullable pmtMethod __attribute__((swift_name("pmtMethod")));
@property (readonly) NSString * _Nullable pmtType __attribute__((swift_name("pmtType")));
@property (readonly) NSString * _Nullable prcDt __attribute__((swift_name("prcDt")));
@property (readonly) NSString * _Nullable profileCode __attribute__((swift_name("profileCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtInfo.Companion")))
@interface SharedPmtInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPmtInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status")))
@interface SharedStatus : SharedBase
- (instancetype)initWithSeverity:(NSString * _Nullable)severity statusCode:(SharedInt * _Nullable)statusCode statusDesc:(NSString * _Nullable)statusDesc __attribute__((swift_name("init(severity:statusCode:statusDesc:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedStatusCompanion *companion __attribute__((swift_name("companion")));
- (SharedStatus *)doCopySeverity:(NSString * _Nullable)severity statusCode:(SharedInt * _Nullable)statusCode statusDesc:(NSString * _Nullable)statusDesc __attribute__((swift_name("doCopy(severity:statusCode:statusDesc:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable severity __attribute__((swift_name("severity")));
@property (readonly) SharedInt * _Nullable statusCode __attribute__((swift_name("statusCode")));
@property (readonly) NSString * _Nullable statusDesc __attribute__((swift_name("statusDesc")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Companion")))
@interface SharedStatusCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcctTerminals")))
@interface SharedAcctTerminals : SharedBase
- (instancetype)initWithTerminalInfo:(NSArray<id> * _Nullable)terminalInfo __attribute__((swift_name("init(terminalInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedAcctTerminalsCompanion *companion __attribute__((swift_name("companion")));
- (SharedAcctTerminals *)doCopyTerminalInfo:(NSArray<id> * _Nullable)terminalInfo __attribute__((swift_name("doCopy(terminalInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable terminalInfo __attribute__((swift_name("terminalInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcctTerminals.Companion")))
@interface SharedAcctTerminalsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedAcctTerminalsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustId_")))
@interface SharedCustId_ : SharedBase
- (instancetype)initWithOfficialId:(NSString * _Nullable)officialId officialIdType:(NSString * _Nullable)officialIdType __attribute__((swift_name("init(officialId:officialIdType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustId_Companion *companion __attribute__((swift_name("companion")));
- (SharedCustId_ *)doCopyOfficialId:(NSString * _Nullable)officialId officialIdType:(NSString * _Nullable)officialIdType __attribute__((swift_name("doCopy(officialId:officialIdType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable officialId __attribute__((swift_name("officialId")));
@property (readonly) NSString * _Nullable officialIdType __attribute__((swift_name("officialIdType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustId_.Companion")))
@interface SharedCustId_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustId_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustIds_")))
@interface SharedCustIds_ : SharedBase
- (instancetype)initWithCustId:(NSArray<id> * _Nullable)custId __attribute__((swift_name("init(custId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustIds_Companion *companion __attribute__((swift_name("companion")));
- (SharedCustIds_ *)doCopyCustId:(NSArray<id> * _Nullable)custId __attribute__((swift_name("doCopy(custId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable custId __attribute__((swift_name("custId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustIds_.Companion")))
@interface SharedCustIds_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustIds_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustSearchDataR")))
@interface SharedCustSearchDataR : SharedBase
- (instancetype)initWithCustCategory:(NSString * _Nullable)custCategory custIds:(SharedCustIds_ * _Nullable)custIds custStatus:(NSString * _Nullable)custStatus custType:(NSString * _Nullable)custType kYCLevel:(NSString * _Nullable)kYCLevel name:(NSString * _Nullable)name searchCriteria:(NSString * _Nullable)searchCriteria sourceOfFund:(SharedSourceOfFund_ * _Nullable)sourceOfFund sourceOfFunds:(SharedSourceOfFunds_ * _Nullable)sourceOfFunds __attribute__((swift_name("init(custCategory:custIds:custStatus:custType:kYCLevel:name:searchCriteria:sourceOfFund:sourceOfFunds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustSearchDataRCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustSearchDataR *)doCopyCustCategory:(NSString * _Nullable)custCategory custIds:(SharedCustIds_ * _Nullable)custIds custStatus:(NSString * _Nullable)custStatus custType:(NSString * _Nullable)custType kYCLevel:(NSString * _Nullable)kYCLevel name:(NSString * _Nullable)name searchCriteria:(NSString * _Nullable)searchCriteria sourceOfFund:(SharedSourceOfFund_ * _Nullable)sourceOfFund sourceOfFunds:(SharedSourceOfFunds_ * _Nullable)sourceOfFunds __attribute__((swift_name("doCopy(custCategory:custIds:custStatus:custType:kYCLevel:name:searchCriteria:sourceOfFund:sourceOfFunds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable custCategory __attribute__((swift_name("custCategory")));
@property (readonly) SharedCustIds_ * _Nullable custIds __attribute__((swift_name("custIds")));
@property (readonly) NSString * _Nullable custStatus __attribute__((swift_name("custStatus")));
@property (readonly) NSString * _Nullable custType __attribute__((swift_name("custType")));
@property (readonly) NSString * _Nullable kYCLevel __attribute__((swift_name("kYCLevel")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable searchCriteria __attribute__((swift_name("searchCriteria")));
@property (readonly) SharedSourceOfFund_ * _Nullable sourceOfFund __attribute__((swift_name("sourceOfFund")));
@property (readonly) SharedSourceOfFunds_ * _Nullable sourceOfFunds __attribute__((swift_name("sourceOfFunds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustSearchDataR.Companion")))
@interface SharedCustSearchDataRCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustSearchDataRCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustsSearchData")))
@interface SharedCustsSearchData : SharedBase
- (instancetype)initWithCustSearchDataRs:(NSArray<SharedCustSearchDataR *> * _Nullable)custSearchDataRs __attribute__((swift_name("init(custSearchDataRs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustsSearchDataCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustsSearchData *)doCopyCustSearchDataRs:(NSArray<SharedCustSearchDataR *> * _Nullable)custSearchDataRs __attribute__((swift_name("doCopy(custSearchDataRs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedCustSearchDataR *> * _Nullable custSearchDataRs __attribute__((swift_name("custSearchDataRs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustsSearchData.Companion")))
@interface SharedCustsSearchDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustsSearchDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustRs")))
@interface SharedGetCustRs : SharedBase
- (instancetype)initWithBankId:(NSString * _Nullable)bankId custsSearchData:(SharedCustsSearchData * _Nullable)custsSearchData __attribute__((swift_name("init(bankId:custsSearchData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedGetCustRsCompanion *companion __attribute__((swift_name("companion")));
- (SharedGetCustRs *)doCopyBankId:(NSString * _Nullable)bankId custsSearchData:(SharedCustsSearchData * _Nullable)custsSearchData __attribute__((swift_name("doCopy(bankId:custsSearchData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) SharedCustsSearchData * _Nullable custsSearchData __attribute__((swift_name("custsSearchData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustRs.Companion")))
@interface SharedGetCustRsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetCustRsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustomerInfoResponse")))
@interface SharedGetCustomerInfoResponse : SharedBase
- (instancetype)initWithResponse:(SharedResponse * _Nullable)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedGetCustomerInfoResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)bankId __attribute__((swift_name("bankId()")));
- (SharedGetCustomerInfoResponse *)doCopyResponse:(SharedResponse * _Nullable)response __attribute__((swift_name("doCopy(response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isSuccess __attribute__((swift_name("isSuccess()")));
- (NSString *)officialId __attribute__((swift_name("officialId()")));
- (SharedStatus * _Nullable)status __attribute__((swift_name("status()")));
- (SharedTerminalInfo * _Nullable)terminalInfoAccountId:(NSString *)accountId __attribute__((swift_name("terminalInfo(accountId:)")));
- (NSString * _Nullable)terminalTypeAccountId:(NSString *)accountId __attribute__((swift_name("terminalType(accountId:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedResponse * _Nullable response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCustomerInfoResponse.Companion")))
@interface SharedGetCustomerInfoResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetCustomerInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsgRqHdr_")))
@interface SharedMsgRqHdr_ : SharedBase
- (instancetype)initWithNetworkTrnInfo:(SharedNetworkTrnInfo_ * _Nullable)networkTrnInfo __attribute__((swift_name("init(networkTrnInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMsgRqHdr_Companion *companion __attribute__((swift_name("companion")));
- (SharedMsgRqHdr_ *)doCopyNetworkTrnInfo:(SharedNetworkTrnInfo_ * _Nullable)networkTrnInfo __attribute__((swift_name("doCopy(networkTrnInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedNetworkTrnInfo_ * _Nullable networkTrnInfo __attribute__((swift_name("networkTrnInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsgRqHdr_.Companion")))
@interface SharedMsgRqHdr_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMsgRqHdr_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkTrnInfo_")))
@interface SharedNetworkTrnInfo_ : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedNetworkTrnInfo_Companion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkTrnInfo_.Companion")))
@interface SharedNetworkTrnInfo_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNetworkTrnInfo_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegSvcRs")))
@interface SharedRegSvcRs : SharedBase
- (instancetype)initWithAsyncRqUID:(NSString * _Nullable)asyncRqUID getCustRs:(SharedGetCustRs * _Nullable)getCustRs msgRqHdr:(SharedMsgRqHdr_ * _Nullable)msgRqHdr rqUID:(NSString * _Nullable)rqUID status:(SharedStatus * _Nullable)status __attribute__((swift_name("init(asyncRqUID:getCustRs:msgRqHdr:rqUID:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedRegSvcRsCompanion *companion __attribute__((swift_name("companion")));
- (SharedRegSvcRs *)doCopyAsyncRqUID:(NSString * _Nullable)asyncRqUID getCustRs:(SharedGetCustRs * _Nullable)getCustRs msgRqHdr:(SharedMsgRqHdr_ * _Nullable)msgRqHdr rqUID:(NSString * _Nullable)rqUID status:(SharedStatus * _Nullable)status __attribute__((swift_name("doCopy(asyncRqUID:getCustRs:msgRqHdr:rqUID:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable asyncRqUID __attribute__((swift_name("asyncRqUID")));
@property (readonly) SharedGetCustRs * _Nullable getCustRs __attribute__((swift_name("getCustRs")));
@property (readonly) SharedMsgRqHdr_ * _Nullable msgRqHdr __attribute__((swift_name("msgRqHdr")));
@property (readonly) NSString * _Nullable rqUID __attribute__((swift_name("rqUID")));
@property (readonly) SharedStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegSvcRs.Companion")))
@interface SharedRegSvcRsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedRegSvcRsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response")))
@interface SharedResponse : SharedBase
- (instancetype)initWithRegSvcRs:(SharedRegSvcRs * _Nullable)regSvcRs signonRs:(SharedSignonRs * _Nullable)signonRs __attribute__((swift_name("init(regSvcRs:signonRs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedResponse *)doCopyRegSvcRs:(SharedRegSvcRs * _Nullable)regSvcRs signonRs:(SharedSignonRs * _Nullable)signonRs __attribute__((swift_name("doCopy(regSvcRs:signonRs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRegSvcRs * _Nullable regSvcRs __attribute__((swift_name("regSvcRs")));
@property (readonly) SharedSignonRs * _Nullable signonRs __attribute__((swift_name("signonRs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response.Companion")))
@interface SharedResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonProfile_")))
@interface SharedSignonProfile_ : SharedBase
- (instancetype)initWithMsgCode:(NSString * _Nullable)msgCode receiver:(NSString * _Nullable)receiver sender:(NSString * _Nullable)sender version:(NSString * _Nullable)version __attribute__((swift_name("init(msgCode:receiver:sender:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSignonProfile_Companion *companion __attribute__((swift_name("companion")));
- (SharedSignonProfile_ *)doCopyMsgCode:(NSString * _Nullable)msgCode receiver:(NSString * _Nullable)receiver sender:(NSString * _Nullable)sender version:(NSString * _Nullable)version __attribute__((swift_name("doCopy(msgCode:receiver:sender:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable msgCode __attribute__((swift_name("msgCode")));
@property (readonly) NSString * _Nullable receiver __attribute__((swift_name("receiver")));
@property (readonly) NSString * _Nullable sender __attribute__((swift_name("sender")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonProfile_.Companion")))
@interface SharedSignonProfile_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSignonProfile_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonRs")))
@interface SharedSignonRs : SharedBase
- (instancetype)initWithClientDt:(NSString * _Nullable)clientDt custLangPref:(NSString * _Nullable)custLangPref language:(NSString * _Nullable)language serverDt:(NSString * _Nullable)serverDt signonProfile:(SharedSignonProfile_ * _Nullable)signonProfile __attribute__((swift_name("init(clientDt:custLangPref:language:serverDt:signonProfile:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSignonRsCompanion *companion __attribute__((swift_name("companion")));
- (SharedSignonRs *)doCopyClientDt:(NSString * _Nullable)clientDt custLangPref:(NSString * _Nullable)custLangPref language:(NSString * _Nullable)language serverDt:(NSString * _Nullable)serverDt signonProfile:(SharedSignonProfile_ * _Nullable)signonProfile __attribute__((swift_name("doCopy(clientDt:custLangPref:language:serverDt:signonProfile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable clientDt __attribute__((swift_name("clientDt")));
@property (readonly) NSString * _Nullable custLangPref __attribute__((swift_name("custLangPref")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSString * _Nullable serverDt __attribute__((swift_name("serverDt")));
@property (readonly) SharedSignonProfile_ * _Nullable signonProfile __attribute__((swift_name("signonProfile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonRs.Companion")))
@interface SharedSignonRsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSignonRsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFund_")))
@interface SharedSourceOfFund_ : SharedBase
- (instancetype)initWithSOFId:(NSString * _Nullable)sOFId sOFType:(NSString * _Nullable)sOFType acctTerminals:(SharedAcctTerminals * _Nullable)acctTerminals allowedCashIn:(SharedDouble * _Nullable)allowedCashIn availableBalance:(SharedDouble * _Nullable)availableBalance dailyCrLimit:(SharedDouble * _Nullable)dailyCrLimit dailyDrLimit:(SharedDouble * _Nullable)dailyDrLimit forcePINChange:(SharedBoolean * _Nullable)forcePINChange monthlyCreditLimit:(SharedDouble * _Nullable)monthlyCreditLimit monthlyDrLimit:(SharedDouble * _Nullable)monthlyDrLimit sOFAlias:(NSString * _Nullable)sOFAlias sOFCur:(NSString * _Nullable)sOFCur sOFStatus:(NSString * _Nullable)sOFStatus selected:(SharedBoolean * _Nullable)selected weeklyCrLimit:(SharedDouble * _Nullable)weeklyCrLimit weeklyDrLimit:(SharedDouble * _Nullable)weeklyDrLimit __attribute__((swift_name("init(sOFId:sOFType:acctTerminals:allowedCashIn:availableBalance:dailyCrLimit:dailyDrLimit:forcePINChange:monthlyCreditLimit:monthlyDrLimit:sOFAlias:sOFCur:sOFStatus:selected:weeklyCrLimit:weeklyDrLimit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSourceOfFund_Companion *companion __attribute__((swift_name("companion")));
- (SharedSourceOfFund_ *)doCopySOFId:(NSString * _Nullable)sOFId sOFType:(NSString * _Nullable)sOFType acctTerminals:(SharedAcctTerminals * _Nullable)acctTerminals allowedCashIn:(SharedDouble * _Nullable)allowedCashIn availableBalance:(SharedDouble * _Nullable)availableBalance dailyCrLimit:(SharedDouble * _Nullable)dailyCrLimit dailyDrLimit:(SharedDouble * _Nullable)dailyDrLimit forcePINChange:(SharedBoolean * _Nullable)forcePINChange monthlyCreditLimit:(SharedDouble * _Nullable)monthlyCreditLimit monthlyDrLimit:(SharedDouble * _Nullable)monthlyDrLimit sOFAlias:(NSString * _Nullable)sOFAlias sOFCur:(NSString * _Nullable)sOFCur sOFStatus:(NSString * _Nullable)sOFStatus selected:(SharedBoolean * _Nullable)selected weeklyCrLimit:(SharedDouble * _Nullable)weeklyCrLimit weeklyDrLimit:(SharedDouble * _Nullable)weeklyDrLimit __attribute__((swift_name("doCopy(sOFId:sOFType:acctTerminals:allowedCashIn:availableBalance:dailyCrLimit:dailyDrLimit:forcePINChange:monthlyCreditLimit:monthlyDrLimit:sOFAlias:sOFCur:sOFStatus:selected:weeklyCrLimit:weeklyDrLimit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAcctTerminals * _Nullable acctTerminals __attribute__((swift_name("acctTerminals")));
@property (readonly) SharedDouble * _Nullable allowedCashIn __attribute__((swift_name("allowedCashIn")));
@property (readonly) SharedDouble * _Nullable availableBalance __attribute__((swift_name("availableBalance")));
@property (readonly) SharedDouble * _Nullable dailyCrLimit __attribute__((swift_name("dailyCrLimit")));
@property (readonly) SharedDouble * _Nullable dailyDrLimit __attribute__((swift_name("dailyDrLimit")));
@property (readonly) SharedBoolean * _Nullable forcePINChange __attribute__((swift_name("forcePINChange")));
@property (readonly) SharedDouble * _Nullable monthlyCreditLimit __attribute__((swift_name("monthlyCreditLimit")));
@property (readonly) SharedDouble * _Nullable monthlyDrLimit __attribute__((swift_name("monthlyDrLimit")));
@property (readonly) NSString * _Nullable sOFAlias __attribute__((swift_name("sOFAlias")));
@property (readonly) NSString * _Nullable sOFCur __attribute__((swift_name("sOFCur")));
@property (readonly) NSString * _Nullable sOFId __attribute__((swift_name("sOFId")));
@property (readonly) NSString * _Nullable sOFStatus __attribute__((swift_name("sOFStatus")));
@property (readonly) NSString * _Nullable sOFType __attribute__((swift_name("sOFType")));
@property (readonly) SharedBoolean * _Nullable selected __attribute__((swift_name("selected")));
@property (readonly) SharedDouble * _Nullable weeklyCrLimit __attribute__((swift_name("weeklyCrLimit")));
@property (readonly) SharedDouble * _Nullable weeklyDrLimit __attribute__((swift_name("weeklyDrLimit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFund_.Companion")))
@interface SharedSourceOfFund_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSourceOfFund_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFunds_")))
@interface SharedSourceOfFunds_ : SharedBase
- (instancetype)initWithSourceOfFund:(NSArray<SharedSourceOfFund_ *> * _Nullable)sourceOfFund __attribute__((swift_name("init(sourceOfFund:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSourceOfFunds_Companion *companion __attribute__((swift_name("companion")));
- (SharedSourceOfFunds_ *)doCopySourceOfFund:(NSArray<SharedSourceOfFund_ *> * _Nullable)sourceOfFund __attribute__((swift_name("doCopy(sourceOfFund:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSourceOfFund_ *> * _Nullable sourceOfFund __attribute__((swift_name("sourceOfFund")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfFunds_.Companion")))
@interface SharedSourceOfFunds_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSourceOfFunds_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TerminalInfo")))
@interface SharedTerminalInfo : SharedBase
- (instancetype)initWithForcePINChange:(SharedBoolean * _Nullable)forcePINChange terminalStatus:(NSString * _Nullable)terminalStatus terminalType:(NSString * _Nullable)terminalType profileCode:(NSString * _Nullable)profileCode __attribute__((swift_name("init(forcePINChange:terminalStatus:terminalType:profileCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedTerminalInfoCompanion *companion __attribute__((swift_name("companion")));
- (SharedTerminalInfo *)doCopyForcePINChange:(SharedBoolean * _Nullable)forcePINChange terminalStatus:(NSString * _Nullable)terminalStatus terminalType:(NSString * _Nullable)terminalType profileCode:(NSString * _Nullable)profileCode __attribute__((swift_name("doCopy(forcePINChange:terminalStatus:terminalType:profileCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable forcePINChange __attribute__((swift_name("forcePINChange")));
@property (readonly) NSString * _Nullable profileCode __attribute__((swift_name("profileCode")));
@property (readonly) NSString * _Nullable terminalStatus __attribute__((swift_name("terminalStatus")));
@property (readonly) NSString * _Nullable terminalType __attribute__((swift_name("terminalType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TerminalInfo.Companion")))
@interface SharedTerminalInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedTerminalInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Balance")))
@interface SharedBalance : SharedBase
- (instancetype)initWithBalance:(SharedDouble * _Nullable)balance curCode:(NSString * _Nullable)curCode __attribute__((swift_name("init(balance:curCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedBalanceCompanion *companion __attribute__((swift_name("companion")));
- (SharedBalance *)doCopyBalance:(SharedDouble * _Nullable)balance curCode:(NSString * _Nullable)curCode __attribute__((swift_name("doCopy(balance:curCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable balance __attribute__((swift_name("balance")));
@property (readonly) NSString * _Nullable curCode __attribute__((swift_name("curCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Balance.Companion")))
@interface SharedBalanceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedBalanceCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurAmt_")))
@interface SharedCurAmt_ : SharedBase
- (instancetype)initWithAmt:(SharedDouble * _Nullable)amt curCode:(NSString * _Nullable)curCode __attribute__((swift_name("init(amt:curCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCurAmt_Companion *companion __attribute__((swift_name("companion")));
- (SharedCurAmt_ *)doCopyAmt:(SharedDouble * _Nullable)amt curCode:(NSString * _Nullable)curCode __attribute__((swift_name("doCopy(amt:curCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amt __attribute__((swift_name("amt")));
@property (readonly) NSString * _Nullable curCode __attribute__((swift_name("curCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurAmt_.Companion")))
@interface SharedCurAmt_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCurAmt_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomProperties_")))
@interface SharedCustomProperties_ : SharedBase
- (instancetype)initWithCustomProperty:(NSArray<id> * _Nullable)customProperty __attribute__((swift_name("init(customProperty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustomProperties_Companion *companion __attribute__((swift_name("companion")));
- (SharedCustomProperties_ *)doCopyCustomProperty:(NSArray<id> * _Nullable)customProperty __attribute__((swift_name("doCopy(customProperty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> * _Nullable customProperty __attribute__((swift_name("customProperty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomProperties_.Companion")))
@interface SharedCustomProperties_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustomProperties_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomProperty")))
@interface SharedCustomProperty : SharedBase
- (instancetype)initWithKey:(NSString * _Nullable)key value:(NSString * _Nullable)value __attribute__((swift_name("init(key:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedCustomPropertyCompanion *companion __attribute__((swift_name("companion")));
- (SharedCustomProperty *)doCopyKey:(NSString * _Nullable)key value:(NSString * _Nullable)value __attribute__((swift_name("doCopy(key:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomProperty.Companion")))
@interface SharedCustomPropertyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCustomPropertyCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepAccIdFrom_")))
@interface SharedDepAccIdFrom_ : SharedBase
- (instancetype)initWithAcctCur:(NSString * _Nullable)acctCur acctId:(NSString * _Nullable)acctId acctType:(NSString * _Nullable)acctType balance:(SharedBalance * _Nullable)balance __attribute__((swift_name("init(acctCur:acctId:acctType:balance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDepAccIdFrom_Companion *companion __attribute__((swift_name("companion")));
- (SharedDepAccIdFrom_ *)doCopyAcctCur:(NSString * _Nullable)acctCur acctId:(NSString * _Nullable)acctId acctType:(NSString * _Nullable)acctType balance:(SharedBalance * _Nullable)balance __attribute__((swift_name("doCopy(acctCur:acctId:acctType:balance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable acctCur __attribute__((swift_name("acctCur")));
@property (readonly) NSString * _Nullable acctId __attribute__((swift_name("acctId")));
@property (readonly) NSString * _Nullable acctType __attribute__((swift_name("acctType")));
@property (readonly) SharedBalance * _Nullable balance __attribute__((swift_name("balance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepAccIdFrom_.Companion")))
@interface SharedDepAccIdFrom_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDepAccIdFrom_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeesAmt")))
@interface SharedFeesAmt : SharedBase
- (instancetype)initWithAmt:(SharedDouble * _Nullable)amt curCode:(NSString * _Nullable)curCode __attribute__((swift_name("init(amt:curCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedFeesAmtCompanion *companion __attribute__((swift_name("companion")));
- (SharedFeesAmt *)doCopyAmt:(SharedDouble * _Nullable)amt curCode:(NSString * _Nullable)curCode __attribute__((swift_name("doCopy(amt:curCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amt __attribute__((swift_name("amt")));
@property (readonly) NSString * _Nullable curCode __attribute__((swift_name("curCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeesAmt.Companion")))
@interface SharedFeesAmtCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedFeesAmtCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsgRqHdr__")))
@interface SharedMsgRqHdr__ : SharedBase
- (instancetype)initWithClientTerminalSeqId:(NSString * _Nullable)clientTerminalSeqId customProperties:(SharedCustomProperties_ * _Nullable)customProperties networkTrnInfo:(SharedNetworkTrnInfo__ * _Nullable)networkTrnInfo __attribute__((swift_name("init(clientTerminalSeqId:customProperties:networkTrnInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedMsgRqHdr__Companion *companion __attribute__((swift_name("companion")));
- (SharedMsgRqHdr__ *)doCopyClientTerminalSeqId:(NSString * _Nullable)clientTerminalSeqId customProperties:(SharedCustomProperties_ * _Nullable)customProperties networkTrnInfo:(SharedNetworkTrnInfo__ * _Nullable)networkTrnInfo __attribute__((swift_name("doCopy(clientTerminalSeqId:customProperties:networkTrnInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable clientTerminalSeqId __attribute__((swift_name("clientTerminalSeqId")));
@property (readonly) SharedCustomProperties_ * _Nullable customProperties __attribute__((swift_name("customProperties")));
@property (readonly) SharedNetworkTrnInfo__ * _Nullable networkTrnInfo __attribute__((swift_name("networkTrnInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MsgRqHdr__.Companion")))
@interface SharedMsgRqHdr__Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedMsgRqHdr__Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkTrnInfo__")))
@interface SharedNetworkTrnInfo__ : SharedBase
- (instancetype)initWithOriginatorCode:(NSString * _Nullable)originatorCode terminalId:(NSString * _Nullable)terminalId __attribute__((swift_name("init(originatorCode:terminalId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedNetworkTrnInfo__Companion *companion __attribute__((swift_name("companion")));
- (SharedNetworkTrnInfo__ *)doCopyOriginatorCode:(NSString * _Nullable)originatorCode terminalId:(NSString * _Nullable)terminalId __attribute__((swift_name("doCopy(originatorCode:terminalId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable originatorCode __attribute__((swift_name("originatorCode")));
@property (readonly) NSString * _Nullable terminalId __attribute__((swift_name("terminalId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkTrnInfo__.Companion")))
@interface SharedNetworkTrnInfo__Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedNetworkTrnInfo__Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaySvcRs")))
@interface SharedPaySvcRs : SharedBase
- (instancetype)initWithAsyncRqUID:(NSString * _Nullable)asyncRqUID msgRqHdr:(SharedMsgRqHdr__ * _Nullable)msgRqHdr pmtAddRs:(SharedPmtAddRs * _Nullable)pmtAddRs rqUID:(NSString * _Nullable)rqUID status:(SharedStatus * _Nullable)status __attribute__((swift_name("init(asyncRqUID:msgRqHdr:pmtAddRs:rqUID:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPaySvcRsCompanion *companion __attribute__((swift_name("companion")));
- (SharedPaySvcRs *)doCopyAsyncRqUID:(NSString * _Nullable)asyncRqUID msgRqHdr:(SharedMsgRqHdr__ * _Nullable)msgRqHdr pmtAddRs:(SharedPmtAddRs * _Nullable)pmtAddRs rqUID:(NSString * _Nullable)rqUID status:(SharedStatus * _Nullable)status __attribute__((swift_name("doCopy(asyncRqUID:msgRqHdr:pmtAddRs:rqUID:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable asyncRqUID __attribute__((swift_name("asyncRqUID")));
@property (readonly) SharedMsgRqHdr__ * _Nullable msgRqHdr __attribute__((swift_name("msgRqHdr")));
@property (readonly) SharedPmtAddRs * _Nullable pmtAddRs __attribute__((swift_name("pmtAddRs")));
@property (readonly) NSString * _Nullable rqUID __attribute__((swift_name("rqUID")));
@property (readonly) SharedStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaySvcRs.Companion")))
@interface SharedPaySvcRsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPaySvcRsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentAddResponse")))
@interface SharedPaymentAddResponse : SharedBase
- (instancetype)initWithResponse:(SharedResponse_ * _Nullable)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPaymentAddResponseCompanion *companion __attribute__((swift_name("companion")));
- (SharedPaymentAddResponse *)doCopyResponse:(SharedResponse_ * _Nullable)response __attribute__((swift_name("doCopy(response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedResponse_ * _Nullable response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentAddResponse.Companion")))
@interface SharedPaymentAddResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPaymentAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtAddRs")))
@interface SharedPmtAddRs : SharedBase
- (instancetype)initWithPmtInfoVal:(NSArray<SharedPmtInfoVal *> * _Nullable)pmtInfoVal __attribute__((swift_name("init(pmtInfoVal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPmtAddRsCompanion *companion __attribute__((swift_name("companion")));
- (SharedPmtAddRs *)doCopyPmtInfoVal:(NSArray<SharedPmtInfoVal *> * _Nullable)pmtInfoVal __attribute__((swift_name("doCopy(pmtInfoVal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedPmtInfoVal *> * _Nullable pmtInfoVal __attribute__((swift_name("pmtInfoVal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtAddRs.Companion")))
@interface SharedPmtAddRsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPmtAddRsCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtInfo_")))
@interface SharedPmtInfo_ : SharedBase
- (instancetype)initWithBankId:(NSString * _Nullable)bankId billTypeCode:(SharedInt * _Nullable)billTypeCode billingAcct:(NSString * _Nullable)billingAcct correlationUID:(NSString * _Nullable)correlationUID curAmt:(SharedCurAmt_ * _Nullable)curAmt deliveryMethod:(NSString * _Nullable)deliveryMethod depAccIdFrom:(SharedDepAccIdFrom_ * _Nullable)depAccIdFrom feesAmt:(SharedFeesAmt * _Nullable)feesAmt pmtMethod:(NSString * _Nullable)pmtMethod pmtType:(NSString * _Nullable)pmtType prcDt:(NSString * _Nullable)prcDt __attribute__((swift_name("init(bankId:billTypeCode:billingAcct:correlationUID:curAmt:deliveryMethod:depAccIdFrom:feesAmt:pmtMethod:pmtType:prcDt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPmtInfo_Companion *companion __attribute__((swift_name("companion")));
- (SharedPmtInfo_ *)doCopyBankId:(NSString * _Nullable)bankId billTypeCode:(SharedInt * _Nullable)billTypeCode billingAcct:(NSString * _Nullable)billingAcct correlationUID:(NSString * _Nullable)correlationUID curAmt:(SharedCurAmt_ * _Nullable)curAmt deliveryMethod:(NSString * _Nullable)deliveryMethod depAccIdFrom:(SharedDepAccIdFrom_ * _Nullable)depAccIdFrom feesAmt:(SharedFeesAmt * _Nullable)feesAmt pmtMethod:(NSString * _Nullable)pmtMethod pmtType:(NSString * _Nullable)pmtType prcDt:(NSString * _Nullable)prcDt __attribute__((swift_name("doCopy(bankId:billTypeCode:billingAcct:correlationUID:curAmt:deliveryMethod:depAccIdFrom:feesAmt:pmtMethod:pmtType:prcDt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) SharedInt * _Nullable billTypeCode __attribute__((swift_name("billTypeCode")));
@property (readonly) NSString * _Nullable billingAcct __attribute__((swift_name("billingAcct")));
@property (readonly) NSString * _Nullable correlationUID __attribute__((swift_name("correlationUID")));
@property (readonly) SharedCurAmt_ * _Nullable curAmt __attribute__((swift_name("curAmt")));
@property (readonly) NSString * _Nullable deliveryMethod __attribute__((swift_name("deliveryMethod")));
@property (readonly) SharedDepAccIdFrom_ * _Nullable depAccIdFrom __attribute__((swift_name("depAccIdFrom")));
@property (readonly) SharedFeesAmt * _Nullable feesAmt __attribute__((swift_name("feesAmt")));
@property (readonly) NSString * _Nullable pmtMethod __attribute__((swift_name("pmtMethod")));
@property (readonly) NSString * _Nullable pmtType __attribute__((swift_name("pmtType")));
@property (readonly) NSString * _Nullable prcDt __attribute__((swift_name("prcDt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtInfo_.Companion")))
@interface SharedPmtInfo_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPmtInfo_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtInfoVal")))
@interface SharedPmtInfoVal : SharedBase
- (instancetype)initWithPmtInfo:(SharedPmtInfo_ * _Nullable)pmtInfo pmtTransId:(NSArray<SharedPmtTransId *> * _Nullable)pmtTransId status:(SharedStatus * _Nullable)status __attribute__((swift_name("init(pmtInfo:pmtTransId:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPmtInfoValCompanion *companion __attribute__((swift_name("companion")));
- (SharedPmtInfoVal *)doCopyPmtInfo:(SharedPmtInfo_ * _Nullable)pmtInfo pmtTransId:(NSArray<SharedPmtTransId *> * _Nullable)pmtTransId status:(SharedStatus * _Nullable)status __attribute__((swift_name("doCopy(pmtInfo:pmtTransId:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPmtInfo_ * _Nullable pmtInfo __attribute__((swift_name("pmtInfo")));
@property (readonly) NSArray<SharedPmtTransId *> * _Nullable pmtTransId __attribute__((swift_name("pmtTransId")));
@property (readonly) SharedStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtInfoVal.Companion")))
@interface SharedPmtInfoValCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPmtInfoValCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtTransId")))
@interface SharedPmtTransId : SharedBase
- (instancetype)initWithCreatedDt:(NSString * _Nullable)createdDt pmtId:(NSString * _Nullable)pmtId pmtIdType:(NSString * _Nullable)pmtIdType __attribute__((swift_name("init(createdDt:pmtId:pmtIdType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedPmtTransIdCompanion *companion __attribute__((swift_name("companion")));
- (SharedPmtTransId *)doCopyCreatedDt:(NSString * _Nullable)createdDt pmtId:(NSString * _Nullable)pmtId pmtIdType:(NSString * _Nullable)pmtIdType __attribute__((swift_name("doCopy(createdDt:pmtId:pmtIdType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdDt __attribute__((swift_name("createdDt")));
@property (readonly) NSString * _Nullable pmtId __attribute__((swift_name("pmtId")));
@property (readonly) NSString * _Nullable pmtIdType __attribute__((swift_name("pmtIdType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PmtTransId.Companion")))
@interface SharedPmtTransIdCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPmtTransIdCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response_")))
@interface SharedResponse_ : SharedBase
- (instancetype)initWithPaySvcRs:(SharedPaySvcRs * _Nullable)paySvcRs signonRs:(SharedSignonRs_ * _Nullable)signonRs __attribute__((swift_name("init(paySvcRs:signonRs:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedResponse_Companion *companion __attribute__((swift_name("companion")));
- (SharedResponse_ *)doCopyPaySvcRs:(SharedPaySvcRs * _Nullable)paySvcRs signonRs:(SharedSignonRs_ * _Nullable)signonRs __attribute__((swift_name("doCopy(paySvcRs:signonRs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPaySvcRs * _Nullable paySvcRs __attribute__((swift_name("paySvcRs")));
@property (readonly) SharedSignonRs_ * _Nullable signonRs __attribute__((swift_name("signonRs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Response_.Companion")))
@interface SharedResponse_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedResponse_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonProfile__")))
@interface SharedSignonProfile__ : SharedBase
- (instancetype)initWithMsgCode:(NSString * _Nullable)msgCode receiver:(NSString * _Nullable)receiver sender:(NSString * _Nullable)sender version:(NSString * _Nullable)version __attribute__((swift_name("init(msgCode:receiver:sender:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSignonProfile__Companion *companion __attribute__((swift_name("companion")));
- (SharedSignonProfile__ *)doCopyMsgCode:(NSString * _Nullable)msgCode receiver:(NSString * _Nullable)receiver sender:(NSString * _Nullable)sender version:(NSString * _Nullable)version __attribute__((swift_name("doCopy(msgCode:receiver:sender:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable msgCode __attribute__((swift_name("msgCode")));
@property (readonly) NSString * _Nullable receiver __attribute__((swift_name("receiver")));
@property (readonly) NSString * _Nullable sender __attribute__((swift_name("sender")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonProfile__.Companion")))
@interface SharedSignonProfile__Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSignonProfile__Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonRs_")))
@interface SharedSignonRs_ : SharedBase
- (instancetype)initWithLanguage:(NSString * _Nullable)language serverDt:(NSString * _Nullable)serverDt signonProfile:(SharedSignonProfile__ * _Nullable)signonProfile __attribute__((swift_name("init(language:serverDt:signonProfile:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSignonRs_Companion *companion __attribute__((swift_name("companion")));
- (SharedSignonRs_ *)doCopyLanguage:(NSString * _Nullable)language serverDt:(NSString * _Nullable)serverDt signonProfile:(SharedSignonProfile__ * _Nullable)signonProfile __attribute__((swift_name("doCopy(language:serverDt:signonProfile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));
@property (readonly) NSString * _Nullable serverDt __attribute__((swift_name("serverDt")));
@property (readonly) SharedSignonProfile__ * _Nullable signonProfile __attribute__((swift_name("signonProfile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignonRs_.Companion")))
@interface SharedSignonRs_Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSignonRs_Companion *shared __attribute__((swift_name("shared")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("LoginRepo")))
@protocol SharedLoginRepo
@required
- (void)invalidateCache __attribute__((swift_name("invalidateCache()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginAccountId:(NSString *)accountId terminalType:(NSString *)terminalType completionHandler:(void (^)(SharedApiResponse<SharedLoginResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(accountId:terminalType:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRepoImpl")))
@interface SharedLoginRepoImpl : SharedBase <SharedLoginRepo>
- (instancetype)initWithPaymentApi:(SharedPaymentApi *)paymentApi cacheManager:(SharedCacheManager *)cacheManager __attribute__((swift_name("init(paymentApi:cacheManager:)"))) __attribute__((objc_designated_initializer));
- (void)invalidateCache __attribute__((swift_name("invalidateCache()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginAccountId:(NSString *)accountId terminalType:(NSString *)terminalType completionHandler:(void (^)(SharedApiResponse<SharedLoginResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(accountId:terminalType:completionHandler:)")));
@end

__attribute__((swift_name("PaymentRepo")))
@protocol SharedPaymentRepo
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)payWithSDATotalAmount:(NSString * _Nullable)totalAmount secretKey:(NSString * _Nullable)secretKey customerMobile:(NSString * _Nullable)customerMobile completionHandler:(void (^)(SharedApiResponse<SharedPaymentAddResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("payWithSDA(totalAmount:secretKey:customerMobile:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentRepoImpl")))
@interface SharedPaymentRepoImpl : SharedBase <SharedPaymentRepo>
- (instancetype)initWithApi:(SharedPaymentApi *)api cacheManager:(SharedCacheManager *)cacheManager __attribute__((swift_name("init(api:cacheManager:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)payWithSDATotalAmount:(NSString * _Nullable)totalAmount secretKey:(NSString * _Nullable)secretKey customerMobile:(NSString * _Nullable)customerMobile completionHandler:(void (^)(SharedApiResponse<SharedPaymentAddResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("payWithSDA(totalAmount:secretKey:customerMobile:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentInjector")))
@interface SharedPaymentInjector : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentInjector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedPaymentInjector *shared __attribute__((swift_name("shared")));
- (SharedPaymentContextArgs * _Nullable)provideContextArgsPaymentContextArgs:(SharedPaymentContextArgs *)paymentContextArgs __attribute__((swift_name("provideContextArgs(paymentContextArgs:)")));
@property (readonly) SharedKodein_diLazyDI *kodeinContainer __attribute__((swift_name("kodeinContainer")));
@property SharedPaymentContextArgs * _Nullable mPaymentContextArgs __attribute__((swift_name("mPaymentContextArgs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentContextArgs")))
@interface SharedPaymentContextArgs : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("ApiResponse")))
@interface SharedApiResponse<__covariant T, __covariant E> : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseError")))
@interface SharedApiResponseError : SharedApiResponse<SharedKotlinNothing *, NSString *>
- (instancetype)initWithStatusCode:(SharedInt * _Nullable)statusCode statusDescription:(NSString * _Nullable)statusDescription errorType:(SharedErrorType * _Nullable)errorType __attribute__((swift_name("init(statusCode:statusDescription:errorType:)"))) __attribute__((objc_designated_initializer));
- (SharedApiResponseError *)doCopyStatusCode:(SharedInt * _Nullable)statusCode statusDescription:(NSString * _Nullable)statusDescription errorType:(SharedErrorType * _Nullable)errorType __attribute__((swift_name("doCopy(statusCode:statusDescription:errorType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedErrorType * _Nullable errorType __attribute__((swift_name("errorType")));
@property SharedFawryError * _Nullable fawryError __attribute__((swift_name("fawryError")));
@property (readonly) SharedInt * _Nullable statusCode __attribute__((swift_name("statusCode")));
@property (readonly) NSString * _Nullable statusDescription __attribute__((swift_name("statusDescription")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseSuccess")))
@interface SharedApiResponseSuccess<T> : SharedApiResponse<T, SharedKotlinNothing *>
- (instancetype)initWithBody:(T _Nullable)body __attribute__((swift_name("init(body:)"))) __attribute__((objc_designated_initializer));
- (SharedApiResponseSuccess<T> *)doCopyBody:(T _Nullable)body __attribute__((swift_name("doCopy(body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constant")))
@interface SharedConstant : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constant __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConstant *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *VERSION __attribute__((swift_name("VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constant.HttpCode")))
@interface SharedConstantHttpCode : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConstantHttpCode *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BAD_REQUEST __attribute__((swift_name("BAD_REQUEST")));
@property (readonly) int32_t FORBIDDEN __attribute__((swift_name("FORBIDDEN")));
@property (readonly) int32_t NOT_FOUND __attribute__((swift_name("NOT_FOUND")));
@property (readonly) int32_t PAYMENT_REQUIRED __attribute__((swift_name("PAYMENT_REQUIRED")));
@property (readonly) int32_t SUCCESS __attribute__((swift_name("SUCCESS")));
@property (readonly) int32_t UNAUTHORIZED __attribute__((swift_name("UNAUTHORIZED")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constant.ResponseCode")))
@interface SharedConstantResponseCode : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)responseCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedConstantResponseCode *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t REQUEST_TIME_OUT __attribute__((swift_name("REQUEST_TIME_OUT")));
@property (readonly) int32_t SOCKET_TIME_OUT __attribute__((swift_name("SOCKET_TIME_OUT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentApi")))
@interface SharedPaymentApi : SharedBase
- (instancetype)initWithMClient:(SharedKtor_client_coreHttpClient *)mClient __attribute__((swift_name("init(mClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCustomerInfoRequest:(SharedGetCustomerRequest *)request completionHandler:(void (^)(SharedApiResponse<SharedGetCustomerInfoResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCustomerInfo(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)payWithSDARequest:(SharedPaymentAddRequest *)request completionHandler:(void (^)(SharedApiResponse<SharedPaymentAddResponse *, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("payWithSDA(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginConfigs")))
@interface SharedLoginConfigs : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginConfigs __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLoginConfigs *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BANK_ID __attribute__((swift_name("BANK_ID")));
@property (readonly) NSString *CSP __attribute__((swift_name("CSP")));
@property (readonly) NSString *CURRENCY_CODE_EGP __attribute__((swift_name("CURRENCY_CODE_EGP")));
@property (readonly) NSString *KEY_EXCHANGE_SENDER __attribute__((swift_name("KEY_EXCHANGE_SENDER")));
@property (readonly) NSString *PAYMENT_METHOD_CASH __attribute__((swift_name("PAYMENT_METHOD_CASH")));
@property (readonly) NSString *RECEIVER __attribute__((swift_name("RECEIVER")));
@property (readonly) NSString *TYPE_SDA __attribute__((swift_name("TYPE_SDA")));
@property (readonly) NSString *VERSION __attribute__((swift_name("VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtils")))
@interface SharedDateUtils : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDateUtils *shared __attribute__((swift_name("shared")));
- (NSString *)getClientTerminalSeqId __attribute__((swift_name("getClientTerminalSeqId()")));
- (NSString *)getCurrentDate __attribute__((swift_name("getCurrentDate()")));
- (NSString *)getCurrentDateTime __attribute__((swift_name("getCurrentDateTime()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptionUtil")))
@interface SharedEncryptionUtil : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encryptionUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedEncryptionUtil *shared __attribute__((swift_name("shared")));
- (NSString *)hashMd5S:(NSString *)s __attribute__((swift_name("hashMd5(s:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorHandler")))
@interface SharedErrorHandler : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedErrorHandler *shared __attribute__((swift_name("shared")));
- (SharedFawryError *)toFawryErrorType:(SharedErrorType * _Nullable)type errorCode:(SharedInt * _Nullable)errorCode errorDescription:(NSString * _Nullable)errorDescription __attribute__((swift_name("toFawryError(type:errorCode:errorDescription:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorType")))
@interface SharedErrorType : SharedKotlinEnum<SharedErrorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedErrorType *accountIdError __attribute__((swift_name("accountIdError")));
@property (class, readonly) SharedErrorType *getCustomerInfoError __attribute__((swift_name("getCustomerInfoError")));
@property (class, readonly) SharedErrorType *paymentAddError __attribute__((swift_name("paymentAddError")));
@property (class, readonly) SharedErrorType *customerTerminalError __attribute__((swift_name("customerTerminalError")));
@property (class, readonly) SharedErrorType *keyExchangeError __attribute__((swift_name("keyExchangeError")));
@property (class, readonly) SharedErrorType *missingPin __attribute__((swift_name("missingPin")));
@property (class, readonly) SharedErrorType *unsupportedAccountType __attribute__((swift_name("unsupportedAccountType")));
+ (SharedKotlinArray<SharedErrorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedErrorType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language_")))
@interface SharedLanguage_ : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)language __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedLanguage_ *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ARABIC __attribute__((swift_name("ARABIC")));
@property (readonly) NSString *ENGLISH __attribute__((swift_name("ENGLISH")));
@end

@interface SharedFawryError (Extensions)
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end

@interface SharedLoginResponse (Extensions)
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end

@interface SharedPaymentAddResponse (Extensions)
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SharedKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SharedKtor_client_coreHttpClient : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SharedKtor_client_coreHttpClientEngine>)engine userConfig:(SharedKtor_client_coreHttpClientConfig<SharedKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SharedKtor_client_coreHttpClient *)configBlock:(void (^)(SharedKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SharedKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SharedKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SharedKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SharedKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SharedKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SharedKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SharedKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

@interface SharedKtor_client_coreHttpClient (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)safeRequestBlock:(void (^)(SharedKtor_client_coreHttpRequestBuilder *))block completionHandler:(void (^)(SharedApiResponse<id, NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("safeRequest(block:completionHandler:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_client_coreResponseException")))
@interface SharedKtor_client_coreResponseException : SharedKotlinIllegalStateException
- (instancetype)initWithResponse:(SharedKtor_client_coreHttpResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Please, provide response text in constructor")));
- (instancetype)initWithResponse:(SharedKtor_client_coreHttpResponse *)response cachedResponseText:(NSString *)cachedResponseText __attribute__((swift_name("init(response:cachedResponseText:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) SharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

@interface SharedKtor_client_coreResponseException (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)errorBodyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("errorBody(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface SharedExtensionsKt : SharedBase
+ (NSString *)getRandomUUID __attribute__((swift_name("getRandomUUID()")));
+ (NSString *)host:(NSString *)receiver __attribute__((swift_name("host(_:)")));
+ (SharedKtor_httpURLProtocol *)protocol:(NSString *)receiver __attribute__((swift_name("protocol(_:)")));
+ (NSString * _Nullable)removeLastChar:(NSString * _Nullable)receiver __attribute__((swift_name("removeLastChar(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalModuleKt")))
@interface SharedLocalModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *localModule __attribute__((swift_name("localModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkModuleKt")))
@interface SharedNetworkModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *networkModule __attribute__((swift_name("networkModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
+ (id<SharedKtor_client_coreHttpClientEngine>)httpClientEngine __attribute__((swift_name("httpClientEngine()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepoModuleKt")))
@interface SharedRepoModuleKt : SharedBase
@property (class, readonly) SharedKodein_diDIModule *repoModule __attribute__((swift_name("repoModule")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kodein_diDIAware")))
@protocol SharedKodein_diDIAware
@required
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) SharedKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end

__attribute__((swift_name("Kodein_diDI")))
@protocol SharedKodein_diDI <SharedKodein_diDIAware>
@required
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diLazyDI")))
@interface SharedKodein_diLazyDI : SharedBase <SharedKodein_diDI>
- (instancetype)initWithF:(id<SharedKodein_diDI> (^)(void))f __attribute__((swift_name("init(f:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diLazyDI *)getValueThisRef:(id _Nullable)thisRef property:(id<SharedKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
@property (readonly) id<SharedKodein_diDI> baseDI __attribute__((swift_name("baseDI")));
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SharedKtor_client_coreHttpClientEngine <SharedKotlinx_coroutines_coreCoroutineScope, SharedKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SharedKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SharedKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SharedKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SharedKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SharedKtor_client_coreHttpClientEngineConfig : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SharedKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SharedKtor_client_coreHttpClientConfig<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SharedKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SharedKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SharedKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SharedKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SharedKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SharedKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SharedKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SharedKtor_eventsEvents : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SharedKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SharedKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SharedKtor_utilsPipeline<TSubject, TContext> : SharedBase
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SharedKtor_utilsPipelinePhase *)reference phase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SharedKtor_utilsPipelinePhase *)phase block:(id<SharedKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SharedKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SharedKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SharedKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SharedKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SharedKtor_client_coreHttpReceivePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponse *, SharedKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SharedKtor_client_coreHttpRequestPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SharedKtor_client_coreHttpResponsePipeline : SharedKtor_utilsPipeline<SharedKtor_client_coreHttpResponseContainer *, SharedKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SharedKtor_client_coreHttpSendPipeline : SharedKtor_utilsPipeline<id, SharedKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SharedKotlinArray<SharedKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SharedKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SharedKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SharedKtor_httpHttpMessageBuilder
@required
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SharedKtor_client_coreHttpRequestBuilder : SharedBase <SharedKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SharedKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SharedKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SharedKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SharedKtor_httpURLBuilder *, SharedKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SharedKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SharedKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SharedKtor_httpHttpMessage
@required
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SharedKtor_client_coreHttpResponse : SharedBase <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SharedKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedKtor_httpURLProtocol : SharedBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface SharedKodein_diDIModule : SharedBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diDIModule *)doCopyAllowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SharedKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKodein_diDIModule *)getValueThisRef:(id _Nullable)thisRef property:(id<SharedKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<SharedKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol SharedKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(SharedKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(SharedKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(SharedKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(SharedKodein_diDIKey<id, SharedKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<SharedKodein_diDITree> tree __attribute__((swift_name("tree")));
@end

__attribute__((swift_name("Kodein_diDIContext")))
@protocol SharedKodein_diDIContext
@required
@property (readonly) id<SharedKaveritTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface SharedKodein_diDITrigger : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<SharedKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end

__attribute__((swift_name("KotlinKCallable")))
@protocol SharedKotlinKCallable <SharedKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedKotlinKType> returnType __attribute__((swift_name("returnType")));
@end

__attribute__((swift_name("KotlinKProperty")))
@protocol SharedKotlinKProperty <SharedKotlinKCallable>
@required
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SharedKtor_client_coreHttpRequestData : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url method:(SharedKtor_httpHttpMethod *)method headers:(id<SharedKtor_httpHeaders>)headers body:(SharedKtor_httpOutgoingContent *)body executionContext:(id<SharedKotlinx_coroutines_coreJob>)executionContext attributes:(id<SharedKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SharedKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SharedKtor_client_coreHttpResponseData : SharedBase
- (instancetype)initWithStatusCode:(SharedKtor_httpHttpStatusCode *)statusCode requestTime:(SharedKtor_utilsGMTDate *)requestTime headers:(id<SharedKtor_httpHeaders>)headers version:(SharedKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SharedKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SharedKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SharedKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SharedKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SharedKtor_client_coreProxyConfig : SharedBase
- (instancetype)initWithUrl:(SharedKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SharedKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SharedKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SharedKtor_utilsAttributeKey<T> : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SharedKtor_eventsEventDefinition<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SharedKtor_utilsPipelinePhase : SharedBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SharedKtor_client_coreHttpReceivePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SharedKtor_client_coreHttpRequestPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SharedKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SharedKtor_client_coreHttpResponsePipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SharedKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SharedKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SharedKtor_client_coreHttpResponseContainer : SharedBase
- (instancetype)initWithExpectedType:(SharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SharedKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SharedKtor_client_coreHttpClientCall : SharedBase <SharedKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SharedKtor_client_coreHttpClient *)client requestData:(SharedKtor_client_coreHttpRequestData *)requestData responseData:(SharedKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(SharedKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SharedKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SharedKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SharedKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SharedKtor_client_coreHttpSendPipelinePhases : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SharedKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SharedKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SharedKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SharedKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SharedKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SharedKtor_utilsStringValuesBuilderImpl : SharedBase <SharedKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SharedKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SharedKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SharedKtor_httpHeadersBuilder : SharedKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SharedKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SharedKtor_client_coreHttpRequestBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SharedKtor_httpURLBuilder : SharedBase
- (instancetype)initWithProtocol:(SharedKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SharedKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SharedKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SharedKtor_utilsTypeInfo : SharedBase
- (instancetype)initWithType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_utilsTypeInfo *)doCopyType:(id<SharedKotlinKClass>)type reifiedType:(id<SharedKotlinKType>)reifiedType kotlinType:(id<SharedKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SharedKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<SharedKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SharedKotlinx_coroutines_coreJob <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SharedKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SharedKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<SharedKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SharedKotlinx_coroutines_coreJob>)plusOther_:(id<SharedKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SharedKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SharedKtor_httpHttpMethod : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SharedKtor_httpHeaders <SharedKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SharedKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKtor_ioChunkBuffer *)dst completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(SharedKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(SharedByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(SharedDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(SharedFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(SharedKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(SharedInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(SharedLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(SharedKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<SharedKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(SharedShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<SharedKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<SharedKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) SharedKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SharedKtor_utilsGMTDate : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (SharedKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SharedKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SharedKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SharedKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SharedKtor_httpHttpStatusCode : SharedBase <SharedKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (SharedKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SharedKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SharedKtor_httpHttpProtocolVersion : SharedBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SharedKtor_httpURLProtocolCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SharedKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SharedKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SharedKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SharedKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SharedKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SharedKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol SharedKodein_diDIBindBuilder
@required
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) BOOL explicitContext __attribute__((swift_name("explicitContext")));
@end

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol SharedKodein_diDIBindBuilderWithScope <SharedKodein_diDIBindBuilder>
@required
@property (readonly) id<SharedKodein_diScope> scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol SharedKodein_diDIBuilder <SharedKodein_diDIBindBuilder, SharedKodein_diDIBindBuilderWithScope>
@required
- (id<SharedKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (void)BindTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides binding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("Bind(tag:overrides:binding:)")));
- (id<SharedKodein_diDIBuilderTypeBinder>)BindType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)BindSetTag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides binding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("BindSet(tag:overrides:binding:)")));
- (SharedKodein_diDIBuilderDelegateBinder<id> *)DelegateType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("Delegate(type:tag:overrides:)")));
- (void)RegisterContextTranslatorTranslator:(id<SharedKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<SharedKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(SharedKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(SharedKotlinArray<SharedKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(SharedKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<SharedKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<SharedKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface SharedKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : SharedBase
- (instancetype)initWithContextType:(id<SharedKaveritTypeToken>)contextType argType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diDIKey<C, A, T> *)doCopyContextType:(id<SharedKaveritTypeToken>)contextType argType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKaveritTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<SharedKaveritTypeToken> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kodein_diDITree")))
@protocol SharedKodein_diDITree
@required
- (NSArray<SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *, id<SharedKodein_diContextTranslator>> *> *)findSearch:(SharedKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (NSArray<SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, SharedKodein_diDIDefinition<id, id, id> *, id<SharedKodein_diContextTranslator>> *> *)findKey:(SharedKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (SharedKotlinTriple<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *, id<SharedKodein_diContextTranslator>> * _Nullable)getKey__:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key__:)")));
@property (readonly) NSDictionary<SharedKodein_diDIKey<id, id, id> *, NSArray<SharedKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<SharedKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<SharedKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end

__attribute__((swift_name("KaveritTypeToken")))
@protocol SharedKaveritTypeToken
@required
- (SharedKotlinArray<id<SharedKaveritTypeToken>> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<SharedKaveritTypeToken>)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<SharedKaveritTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<SharedKaveritTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedKtor_httpUrl : SharedBase
@property (class, readonly, getter=companion) SharedKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SharedKtor_httpOutgoingContent : SharedBase
- (id _Nullable)getPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SharedKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SharedKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SharedLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SharedKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SharedKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SharedKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SharedKtor_client_coreHttpClientCallCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SharedKtor_client_coreHttpRequest <SharedKtor_httpHttpMessage, SharedKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SharedKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SharedKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SharedKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SharedKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SharedKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedKtor_httpParameters <SharedKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SharedKtor_httpURLBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SharedKtor_httpParametersBuilder <SharedKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SharedKotlinx_coroutines_coreChildHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SharedKotlinx_coroutines_coreChildJob <SharedKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SharedKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SharedKotlinx_coroutines_coreSelectInstance>)select block:(id<SharedKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SharedKtor_httpHttpMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SharedKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SharedKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SharedKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SharedKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SharedKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SharedKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SharedKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SharedKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface SharedKtor_ioMemory : SharedBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(SharedKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (SharedKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface SharedKtor_ioBuffer : SharedBase
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (SharedKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(SharedKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) SharedKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface SharedKtor_ioChunkBuffer : SharedKtor_ioBuffer
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory origin:(SharedKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<SharedKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(SharedKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (SharedKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (SharedKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) SharedKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) SharedKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface SharedKtor_ioInput : SharedBase <SharedKtor_ioCloseable>
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(SharedKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(SharedKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<SharedKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<SharedKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<SharedKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface SharedKtor_ioByteReadPacket : SharedKtor_ioInput
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(SharedKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<SharedKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (SharedKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(SharedKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol SharedKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (SharedKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SharedKotlinSuspendFunction1 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol SharedKotlinAppendable
@required
- (id<SharedKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SharedKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SharedKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SharedKtor_utilsGMTDateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SharedKtor_utilsWeekDay : SharedKotlinEnum<SharedKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SharedKotlinArray<SharedKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SharedKtor_utilsMonth : SharedKotlinEnum<SharedKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SharedKotlinArray<SharedKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SharedKtor_httpHttpStatusCodeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SharedKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SharedKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SharedKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SharedKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SharedKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SharedKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SharedKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SharedKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SharedKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SharedKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SharedKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SharedKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SharedKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SharedKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SharedKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SharedKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SharedKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SharedKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SharedKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SharedKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SharedKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SharedKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SharedKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SharedKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SharedKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SharedKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SharedKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) SharedKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SharedKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SharedKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SharedKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SharedKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SharedKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SharedKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SharedKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SharedKtor_httpHttpProtocolVersionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SharedKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SharedKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol SharedKodein_diDIBuilderDirectBinder
@required
@end

__attribute__((swift_name("Kodein_diBinding")))
@protocol SharedKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryKey:(SharedKodein_diDIKey<id, id, id> *)key di:(id<SharedKodein_diBindingDI>)di __attribute__((swift_name("getFactory(key:di:)")));
@end

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol SharedKodein_diDIBinding <SharedKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<SharedKaveritTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SharedKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<SharedKaveritTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<SharedKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol SharedKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<SharedKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end

__attribute__((swift_name("Kodein_diDIBuilderDelegateBinder")))
@interface SharedKodein_diDIBuilderDelegateBinder<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)ToType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("To(type:tag:)")));
- (void)toTag:(id _Nullable)tag __attribute__((swift_name("to(tag:)")));
@end

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol SharedKodein_diContextTranslator
@required
- (id _Nullable)translateDi:(id<SharedKodein_diDirectDI>)di ctx:(id)ctx __attribute__((swift_name("translate(di:ctx:)")));
@property (readonly) id<SharedKaveritTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SharedKaveritTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol SharedKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(id<SharedKaveritTypeToken>)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol SharedKodein_diDirectDIAware
@required
@property (readonly) id<SharedKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol SharedKodein_diDirectDIBase <SharedKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<SharedKodein_diDirectDI>)OnContext:(id<SharedKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<SharedKaveritTypeToken>)argType type:(id<SharedKaveritTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<SharedKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<SharedKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SharedKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol SharedKodein_diDirectDI <SharedKodein_diDirectDIBase>
@required
@end

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol SharedKodein_diDIContainerBuilder
@required
- (void)bindKey:(SharedKodein_diDIKey<id, id, id> *)key binding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(SharedBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<SharedKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<SharedKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<SharedKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<SharedKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<SharedKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end

__attribute__((swift_name("Kodein_diScope")))
@protocol SharedKodein_diScope
@required
- (SharedKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("Kodein_diDIDefining")))
@interface SharedKodein_diDIDefining<C, A, T> : SharedBase
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface SharedKodein_diDIDefinition<C, A, T> : SharedKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<SharedKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<SharedKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<SharedKodein_diDITree> tree __attribute__((swift_name("tree")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SharedKotlinTriple<__covariant A, __covariant B, __covariant C> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface SharedKodein_diSearchSpecs : SharedBase
- (instancetype)initWithContextType:(id<SharedKaveritTypeToken> _Nullable)contextType argType:(id<SharedKaveritTypeToken> _Nullable)argType type:(id<SharedKaveritTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<SharedKaveritTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<SharedKaveritTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<SharedKaveritTypeToken> _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol SharedKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<SharedKodein_diBindingDI>)di key:(SharedKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SharedKtor_httpUrlCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SharedKtor_httpHeaderValueWithParameters : SharedBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SharedKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SharedKtor_httpContentType : SharedKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SharedKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SharedKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SharedKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SharedKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SharedKotlinx_coroutines_coreParentJob <SharedKotlinx_coroutines_coreJob>
@required
- (SharedKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SharedKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(SharedKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<SharedKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface SharedKtor_ioMemoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface SharedKtor_ioBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol SharedKtor_ioObjectPool <SharedKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface SharedKtor_ioChunkBufferCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<SharedKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<SharedKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface SharedKtor_ioInputCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface SharedKtor_ioByteReadPacketCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SharedKtor_utilsWeekDayCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SharedKtor_utilsMonthCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SharedKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol SharedKodein_diDIBindingCopier
@required
- (id<SharedKodein_diDIBinding>)doCopyBuilder:(id<SharedKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end

__attribute__((swift_name("Kodein_diWithContext")))
@protocol SharedKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol SharedKodein_diBindingDI <SharedKodein_diDirectDI, SharedKodein_diWithContext>
@required
- (id<SharedKodein_diBindingDI>)onErasedContext __attribute__((swift_name("onErasedContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol SharedKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface SharedKodein_diScopeRegistry : SharedBase <SharedKodein_diScopeCloseable>
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(SharedKodein_diReference<id> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey_:(id)key __attribute__((swift_name("getOrNull(key_:)")));
- (void)removeKey_:(id)key __attribute__((swift_name("remove(key_:)")));
- (id)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
+ (SharedKotlinArray<SharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SharedKotlinKTypeProjectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)contravariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)covariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)invariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SharedKtor_httpHeaderValueParam : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (SharedKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SharedKtor_httpHeaderValueWithParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SharedKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SharedKtor_httpContentTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SharedKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SharedKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SharedKotlinx_coroutines_coreAtomicDesc : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SharedKotlinx_coroutines_coreOpDescriptor : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(SharedKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface SharedKodein_diReference<__covariant T> : SharedBase
- (instancetype)initWithCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (SharedKodein_diReference<T> *)doCopyCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^next)(void) __attribute__((swift_name("next")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SharedKotlinx_coroutines_coreAtomicOp<__contravariant T> : SharedKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) SharedKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNode : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(SharedBoolean *(^)(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(SharedBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<SharedKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(SharedBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : SharedKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(SharedKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface SharedKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : SharedKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(SharedKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(SharedKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(SharedKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) SharedKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
