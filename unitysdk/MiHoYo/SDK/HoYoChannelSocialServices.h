#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelUserProfileParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelUserProfileResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_BLOCKLIST_OFFSET UNITYSDK_OFFSET(0x1AB3E000)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB3F080)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1AB37830)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEARSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB34D70)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2B9D0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_FRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1AB3D950)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONBLOCKLISTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB3CF70)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONFRIENDLISTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB3CB20)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB3D810)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONUSERPROFILECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB3D3C0)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB3ED60)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_USERPROFILE_OFFSET UNITYSDK_OFFSET(0x1AB3E6B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSocialServices_TypeDefinitionIndex = 47578;

	class HoYoChannelSocialServices : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_blockListLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A950);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*>** StaticGet_s_userProfileCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A958);
		}

		static ::System::Object** StaticGet_s_friendListLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A960);
		}

		static ::System::Object** StaticGet_s_userProfileLock()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A968);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*>** StaticGet_s_blockListCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A970);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>** StaticGet_s_socialUpdateCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A978);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_friendListTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A980);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_blockListTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A988);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*>** StaticGet_s_friendListCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A990);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_userProfileTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x1A998);
		}

		static ::System::Boolean* StaticGet_s_socialUpdateRegistered()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "HoYoChannelSocialServices")->GetStaticField(0x5ED0);
		}

		// static const ::System::Object FRIEND_LIST_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object BLOCK_LIST_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Object USER_PROFILE_TIMEOUT_SECONDS; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CCTOR_OFFSET))();
		}

		::System::Void FriendList(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_FRIENDLIST_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnFriendListCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONFRIENDLISTCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void BlockList(::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelBlockListParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelBlockListResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_BLOCKLIST_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnBlockListCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONBLOCKLISTCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void UserProfile(::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelUserProfileResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_USERPROFILE_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnUserProfileCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONUSERPROFILECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RegisterSocialUpdateCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_REGISTERSOCIALUPDATECALLBACK_OFFSET))(this, a1);
		}

		static ::System::Void ClearSocialUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEARSOCIALUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void OnSocialUpdateCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_ONSOCIALUPDATECALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}

	};
}
