#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadItemScoreRecordChildTask; }

#define RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912470)
#define RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadItemScoreRecordChildTask_TypeDefinitionIndex = 16374;

	class PreloadItemScoreRecordChildTask : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PreloadGroupType RecordType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* RecordIds; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadItemScoreRecordChildTask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadItemScoreRecordChildTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADITEMSCORERECORDCHILDTASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
