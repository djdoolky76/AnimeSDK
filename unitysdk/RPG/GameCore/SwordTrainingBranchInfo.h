#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingBranchInfo; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGBRANCHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1B180)
#define RPG_GAMECORE_SWORDTRAININGBRANCHINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1B050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingBranchInfo_TypeDefinitionIndex = 20325;

	class SwordTrainingBranchInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StoryLineID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* TriggerCustomString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGBRANCHINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingBranchInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingBranchInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGBRANCHINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
