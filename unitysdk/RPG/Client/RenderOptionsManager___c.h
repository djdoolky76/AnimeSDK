#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_RENDEROPTIONSMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE93100)
#define RPG_CLIENT_RENDEROPTIONSMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE93130)
#define RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xDE93140)
#define RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xDE93210)

namespace RPG::Client
{
	inline static constexpr unsigned int RenderOptionsManager___c_TypeDefinitionIndex = 70172;

	class RenderOptionsManager___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5E310);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5E318);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5E320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_0_OFFSET))(this);
		}

		::System::Void __ctor_b__1_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDEROPTIONSMANAGER___C___CTOR_B__1_1_OFFSET))(this, a1);
		}

	};
}
