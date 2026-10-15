#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextJoinOverrideType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextJoinConfigRow; }

#define RPG_GAMECORE_TEXTJOINCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB81C10)
#define RPG_GAMECORE_TEXTJOINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB81A00)

namespace RPG::GameCore
{
	class TextJoinConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TextJoinItemList; // 0x10
		::System::UInt32 TextJoinID; // 0x18
		::System::UInt32 DefaultItem; // 0x1C
		::System::Boolean IsOverride; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TextJoinOverrideType Type; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextJoinConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
