#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveFuncUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveFuncUnlockHintRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE86D10)
#define RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE86AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveFuncUnlockHintRow_TypeDefinitionIndex = 11797;

	class IdleLiveFuncUnlockHintRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::GameCore::IdleLiveFuncUnlockType FuncUnlockType; // 0x28
		::System::UInt32 UnlockId; // 0x2C
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveFuncUnlockHintRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
