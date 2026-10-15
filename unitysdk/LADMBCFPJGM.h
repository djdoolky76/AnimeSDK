#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class Effect_SetMaterialPropertyByRules;
class NKAKKMMLOPA;
namespace UnityEngine { class MonoBehaviour; }

#define LADMBCFPJGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D4F70)
#define LADMBCFPJGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5D4F00)
#define LADMBCFPJGM_GKLDJKHHKNM_OFFSET UNITYSDK_OFFSET(0xB5D4D00)
#define LADMBCFPJGM_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB5D4CB0)
#define LADMBCFPJGM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5D4960)

inline static constexpr unsigned int LADMBCFPJGM_TypeDefinitionIndex = 47448;

	class LADMBCFPJGM : public ::RPG::Client::BehaviorBase
	{
	public:
		::NKAKKMMLOPA* KAADKOILGAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADMBCFPJGM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + LADMBCFPJGM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void GKLDJKHHKNM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LADMBCFPJGM_GKLDJKHHKNM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LADMBCFPJGM_DISPOSE_OFFSET))(this);
		}

		::Effect_SetMaterialPropertyByRules* HPNDIIPEFLJ()
		{
			return ((::Effect_SetMaterialPropertyByRules*(*)(::PVOID))((::PBYTE)hIl2Cpp + LADMBCFPJGM_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
