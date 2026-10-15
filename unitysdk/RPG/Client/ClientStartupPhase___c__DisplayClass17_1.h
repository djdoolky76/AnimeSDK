#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCB71240)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_1___GETSERVERPINGS_B__1_OFFSET UNITYSDK_OFFSET(0xCB71250)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase___c__DisplayClass17_1_TypeDefinitionIndex = 61142;

	template <typename T>
	class ClientStartupPhase___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* resolve; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_1_CTOR_OFFSET))(this);
		}

		::System::Void __GetServerPings_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_1___GETSERVERPINGS_B__1_OFFSET))(this);
		}

	};
}
