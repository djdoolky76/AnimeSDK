#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueEndlessMegaBuffDescRow; }

#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CA5D0)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C9E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEndlessMegaBuffDescRow_TypeDefinitionIndex = 12343;

	class RogueEndlessMegaBuffDescRow : public ::System::Object
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BuffPreshowDesc; // 0x18
		::RPG::Client::TextID BuffDesc; // 0x28
		::RPG::Client::TextID BuffSimpleDesc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueEndlessMegaBuffDescRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
