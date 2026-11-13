#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueIconRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B3A90)
#define RPG_GAMECORE_DIALOGUEICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F3B34A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueIconRow_TypeDefinitionIndex = 13210;

	class DialogueIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::JsonEnum* Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
