#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueUnfinishDialogueNpcNum; }

#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A28D0)
#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A28E0)
#define RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A2890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueUnfinishDialogueNpcNum_TypeDefinitionIndex = 20800;

	class ByCompareRogueUnfinishDialogueNpcNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueUnfinishDialogueNpcNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEUNFINISHDIALOGUENPCNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
