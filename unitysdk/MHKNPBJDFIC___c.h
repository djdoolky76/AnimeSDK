#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHKNPBJDFIC;
namespace System { class Object; }

#define MHKNPBJDFIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA34600)
#define MHKNPBJDFIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA34640)
#define MHKNPBJDFIC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA34650)

	class MHKNPBJDFIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHKNPBJDFIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC___C_CTOR_OFFSET))(this);
		}

		::MHKNPBJDFIC* __cctor_b__23_0()
		{
			return ((::MHKNPBJDFIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKNPBJDFIC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
