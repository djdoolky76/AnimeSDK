#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITYUNWUCUTINPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D92E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowTraitYunWuCutInParam_TypeDefinitionIndex = 59399;

	class GridFightShowTraitYunWuCutInParam : public ::System::Object
	{
	public:
		::System::Action* OnCutInFinished; // 0x10
		::RPG::GameCore::BattleGridFightTeamTraitData* TraitData; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* InBattleAvatarIds; // 0x20
		::System::UInt32 TraitLv; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITYUNWUCUTINPARAM_CTOR_OFFSET))(this);
		}

	};
}
