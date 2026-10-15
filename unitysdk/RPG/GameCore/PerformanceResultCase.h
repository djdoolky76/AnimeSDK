#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceResultCase; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PERFORMANCERESULTCASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D902880)
#define RPG_GAMECORE_PERFORMANCERESULTCASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9026D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceResultCase_TypeDefinitionIndex = 21243;

	class PerformanceResultCase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Case; // 0x10
		::System::Boolean ForceCloseBlack; // 0x14
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERESULTCASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceResultCase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceResultCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERESULTCASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
