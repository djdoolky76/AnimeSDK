#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ThreadTaskConfig; }

#define RPG_GAMECORE_THREADTASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE33CD0)
#define RPG_GAMECORE_THREADTASKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE33B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ThreadTaskConfig_TypeDefinitionIndex = 24861;

	class ThreadTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ThreadTaskType Type; // 0x10
		::System::Boolean RunInMainThread; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 InnerloopBatchCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_THREADTASKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ThreadTaskConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_THREADTASKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
