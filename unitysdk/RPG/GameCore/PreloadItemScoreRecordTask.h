#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadItemScoreRecordChildTask; }
namespace RPG::GameCore { class PreloadItemScoreRecordTask; }

#define RPG_GAMECORE_PRELOADITEMSCORERECORDTASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93FF60)
#define RPG_GAMECORE_PRELOADITEMSCORERECORDTASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93FDF0)

namespace RPG::GameCore
{
	class PreloadItemScoreRecordTask : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean RecordAll; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::PreloadItemScoreRecordChildTask*>* ChildTaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDTASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadItemScoreRecordTask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadItemScoreRecordTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDTASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
