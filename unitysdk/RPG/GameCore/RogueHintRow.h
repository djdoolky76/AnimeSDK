#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHintRow; }

#define RPG_GAMECORE_ROGUEHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A27F0)
#define RPG_GAMECORE_ROGUEHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A2220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHintRow_TypeDefinitionIndex = 14689;

	class RogueHintRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID HintText; // 0x10
		::System::UInt32 HintID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueHintRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
