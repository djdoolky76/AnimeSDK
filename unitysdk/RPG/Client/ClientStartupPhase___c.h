#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB70F00)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB70F40)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C___ONEXCEPTION_B__9_0_OFFSET UNITYSDK_OFFSET(0xCB70F50)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase___c_TypeDefinitionIndex = 61139;

	class ClientStartupPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14FB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnException_b__9_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C___ONEXCEPTION_B__9_0_OFFSET))(this, a1);
		}

	};
}
