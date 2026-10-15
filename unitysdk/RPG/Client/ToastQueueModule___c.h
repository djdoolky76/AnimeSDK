#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJBLCIHABKP;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TOASTQUEUEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2B2690)
#define RPG_CLIENT_TOASTQUEUEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2B26C0)
#define RPG_CLIENT_TOASTQUEUEMODULE___C___DOACTIONS_B__8_0_OFFSET UNITYSDK_OFFSET(0xE2B26D0)

namespace RPG::Client
{
	class ToastQueueModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::DJBLCIHABKP*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::DJBLCIHABKP*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D6A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1D6A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __DoActions_b__8_0(::DJBLCIHABKP* a1, ::DJBLCIHABKP* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::DJBLCIHABKP*, ::DJBLCIHABKP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOASTQUEUEMODULE___C___DOACTIONS_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
