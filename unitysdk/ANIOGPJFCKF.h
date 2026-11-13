#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDJMOBCGJJC;
class GPDLKLOEOJG;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatRollDiceEffectParameter; }
namespace UnityEngine { class GameObject; }

#define ANIOGPJFCKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A825A00)
#define ANIOGPJFCKF_EHIDMCPPDKK_OFFSET UNITYSDK_OFFSET(0x1A825C80)
#define ANIOGPJFCKF_IAGJEBPKOOO_OFFSET UNITYSDK_OFFSET(0x1A825CC0)
#define ANIOGPJFCKF_KAEFBOLKNMC_OFFSET UNITYSDK_OFFSET(0x1A825AD0)
#define ANIOGPJFCKF_NOECONCIBEO_OFFSET UNITYSDK_OFFSET(0x1A825A10)

inline static constexpr unsigned int ANIOGPJFCKF_TypeDefinitionIndex = 78421;

	class ANIOGPJFCKF : public ::System::Object
	{
	public:
		::GPDLKLOEOJG* LFJOHJEPOKO; // 0x10
		::DDJMOBCGJJC* PGNKDKLMBJJ; // 0x18
		::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* EJGPIGLDFPG; // 0x20
		::UnityEngine::GameObject* PJINGPLNBGA; // 0x28
		::System::Void _ctor(::GPDLKLOEOJG* a1, ::DDJMOBCGJJC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GPDLKLOEOJG*, ::DDJMOBCGJJC*))((::PBYTE)hIl2Cpp + ANIOGPJFCKF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DiceCombatPhySimParameter* NOECONCIBEO()
		{
			return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIOGPJFCKF_NOECONCIBEO_OFFSET))(this);
		}

		::UnityEngine::GameObject* KAEFBOLKNMC()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIOGPJFCKF_KAEFBOLKNMC_OFFSET))(this);
		}

		::DDJMOBCGJJC* EHIDMCPPDKK()
		{
			return ((::DDJMOBCGJJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIOGPJFCKF_EHIDMCPPDKK_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter* IAGJEBPKOOO()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRollDiceEffectParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIOGPJFCKF_IAGJEBPKOOO_OFFSET))(this);
		}

	};
