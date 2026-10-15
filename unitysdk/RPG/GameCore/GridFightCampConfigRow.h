#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCampConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FA190)
#define RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F9D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCampConfigRow_TypeDefinitionIndex = 13627;

	class GridFightCampConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* ShowPicPath; // 0x20
		::Il2CppArray<::System::UInt32>* BattleAreaList; // 0x28
		::System::UInt32 InitialRandomCode; // 0x30
		::System::UInt32 ID; // 0x34
		::System::UInt32 SeasonID; // 0x38
		::System::UInt32 IfRandomEnabled; // 0x3C
		::System::UInt32 BossBattleArea; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CampDesc; // 0x48
		::RPG::Client::TextID CampName; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCampConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCampConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
