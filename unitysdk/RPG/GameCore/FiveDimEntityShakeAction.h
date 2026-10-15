#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEntityShakeAction; }
namespace RPG::GameCore { class FiveDimEntityShakeConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BBB70)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BBB80)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BBB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityShakeAction_TypeDefinitionIndex = 18748;

	class FiveDimEntityShakeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimEntityShakeConfig* ShakeConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityShakeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityShakeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
