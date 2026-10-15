#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TASKLISTTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB790D0)
#define RPG_GAMECORE_TASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB78F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskListTemplate_TypeDefinitionIndex = 15643;

	class TaskListTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::ENEIHJJPNPI* DynamicValues; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* DynamicStrings; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKLISTTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TaskListTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TaskListTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKLISTTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
