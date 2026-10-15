#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityForbidCameraDither; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB0C90)
#define RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB0CA0)
#define RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB0C60)

namespace RPG::GameCore
{
	class SetEntityForbidCameraDither : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ForbidCameraDither; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityForbidCameraDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityForbidCameraDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityForbidCameraDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityForbidCameraDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFORBIDCAMERADITHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
