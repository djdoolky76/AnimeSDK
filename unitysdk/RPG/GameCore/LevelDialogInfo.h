#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelDialogPackInfo; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDIALOGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8630)
#define RPG_GAMECORE_LEVELDIALOGINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A8470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDialogInfo_TypeDefinitionIndex = 17237;

	class LevelDialogInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraph; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelDialogPackInfo*>* PackList; // 0x18
		::RPG::GameCore::LevelGroupMissionConditionSet* EnableCondition; // 0x20
		::System::Boolean EnableDialogCamera; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIALOGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelDialogInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelDialogInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIALOGINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
