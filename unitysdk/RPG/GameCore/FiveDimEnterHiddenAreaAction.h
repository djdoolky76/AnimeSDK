#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEnterHiddenAreaAction; }

#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68DD40)
#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68DD50)
#define RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68DCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnterHiddenAreaAction_TypeDefinitionIndex = 18649;

	class FiveDimEnterHiddenAreaAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERHIDDENAREAACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
