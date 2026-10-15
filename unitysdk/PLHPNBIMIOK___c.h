#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHPNBIMIOK;
namespace System { class Object; }

#define PLHPNBIMIOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA1970)
#define PLHPNBIMIOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA19B0)
#define PLHPNBIMIOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFA19C0)

	class PLHPNBIMIOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHPNBIMIOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK___C_CTOR_OFFSET))(this);
		}

		::PLHPNBIMIOK* __cctor_b__28_0()
		{
			return ((::PLHPNBIMIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPNBIMIOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
