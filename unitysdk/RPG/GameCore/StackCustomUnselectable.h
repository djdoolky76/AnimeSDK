#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class StackCustomUnselectable; }

#define RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02DB0)
#define RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB02DC0)
#define RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB02D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackCustomUnselectable_TypeDefinitionIndex = 23714;

	class StackCustomUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypes; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask EntityTypes; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::System::Boolean ForceUnselectable; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKCUSTOMUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
