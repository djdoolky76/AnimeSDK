#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMAHAKPLAAD;
namespace System { class Object; }

#define JMAHAKPLAAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E788580)
#define JMAHAKPLAAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7885C0)
#define JMAHAKPLAAD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7885D0)

	class JMAHAKPLAAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMAHAKPLAAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD___C_CTOR_OFFSET))(this);
		}

		::JMAHAKPLAAD* __cctor_b__18_0()
		{
			return ((::JMAHAKPLAAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHAKPLAAD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
