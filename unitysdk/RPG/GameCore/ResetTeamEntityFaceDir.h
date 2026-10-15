#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetTeamEntityFaceDir; }

#define RPG_GAMECORE_RESETTEAMENTITYFACEDIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98BE60)
#define RPG_GAMECORE_RESETTEAMENTITYFACEDIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98BE70)
#define RPG_GAMECORE_RESETTEAMENTITYFACEDIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98BE30)

namespace RPG::GameCore
{
	class ResetTeamEntityFaceDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMENTITYFACEDIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTeamEntityFaceDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTeamEntityFaceDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMENTITYFACEDIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTeamEntityFaceDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTeamEntityFaceDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMENTITYFACEDIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
