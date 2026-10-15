#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildItemSlotExt; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC011E0)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC00EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemSlot_TypeDefinitionIndex = 16265;

	class TrainPartyBuildItemSlot : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 Tags; // 0x14
		::RPG::MVector3 LocalPosition; // 0x18
		::RPG::MVector3 LocalRotation; // 0x24
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildItemSlotExt*>* Exts; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemSlot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
