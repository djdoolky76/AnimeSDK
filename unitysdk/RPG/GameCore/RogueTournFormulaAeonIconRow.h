#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournFormulaAeonIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA39630)
#define RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA39450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaAeonIconRow_TypeDefinitionIndex = 15009;

	class RogueTournFormulaAeonIconRow : public ::System::Object
	{
	public:
		::System::String* UltraFormulaCardIcon; // 0x10
		::System::String* FormulaIcon; // 0x18
		::System::String* UltraFormulaIcon; // 0x20
		::System::String* FormulaSubIcon; // 0x28
		::System::UInt32 BuffTypeID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournFormulaAeonIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournFormulaAeonIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAAEONICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
