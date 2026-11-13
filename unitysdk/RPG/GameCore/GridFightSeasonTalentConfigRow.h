#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonTalentConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA60900)
#define RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA60400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonTalentConfigRow_TypeDefinitionIndex = 13682;

	class GridFightSeasonTalentConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x20
		::Il2CppArray<::System::UInt32>* PreTalentIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x30
		::System::UInt32 IsOCEffective; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID EffectTitle; // 0x40
		::System::UInt32 SeasonID; // 0x50
		::System::UInt32 Cost; // 0x54
		::System::UInt32 IsImportant; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EffectDesc; // 0x60
		::RPG::Client::TextID EffectTag; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonTalentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonTalentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONTALENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
