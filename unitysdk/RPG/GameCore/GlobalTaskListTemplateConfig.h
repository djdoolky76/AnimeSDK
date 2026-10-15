#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalTaskListTemplateConfig; }
namespace RPG::GameCore { class TaskListTemplate; }

#define RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71FD00)
#define RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71FC10)

namespace RPG::GameCore
{
	class GlobalTaskListTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* TaskListTemplate; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalTaskListTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalTaskListTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALTASKLISTTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
