#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNPCRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENPCROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207A6EE0)
#define RPG_GAMECORE_ROGUENPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207A6DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNPCRow_TypeDefinitionIndex = 14963;

	class RogueNPCRow : public ::System::Object
	{
	public:
		::System::String* NPCJsonPath; // 0x10
		::System::UInt32 RogueNPCID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNPCRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNPCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
