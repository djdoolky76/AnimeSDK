#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageItemAlias; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEITEMALIAS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2E10)
#define RPG_GAMECORE_STAGEITEMALIAS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE2D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageItemAlias_TypeDefinitionIndex = 22251;

	class StageItemAlias : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEITEMALIAS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageItemAlias* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageItemAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEITEMALIAS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
