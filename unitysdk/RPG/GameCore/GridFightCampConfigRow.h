#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCampConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D727C10)
#define RPG_GAMECORE_GRIDFIGHTCAMPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7277D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCampConfigRow_TypeDefinitionIndex = 13627;

	class GridFightCampConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleAreaList; // 0x10
		::System::String* ShowPicPath; // 0x18
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID CampDesc; // 0x30
		::System::UInt32 InitialRandomCode; // 0x40
		::System::UInt32 IfRandomEnabled; // 0x44
		::System::UInt32 ID; // 0x48
		::System::UInt32 BossBattleArea; // 0x4C
		::System::UInt32 SeasonID; // 0x50
		::System::Byte _padding0[0x4];
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
