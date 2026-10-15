#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEMPKDDHEFN;
namespace System { class Object; }

#define KEMPKDDHEFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8110D0)
#define KEMPKDDHEFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E811110)
#define KEMPKDDHEFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E811120)

	class KEMPKDDHEFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEMPKDDHEFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN___C_CTOR_OFFSET))(this);
		}

		::KEMPKDDHEFN* __cctor_b__23_0()
		{
			return ((::KEMPKDDHEFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
