#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropStateMatchConfig; }

#define RPG_GAMECORE_PROPSTATEMATCHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9598E0)
#define RPG_GAMECORE_PROPSTATEMATCHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9597C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateMatchConfig_TypeDefinitionIndex = 22034;

	class PropStateMatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* PropKey; // 0x10
		::Il2CppArray<::RPG::GameCore::PropState>* States; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEMATCHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateMatchConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateMatchConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEMATCHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
