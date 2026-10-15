#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSplineMoveComponentConfig; }
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }

#define RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DD7C0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DD7D0)
#define RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSplineMoveComponentConfig_TypeDefinitionIndex = 18567;

	class FiveDimSplineMoveComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean HasSplineMove; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimSplineMoveConfig* MoveConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPLINEMOVECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
