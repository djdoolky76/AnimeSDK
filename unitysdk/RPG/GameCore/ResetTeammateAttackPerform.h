#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetTeammateAttackPerform; }

#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98BFD0)
#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98BFE0)
#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98BF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTeammateAttackPerform_TypeDefinitionIndex = 22492;

	class ResetTeammateAttackPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTeammateAttackPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTeammateAttackPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTeammateAttackPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTeammateAttackPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
