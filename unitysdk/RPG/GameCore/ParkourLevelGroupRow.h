#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourLevelGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_PARKOURLEVELGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB08C90)
#define RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB08A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelGroupRow_TypeDefinitionIndex = 12152;

	class ParkourLevelGroupRow : public ::System::Object
	{
	public:
		::System::String* ResPath; // 0x10
		::Il2CppArray<::System::UInt32>* LevelIDList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourLevelGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourLevelGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURLEVELGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
