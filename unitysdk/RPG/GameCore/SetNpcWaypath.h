#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNpcWaypath; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCWAYPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABE510)
#define RPG_GAMECORE_SETNPCWAYPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABE540)
#define RPG_GAMECORE_SETNPCWAYPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABE4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNpcWaypath_TypeDefinitionIndex = 20341;

	class SetNpcWaypath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::WaypathUsageType UsageType; // 0x20
		::System::UInt32 WaypathIdx; // 0x24
		::System::Boolean LockEntityLod; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNpcWaypath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNpcWaypath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNpcWaypath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNpcWaypath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
