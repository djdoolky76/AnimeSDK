#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class Effect_LiquidPerInsData;
namespace UnityEngine { class MonoBehaviour; }

#define GCEBEKBEMJL_ADFFBLOPMAP_OFFSET UNITYSDK_OFFSET(0x1689F800)
#define GCEBEKBEMJL_CTOR_OFFSET UNITYSDK_OFFSET(0x168A0070)
#define GCEBEKBEMJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168A0000)
#define GCEBEKBEMJL_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1689FF90)
#define GCEBEKBEMJL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1689F790)

inline static constexpr unsigned int GCEBEKBEMJL_TypeDefinitionIndex = 48474;

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
