#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildPropertyType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyEvolveBuildProperty; }

#define RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D896E90)
#define RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D896EA0)
#define RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D896E50)

namespace RPG::GameCore
{
	class ModifyEvolveBuildProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EvolveBuildPropertyType ValueType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyEvolveBuildProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYEVOLVEBUILDPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
