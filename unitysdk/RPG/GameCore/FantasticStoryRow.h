#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryRow; }

#define RPG_GAMECORE_FANTASTICSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D696F60)
#define RPG_GAMECORE_FANTASTICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D696D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryRow_TypeDefinitionIndex = 11461;

	class FantasticStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChapterIDList; // 0x10
		::Il2CppArray<::System::UInt32>* BattleIDList; // 0x18
		::Il2CppArray<::System::UInt32>* BuffSlotIDList; // 0x20
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x28
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 FantasticStoryID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FantasticStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FantasticStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
