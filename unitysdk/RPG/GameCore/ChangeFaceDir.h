#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeFaceDir; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGEFACEDIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D566EC0)
#define RPG_GAMECORE_CHANGEFACEDIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D566F00)
#define RPG_GAMECORE_CHANGEFACEDIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D566E60)

namespace RPG::GameCore
{
	class ChangeFaceDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18
		::System::Single FaceDirAngle; // 0x20
		::System::Boolean RelativeAngle; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x28
		::System::Boolean SaveFormationFaceDelta; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEFACEDIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeFaceDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeFaceDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEFACEDIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeFaceDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeFaceDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEFACEDIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
