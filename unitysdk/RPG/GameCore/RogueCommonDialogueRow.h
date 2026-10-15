#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCommonDialogueRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUECOMMONDIALOGUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D983860)
#define RPG_GAMECORE_ROGUECOMMONDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D983730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCommonDialogueRow_TypeDefinitionIndex = 14695;

	class RogueCommonDialogueRow : public ::System::Object
	{
	public:
		::System::String* DialoguePath; // 0x10
		::System::UInt32 DialogueID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONDIALOGUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCommonDialogueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCommonDialogueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECOMMONDIALOGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
