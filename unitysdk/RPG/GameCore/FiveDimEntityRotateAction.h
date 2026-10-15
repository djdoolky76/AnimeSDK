#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEntityRotateAction; }
namespace RPG::GameCore { class FiveDimEntityRotateConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB850)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BB860)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BB820)

namespace RPG::GameCore
{
	class FiveDimEntityRotateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimEntityRotateConfig* RotateConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityRotateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityRotateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityRotateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityRotateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
