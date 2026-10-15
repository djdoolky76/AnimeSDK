#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSenderRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESENDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77EF50)
#define RPG_GAMECORE_IDLELIVESENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSenderRow_TypeDefinitionIndex = 11790;

	class IdleLiveSenderRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESENDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSenderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSenderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
