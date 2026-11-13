#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_CONSENTBANNERFUNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D5B30)
#define RPG_CLIENT_CONSENTBANNERFUNC_GET_ISSHOWEDIT_OFFSET UNITYSDK_OFFSET(0x1B7D5B10)
#define RPG_CLIENT_CONSENTBANNERFUNC_INIT_OFFSET UNITYSDK_OFFSET(0x1B7D5130)
#define RPG_CLIENT_CONSENTBANNERFUNC_SET_ISSHOWEDIT_OFFSET UNITYSDK_OFFSET(0x1B7D5B20)
#define RPG_CLIENT_CONSENTBANNERFUNC_SHOWMANAGEPREFERENCES_OFFSET UNITYSDK_OFFSET(0x1B7D51B0)
#define RPG_CLIENT_CONSENTBANNERFUNC__INITCONSENTBANNER_OFFSET UNITYSDK_OFFSET(0x1B7D51F0)
#define RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWMANAGEPREFERENCESRESULT_OFFSET UNITYSDK_OFFSET(0x1B7D5980)
#define RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWPRIVACYBANNERRESULT_OFFSET UNITYSDK_OFFSET(0x1B7D54D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConsentBannerFunc_TypeDefinitionIndex = 62460;

	class ConsentBannerFunc : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _InitPromise; // 0x10
		::System::UInt32 _InitCount; // 0x18
		::System::Boolean _IsShowEdit_k__BackingField; // 0x1C
		// static const ::System::Object _MaxInitCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Init()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_INIT_OFFSET))(this);
		}

		::System::Void ShowManagePreferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_SHOWMANAGEPREFERENCES_OFFSET))(this);
		}

		::System::Void _InitConsentBanner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__INITCONSENTBANNER_OFFSET))(this);
		}

		::System::Void _OnShowPrivacyBannerResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWPRIVACYBANNERRESULT_OFFSET))(this, a1);
		}

		::System::Void _OnShowManagePreferencesResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWMANAGEPREFERENCESRESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_GET_ISSHOWEDIT_OFFSET))(this);
		}

		::System::Void set_IsShowEdit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_SET_ISSHOWEDIT_OFFSET))(this, a1);
		}

	};
}
