#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHintRow; }

#define RPG_GAMECORE_ROGUEHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC19960)
#define RPG_GAMECORE_ROGUEHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC19390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHintRow_TypeDefinitionIndex = 14845;

	class RogueHintRow : public ::System::Object
	{
	public:
		::System::UInt32 HintID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HintText; // 0x18
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
