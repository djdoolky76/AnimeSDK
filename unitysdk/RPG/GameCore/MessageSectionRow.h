#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageSectionRow; }

#define RPG_GAMECORE_MESSAGESECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F860)
#define RPG_GAMECORE_MESSAGESECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D84F6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageSectionRow_TypeDefinitionIndex = 14461;

	class MessageSectionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StartMessageItemIDList; // 0x10
		::System::Boolean IsPerformMessage; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x1C
		::System::UInt32 MainMissionLink; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageSectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageSectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
