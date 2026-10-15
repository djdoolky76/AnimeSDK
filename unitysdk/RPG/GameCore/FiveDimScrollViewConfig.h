#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimScrollViewType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimScrollViewConfig; }

#define RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7E30)
#define RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D7E40)
#define RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimScrollViewConfig_TypeDefinitionIndex = 18540;

	class FiveDimScrollViewConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::FiveDimScrollViewType ScrollViewType; // 0x10
		::RPG::MRect HardRect; // 0x14
		::RPG::MRect SoftRect; // 0x24
		::RPG::MRect ViewRect; // 0x34
		::RPG::MVector2 InitScrollValue; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimScrollViewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimScrollViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimScrollViewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimScrollViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
