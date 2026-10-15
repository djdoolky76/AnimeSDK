#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class Effect_LiquidPerInsData;
namespace UnityEngine { class MonoBehaviour; }

#define GCEBEKBEMJL_ADFFBLOPMAP_OFFSET UNITYSDK_OFFSET(0x15969B10)
#define GCEBEKBEMJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1596A380)
#define GCEBEKBEMJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1596A310)
#define GCEBEKBEMJL_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1596A2A0)
#define GCEBEKBEMJL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15969AA0)

	class GCEBEKBEMJL : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBEKBEMJL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + GCEBEKBEMJL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ADFFBLOPMAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBEKBEMJL_ADFFBLOPMAP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBEKBEMJL_DISPOSE_OFFSET))(this);
		}

		::Effect_LiquidPerInsData* HPNDIIPEFLJ()
		{
			return ((::Effect_LiquidPerInsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEBEKBEMJL_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
