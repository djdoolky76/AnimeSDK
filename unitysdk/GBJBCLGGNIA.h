#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class Effect_SetRandomAnimTime;
namespace UnityEngine { class MonoBehaviour; }

#define GBJBCLGGNIA_CTOR_OFFSET UNITYSDK_OFFSET(0x16886C50)
#define GBJBCLGGNIA_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16886C00)
#define GBJBCLGGNIA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x168869D0)

inline static constexpr unsigned int GBJBCLGGNIA_TypeDefinitionIndex = 48478;

	class GBJBCLGGNIA : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Int32 DNOIBALKLKH; // 0x18
		::System::Single NFLIHBKMJMG; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJBCLGGNIA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + GBJBCLGGNIA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::Effect_SetRandomAnimTime* HPNDIIPEFLJ()
		{
			return ((::Effect_SetRandomAnimTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJBCLGGNIA_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
