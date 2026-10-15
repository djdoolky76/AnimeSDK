#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicMiscDisplayRow; }

#define RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D4EF0)
#define RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D4D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicMiscDisplayRow_TypeDefinitionIndex = 14874;

	class RogueMagicMiscDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DisplayContent; // 0x10
		::System::UInt32 DisplayID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicMiscDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicMiscDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICMISCDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
