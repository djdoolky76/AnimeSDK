#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class ModifyGridFightCustomProperty; }

#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D869FC0)
#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D869FD0)
#define RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D869F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyGridFightCustomProperty_TypeDefinitionIndex = 22533;

	class ModifyGridFightCustomProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* CustomType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGRIDFIGHTCUSTOMPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
