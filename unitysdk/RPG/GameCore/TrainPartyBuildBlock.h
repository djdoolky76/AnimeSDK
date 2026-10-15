#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYBUILDBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC00550)
#define RPG_GAMECORE_TRAINPARTYBUILDBLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC003C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildBlock_TypeDefinitionIndex = 16271;

	class TrainPartyBuildBlock : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockName; // 0x10
		::System::String* BlockAlias; // 0x18
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildStaticItem*>* StaticItems; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDBLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyBuildBlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyBuildBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDBLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
