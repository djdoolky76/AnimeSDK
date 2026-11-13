#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define PPJBCBCMDLB_BKKNODJLMPJ_OFFSET UNITYSDK_OFFSET(0x1B8B05F0)
#define PPJBCBCMDLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B0A70)
#define PPJBCBCMDLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8AFE70)
#define PPJBCBCMDLB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1B8B0180)
#define PPJBCBCMDLB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B8B0300)
#define PPJBCBCMDLB_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x1B8AFEE0)
#define PPJBCBCMDLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B8AFE00)
#define PPJBCBCMDLB_MDHEOMNLFJG_OFFSET UNITYSDK_OFFSET(0x1B8B0400)
#define PPJBCBCMDLB_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x1B8B01D0)
#define PPJBCBCMDLB___ONFLYTOTARGET_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B8B0A80)

inline static constexpr unsigned int PPJBCBCMDLB_TypeDefinitionIndex = 71849;

	class PPJBCBCMDLB : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean OOLBLFHHAPK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MDHEOMNLFJG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_MDHEOMNLFJG_OFFSET))(this, a1);
		}

		::System::Void BKKNODJLMPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_BKKNODJLMPJ_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginPerformEventListener* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginPerformEventListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void __OnFlyToTarget_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJBCBCMDLB___ONFLYTOTARGET_B__6_0_OFFSET))(this);
		}

	};
