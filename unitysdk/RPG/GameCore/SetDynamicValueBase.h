#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueBase; }

#define RPG_GAMECORE_SETDYNAMICVALUEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA72E80)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x1DA72FB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA72EF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA72E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBase_TypeDefinitionIndex = 23821;

	class SetDynamicValueBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_GET_ISCLIENTONLY_OFFSET))(this);
		}

	};
}
