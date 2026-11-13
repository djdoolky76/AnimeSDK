#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class StageRegionConnection; }

#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D080100)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_DAGPJJDFMBM_OFFSET UNITYSDK_OFFSET(0x1D080000)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_INIT_OFFSET UNITYSDK_OFFSET(0x1D0800B0)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_MBKJPIBKGGM_OFFSET UNITYSDK_OFFSET(0x1D080050)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D07FE80)

namespace RPG::Client
{
	inline static constexpr unsigned int RegionConnectionDebugMono_TypeDefinitionIndex = 63581;

	class RegionConnectionDebugMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::StageRegionConnection* OFKGLJOAMLD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::StageRegionConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_INIT_OFFSET))(this, a1);
		}

		::System::Single DAGPJJDFMBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_DAGPJJDFMBM_OFFSET))(this);
		}

		::System::Single MBKJPIBKGGM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_MBKJPIBKGGM_OFFSET))(this);
		}

	};
}
