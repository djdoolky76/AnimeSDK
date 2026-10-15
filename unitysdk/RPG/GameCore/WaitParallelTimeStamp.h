#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class WaitParallelTimeStamp; }

#define RPG_GAMECORE_WAITPARALLELTIMESTAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6F260)
#define RPG_GAMECORE_WAITPARALLELTIMESTAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6F2D0)
#define RPG_GAMECORE_WAITPARALLELTIMESTAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitParallelTimeStamp_TypeDefinitionIndex = 22691;

	class WaitParallelTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPARALLELTIMESTAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitParallelTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitParallelTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPARALLELTIMESTAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitParallelTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitParallelTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPARALLELTIMESTAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
