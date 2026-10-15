#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyCalculator_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOMGKHJMAKK_AOADKOMNOCK_OFFSET UNITYSDK_OFFSET(0xBCED170)
#define NOMGKHJMAKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEC970)
#define NOMGKHJMAKK_EOIFFLADINE_OFFSET UNITYSDK_OFFSET(0xBCEC9D0)
#define NOMGKHJMAKK_FONHIPLPFEH_OFFSET UNITYSDK_OFFSET(0xBCECCC0)
#define NOMGKHJMAKK_HOGIKLJMBFB_OFFSET UNITYSDK_OFFSET(0xBCECB00)
#define NOMGKHJMAKK_JDIKBMADKCE_OFFSET UNITYSDK_OFFSET(0xBCED050)
#define NOMGKHJMAKK_KLGMCMHHIDG_OFFSET UNITYSDK_OFFSET(0xBCECE50)
#define NOMGKHJMAKK_NJEDPMKPCDI_OFFSET UNITYSDK_OFFSET(0xBCED210)
#define NOMGKHJMAKK_OOELCLOOKGG_OFFSET UNITYSDK_OFFSET(0xBCECF70)

inline static constexpr unsigned int NOMGKHJMAKK_TypeDefinitionIndex = 75125;

	class NOMGKHJMAKK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* HPKJILJDNNE; // 0x10
		::RPG::AvatarSystem::Property::PropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* CGAPAPOLFAI; // 0x18
		::RPG::AvatarSystem::Property::PropertyCalculator_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* KFJECNHILFP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal HOGIKLJMBFB(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_HOGIKLJMBFB_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal FONHIPLPFEH(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_FONHIPLPFEH_OFFSET))(this, a1);
		}

		::System::Void KLGMCMHHIDG(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_KLGMCMHHIDG_OFFSET))(this, a1);
		}

		::System::Void JDIKBMADKCE(::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>*))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_JDIKBMADKCE_OFFSET))(this, a1);
		}

		::System::Void AOADKOMNOCK(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_AOADKOMNOCK_OFFSET))(this, a1);
		}

		::System::Void EOIFFLADINE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_EOIFFLADINE_OFFSET))(this);
		}

		::System::Void OOELCLOOKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_OOELCLOOKGG_OFFSET))(this);
		}

		::System::Void NJEDPMKPCDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMGKHJMAKK_NJEDPMKPCDI_OFFSET))(this);
		}

	};
