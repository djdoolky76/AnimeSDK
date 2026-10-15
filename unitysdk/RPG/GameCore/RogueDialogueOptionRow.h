#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueOptionRow; }

#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C9410)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C92C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueOptionRow_TypeDefinitionIndex = 14818;

	class RogueDialogueOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 OptionID; // 0x18
		::System::UInt32 OptionDisplayID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
