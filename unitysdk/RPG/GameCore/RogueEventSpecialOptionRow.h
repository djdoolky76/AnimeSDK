#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueEventSpecialOptionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC3A0)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9CBDE0)

namespace RPG::GameCore
{
	class RogueEventSpecialOptionRow : public ::System::Object
	{
	public:
		::System::String* AeonFigure; // 0x10
		::System::String* AeonIcon; // 0x18
		::System::UInt32 SpecialOptionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueEventSpecialOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueEventSpecialOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
