#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGameFlow; }

#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xD14A260)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0xD14A270)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_DETACHFROM_OFFSET UNITYSDK_OFFSET(0xD14A120)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xD14A220)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xD14A240)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xD14A230)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xD14A250)
#define RPG_CLIENT_BASEGAMEFLOWCONTEXT__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xD14A370)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGameFlowContext_TypeDefinitionIndex = 65772;

	class BaseGameFlowContext : public ::System::Object
	{
	public:
		::RPG::Client::BaseGameFlow* _GameFlow_k__BackingField; // 0x10
		::System::Boolean _IsDestroyed_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BaseGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_GAMEFLOW_OFFSET))(this);
		}

		::System::Void set_GameFlow(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_GAMEFLOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_SET_ISDESTROYED_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Void DetachFrom(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT_DETACHFROM_OFFSET))(this, a1);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGAMEFLOWCONTEXT__ONDESTROYED_OFFSET))(this);
		}

	};
}
