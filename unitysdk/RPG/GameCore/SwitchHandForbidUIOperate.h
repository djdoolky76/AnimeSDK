#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandForbidUIOperate; }

#define RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42250)
#define RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42260)
#define RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB42220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandForbidUIOperate_TypeDefinitionIndex = 20963;

	class SwitchHandForbidUIOperate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Forbid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandForbidUIOperate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandForbidUIOperate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandForbidUIOperate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandForbidUIOperate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
