#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCMonsterMarkRow; }

#define RPG_GAMECORE_NPCMONSTERMARKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D21D0)
#define RPG_GAMECORE_NPCMONSTERMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8D2060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterMarkRow_TypeDefinitionIndex = 14288;

	class NPCMonsterMarkRow : public ::System::Object
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERMARKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCMonsterMarkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCMonsterMarkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
