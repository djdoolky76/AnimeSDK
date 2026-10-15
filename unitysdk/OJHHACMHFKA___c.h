#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJHHACMHFKA;
namespace System { class Object; }

#define OJHHACMHFKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE85670)
#define OJHHACMHFKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE856B0)
#define OJHHACMHFKA___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1DE856C0)

	class OJHHACMHFKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHHACMHFKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHACMHFKA___C_CTOR_OFFSET))(this);
		}

		::OJHHACMHFKA* __cctor_b__83_0()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHACMHFKA___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
