#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveSelfModifier; }

#define RPG_GAMECORE_REMOVESELFMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958CD0)
#define RPG_GAMECORE_REMOVESELFMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D958CE0)
#define RPG_GAMECORE_REMOVESELFMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D958CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveSelfModifier_TypeDefinitionIndex = 23479;

	class RemoveSelfModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MuteVisualStateRecover; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveSelfModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveSelfModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveSelfModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveSelfModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
