#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropUnloadHitBox; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPUNLOADHITBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95BAB0)
#define RPG_GAMECORE_PROPUNLOADHITBOX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95BAC0)
#define RPG_GAMECORE_PROPUNLOADHITBOX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95BA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropUnloadHitBox_TypeDefinitionIndex = 22021;

	class PropUnloadHitBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropUnloadHitBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropUnloadHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropUnloadHitBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropUnloadHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPUNLOADHITBOX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
