#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ModifyCurvePropGroupObjectState; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D891950)
#define RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D891960)
#define RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D891920)

namespace RPG::GameCore
{
	class ModifyCurvePropGroupObjectState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::System::String* ObjectUniqueName; // 0x20
		::RPG::GameCore::ECurveObjectLogicState ModifyState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCurvePropGroupObjectState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCurvePropGroupObjectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyCurvePropGroupObjectState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyCurvePropGroupObjectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCURVEPROPGROUPOBJECTSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
