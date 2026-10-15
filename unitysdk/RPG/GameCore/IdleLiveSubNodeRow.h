#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSubNodeRow; }

#define RPG_GAMECORE_IDLELIVESUBNODEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D752A70)
#define RPG_GAMECORE_IDLELIVESUBNODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7528C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSubNodeRow_TypeDefinitionIndex = 11699;

	class IdleLiveSubNodeRow : public ::System::Object
	{
	public:
		::System::UInt32 SubNodeID; // 0x10
		::System::UInt32 StageID; // 0x14
		::System::UInt32 EquipOrbDrop; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUBNODEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSubNodeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSubNodeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESUBNODEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
