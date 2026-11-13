#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20600870)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20600520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionConfigRow_TypeDefinitionIndex = 13725;

	class GridFightDivisionConfigRow : public ::System::Object
	{
	public:
		::System::String* DivisionIcon; // 0x10
		::System::String* DivisionShowPic; // 0x18
		::Il2CppArray<::System::UInt32>* DivisionRewardQuest; // 0x20
		::System::UInt32 SeasonID; // 0x28
		::System::UInt32 Progress; // 0x2C
		::RPG::Client::TextID DivisionName; // 0x30
		::System::Boolean IsPromotion; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x44
		::System::UInt32 DivisionLevel; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDivisionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDivisionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
