#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAWORKDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583550)
#define RPG_GAMECORE_CHIMERAWORKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D583270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkDataRow_TypeDefinitionIndex = 13040;

	class ChimeraWorkDataRow : public ::System::Object
	{
	public:
		::System::String* WorkIcon; // 0x10
		::System::String* WorkPrefab; // 0x18
		::System::String* JsonConfig; // 0x20
		::System::UInt32 DisplayID; // 0x28
		::RPG::GameCore::ChimeraWorkType Tag; // 0x2C
		::System::UInt32 WorkValue; // 0x30
		::System::Single Hp; // 0x34
		::System::Single Atk; // 0x38
		::System::UInt32 WorkID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
