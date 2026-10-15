#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginTargetHeadIcon; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define MIFJJJALKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB953760)
#define MIFJJJALKMO_CTOR_OFFSET UNITYSDK_OFFSET(0xB953750)
#define MIFJJJALKMO_DHIHLEBCALM_OFFSET UNITYSDK_OFFSET(0xB952E40)
#define MIFJJJALKMO_DKLIJOFDJCK_OFFSET UNITYSDK_OFFSET(0xB9534C0)
#define MIFJJJALKMO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB953450)
#define MIFJJJALKMO_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xB953400)
#define MIFJJJALKMO_LBNGJOAEOCN_OFFSET UNITYSDK_OFFSET(0xB952FD0)

inline static constexpr unsigned int MIFJJJALKMO_TypeDefinitionIndex = 69905;

	class MIFJJJALKMO : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* FADILKPGCEM; // 0x18
		static ::System::String** StaticGet_MBIJMCFCHEI()
		{
			return (::System::String**)UnitySDK::FromName("", "MIFJJJALKMO")->GetStaticField(0x6FCB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFJJJALKMO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIFJJJALKMO_CCTOR_OFFSET))();
		}

		::System::Void DHIHLEBCALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFJJJALKMO_DHIHLEBCALM_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFJJJALKMO_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::String* LBNGJOAEOCN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFJJJALKMO_LBNGJOAEOCN_OFFSET))(this);
		}

		::System::Void DKLIJOFDJCK(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MIFJJJALKMO_DKLIJOFDJCK_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginTargetHeadIcon* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginTargetHeadIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIFJJJALKMO_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
