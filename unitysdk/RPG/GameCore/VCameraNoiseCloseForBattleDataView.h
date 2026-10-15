#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraNoiseCloseForBattleDataView; }

#define RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7F8C0)
#define RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7F8D0)
#define RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7F800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraNoiseCloseForBattleDataView_TypeDefinitionIndex = 23390;

	class VCameraNoiseCloseForBattleDataView : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
