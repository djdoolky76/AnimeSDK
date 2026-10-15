#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCCGPNAFMHP;
namespace System { class Object; }

#define PCCGPNAFMHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF06240)
#define PCCGPNAFMHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF06280)
#define PCCGPNAFMHP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF06290)

	class PCCGPNAFMHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x359B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCCGPNAFMHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP___C_CTOR_OFFSET))(this);
		}

		::PCCGPNAFMHP* __cctor_b__23_0()
		{
			return ((::PCCGPNAFMHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGPNAFMHP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
