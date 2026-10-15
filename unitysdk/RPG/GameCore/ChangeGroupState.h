#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeGroupState; }

#define RPG_GAMECORE_CHANGEGROUPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5671A0)
#define RPG_GAMECORE_CHANGEGROUPSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5671B0)
#define RPG_GAMECORE_CHANGEGROUPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D567160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeGroupState_TypeDefinitionIndex = 21178;

	class ChangeGroupState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEGROUPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEGROUPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeGroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEGROUPSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
