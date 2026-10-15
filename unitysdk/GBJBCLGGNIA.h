#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class Effect_SetRandomAnimTime;
namespace UnityEngine { class MonoBehaviour; }

#define GBJBCLGGNIA_CTOR_OFFSET UNITYSDK_OFFSET(0x159513A0)
#define GBJBCLGGNIA_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15951350)
#define GBJBCLGGNIA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15951120)

inline static constexpr unsigned int GBJBCLGGNIA_TypeDefinitionIndex = 47449;

	class GBJBCLGGNIA : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single NFLIHBKMJMG; // 0x18
		::System::Int32 DNOIBALKLKH; // 0x1C
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
