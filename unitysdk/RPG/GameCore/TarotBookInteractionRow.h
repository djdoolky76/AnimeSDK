#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookConditionParam; }
namespace RPG::GameCore { class TarotBookInteractionRow; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKINTERACTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB76F80)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB764F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionRow_TypeDefinitionIndex = 15239;

	class TarotBookInteractionRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* FinishConditionList; // 0x18
		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* StartConditionList; // 0x20
		::System::UInt32 Priority; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Title; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookInteractionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookInteractionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
