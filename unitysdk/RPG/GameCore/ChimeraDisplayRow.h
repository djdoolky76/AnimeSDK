#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDisplayRow; }

#define RPG_GAMECORE_CHIMERADISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AB260)
#define RPG_GAMECORE_CHIMERADISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7AAD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDisplayRow_TypeDefinitionIndex = 13087;

	class ChimeraDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Story1Title; // 0x10
		::RPG::Client::TextID Story2; // 0x20
		::RPG::Client::TextID ChimeraName; // 0x30
		::RPG::Client::TextID Story1; // 0x40
		::RPG::Client::TextID Story2Title; // 0x50
		::System::UInt32 DisplayID; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Story3Title; // 0x68
		::RPG::Client::TextID Story3; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
