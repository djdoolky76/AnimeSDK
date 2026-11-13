#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginTargetHeadIcon; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define MIFJJJALKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A38D280)
#define MIFJJJALKMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A38D270)
#define MIFJJJALKMO_DHIHLEBCALM_OFFSET UNITYSDK_OFFSET(0x1A38C930)
#define MIFJJJALKMO_DKLIJOFDJCK_OFFSET UNITYSDK_OFFSET(0x1A38CFE0)
#define MIFJJJALKMO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1A38CF70)
#define MIFJJJALKMO_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x1A38CF20)
#define MIFJJJALKMO_LBNGJOAEOCN_OFFSET UNITYSDK_OFFSET(0x1A38CAC0)

inline static constexpr unsigned int MIFJJJALKMO_TypeDefinitionIndex = 71864;

	class MIFJJJALKMO : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* FADILKPGCEM; // 0x18
		static ::System::String** StaticGet_MBIJMCFCHEI()
		{
			return (::System::String**)UnitySDK::FromName("", "MIFJJJALKMO")->GetStaticField(0x73960);
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
