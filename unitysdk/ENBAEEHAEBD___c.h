#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENBAEEHAEBD;
namespace System { class Object; }

#define ENBAEEHAEBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9050)
#define ENBAEEHAEBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9090)
#define ENBAEEHAEBD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2E90A0)

	class ENBAEEHAEBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x542B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENBAEEHAEBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBAEEHAEBD___C_CTOR_OFFSET))(this);
		}

		::ENBAEEHAEBD* __cctor_b__23_0()
		{
			return ((::ENBAEEHAEBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBAEEHAEBD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
