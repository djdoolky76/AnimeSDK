#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetFloorDefaultEmotion; }

#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98AEB0)
#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98AEC0)
#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98ADF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetFloorDefaultEmotion_TypeDefinitionIndex = 21276;

	class ResetFloorDefaultEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
