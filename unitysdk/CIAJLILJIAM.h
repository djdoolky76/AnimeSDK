#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CIAJLILJIAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF65180)
#define CIAJLILJIAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF645C0)
#define CIAJLILJIAM_EKHOGLFCCBI_OFFSET UNITYSDK_OFFSET(0xCF64850)
#define CIAJLILJIAM_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCF65070)
#define CIAJLILJIAM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCF648A0)
#define CIAJLILJIAM_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xCF64630)
#define CIAJLILJIAM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF64550)
#define CIAJLILJIAM_LODGFIDABBO_OFFSET UNITYSDK_OFFSET(0xCF64690)
#define CIAJLILJIAM_PCJEOMHPCJM_OFFSET UNITYSDK_OFFSET(0xCF650C0)
#define CIAJLILJIAM_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xCF64800)

inline static constexpr unsigned int CIAJLILJIAM_TypeDefinitionIndex = 69902;

	class CIAJLILJIAM : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Animator* FGJKNDNCCCJ; // 0x18
		::UnityEngine::Animator* ENJHGOIKBMG; // 0x20
		::System::Int32 ENMONAJOEME; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void EKHOGLFCCBI(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_EKHOGLFCCBI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIAJLILJIAM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LODGFIDABBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_LODGFIDABBO_OFFSET))(this);
		}

		::UnityEngine::Animator* PCJEOMHPCJM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CIAJLILJIAM_PCJEOMHPCJM_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAJLILJIAM_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
