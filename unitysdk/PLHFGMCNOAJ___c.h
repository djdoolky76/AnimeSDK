#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHFGMCNOAJ;
namespace System { class Object; }

#define PLHFGMCNOAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA0A80)
#define PLHFGMCNOAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA0AB0)
#define PLHFGMCNOAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFA0AC0)

	class PLHFGMCNOAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHFGMCNOAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ___C_CTOR_OFFSET))(this);
		}

		::PLHFGMCNOAJ* __cctor_b__23_0()
		{
			return ((::PLHFGMCNOAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
