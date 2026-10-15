#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELGFKGOHGIO;
namespace System { class Object; }

#define ELGFKGOHGIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D0690)
#define ELGFKGOHGIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D06C0)
#define ELGFKGOHGIO___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E2D06D0)

	class ELGFKGOHGIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x504C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGFKGOHGIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGFKGOHGIO___C_CTOR_OFFSET))(this);
		}

		::ELGFKGOHGIO* __cctor_b__58_0()
		{
			return ((::ELGFKGOHGIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGFKGOHGIO___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
