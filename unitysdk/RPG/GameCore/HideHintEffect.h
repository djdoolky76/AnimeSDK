#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideHintEffect; }

#define RPG_GAMECORE_HIDEHINTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D768A90)
#define RPG_GAMECORE_HIDEHINTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D768AA0)
#define RPG_GAMECORE_HIDEHINTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D768A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideHintEffect_TypeDefinitionIndex = 20565;

	class HideHintEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEHINTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideHintEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEHINTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideHintEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEHINTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
