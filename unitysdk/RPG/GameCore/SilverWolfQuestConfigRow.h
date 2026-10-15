#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SilverWolfQuestConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE90E0)
#define RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE8EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfQuestConfigRow_TypeDefinitionIndex = 12353;

	class SilverWolfQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 HardLevel; // 0x24
		::System::UInt32 RaidID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SilverWolfQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SilverWolfQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
