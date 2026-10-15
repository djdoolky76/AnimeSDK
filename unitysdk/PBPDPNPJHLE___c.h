#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBPDPNPJHLE;
namespace System { class Object; }

#define PBPDPNPJHLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFF9F0)
#define PBPDPNPJHLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFFA30)
#define PBPDPNPJHLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEFFA40)

	class PBPDPNPJHLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x344D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPDPNPJHLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE___C_CTOR_OFFSET))(this);
		}

		::PBPDPNPJHLE* __cctor_b__23_0()
		{
			return ((::PBPDPNPJHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
