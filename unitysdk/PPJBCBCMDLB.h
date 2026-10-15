#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define PPJBCBCMDLB_BKKNODJLMPJ_OFFSET UNITYSDK_OFFSET(0xC384040)
#define PPJBCBCMDLB_CTOR_OFFSET UNITYSDK_OFFSET(0xC3844C0)
#define PPJBCBCMDLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3838D0)
#define PPJBCBCMDLB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC383BD0)
#define PPJBCBCMDLB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC383D50)
#define PPJBCBCMDLB_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xC383940)
#define PPJBCBCMDLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC383860)
#define PPJBCBCMDLB_MDHEOMNLFJG_OFFSET UNITYSDK_OFFSET(0xC383E50)
#define PPJBCBCMDLB_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xC383C20)
#define PPJBCBCMDLB___ONFLYTOTARGET_B__6_0_OFFSET UNITYSDK_OFFSET(0xC3844D0)

inline static constexpr unsigned int PPJBCBCMDLB_TypeDefinitionIndex = 69890;

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
