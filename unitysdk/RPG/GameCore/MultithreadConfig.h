#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultithreadConfig; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define RPG_GAMECORE_MULTITHREADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C02C0)
#define RPG_GAMECORE_MULTITHREADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultithreadConfig_TypeDefinitionIndex = 24403;

	class MultithreadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ThreadTaskConfig*>* ThreadTaskList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTITHREADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MultithreadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MultithreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTITHREADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
