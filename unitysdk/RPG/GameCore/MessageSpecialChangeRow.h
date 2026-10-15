#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageSpecialChangeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageSpecialChangeRow; }

#define RPG_GAMECORE_MESSAGESPECIALCHANGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F9B0)
#define RPG_GAMECORE_MESSAGESPECIALCHANGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D84F870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageSpecialChangeRow_TypeDefinitionIndex = 14479;

	class MessageSpecialChangeRow : public ::System::Object
	{
	public:
		::System::UInt32 DialogShowID; // 0x10
		::RPG::GameCore::MessageSpecialChangeType ActionType; // 0x14
		::System::UInt32 ItemID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESPECIALCHANGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageSpecialChangeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageSpecialChangeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGESPECIALCHANGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
