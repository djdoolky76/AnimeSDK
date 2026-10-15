#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfBehaviorState; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELFBEHAVIORSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D633B50)
#define RPG_GAMECORE_ELFBEHAVIORSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D633A50)

namespace RPG::GameCore
{
	class ElfBehaviorState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ElfBehaviorStateItem*>* StateMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfBehaviorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfBehaviorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
