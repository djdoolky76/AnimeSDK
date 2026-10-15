#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageStateIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_MESSAGESTATEICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D850830)
#define RPG_GAMECORE_MESSAGESTATEICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D850230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageStateIconRow_TypeDefinitionIndex = 14483;

	class MessageStateIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::MessageStateType ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageStateIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageStateIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESTATEICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
