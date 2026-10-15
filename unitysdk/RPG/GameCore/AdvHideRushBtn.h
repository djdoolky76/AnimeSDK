#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvHideRushBtn; }

#define RPG_GAMECORE_ADVHIDERUSHBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D374040)
#define RPG_GAMECORE_ADVHIDERUSHBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D374050)
#define RPG_GAMECORE_ADVHIDERUSHBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D374010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvHideRushBtn_TypeDefinitionIndex = 20203;

	class AdvHideRushBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDERUSHBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvHideRushBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvHideRushBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDERUSHBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvHideRushBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvHideRushBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVHIDERUSHBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
