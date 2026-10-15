#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveReplyRow; }

#define RPG_GAMECORE_IDLELIVEREPLYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77ED20)
#define RPG_GAMECORE_IDLELIVEREPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77EBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveReplyRow_TypeDefinitionIndex = 11794;

	class IdleLiveReplyRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OptionText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEREPLYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveReplyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveReplyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEREPLYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
