#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCB78E80)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0___GETSERVERPINGS_B__0_OFFSET UNITYSDK_OFFSET(0xCB79390)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase___c__DisplayClass17_0_TypeDefinitionIndex = 61141;

	class ClientStartupPhase___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Boolean succeed; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void __GetServerPings_b__0(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0___GETSERVERPINGS_B__0_OFFSET))(this, a1, a2);
		}

	};
}
