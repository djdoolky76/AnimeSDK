#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealTalkConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALTALKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81A890)
#define RPG_GAMECORE_MARBLESEALTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D81A6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealTalkConfigRow_TypeDefinitionIndex = 11857;

	class MarbleSealTalkConfigRow : public ::System::Object
	{
	public:
		::System::String* VoiceEvt; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Talk; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALTALKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealTalkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALTALKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
