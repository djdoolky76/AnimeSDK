#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildItemSlotExt; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2ED20)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemSlotExt_TypeDefinitionIndex = 16264;

	class TrainPartyBuildItemSlotExt : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DynamicID; // 0x10
		::RPG::MVector3 LocalPosition; // 0x14
		::RPG::MVector3 LocalRotation; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildItemSlotExt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildItemSlotExt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
