#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPOBLGDJCKC;
namespace System { class Object; }

#define GPOBLGDJCKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FBCF0)
#define GPOBLGDJCKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FBD20)
#define GPOBLGDJCKC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E4FBD30)

	class GPOBLGDJCKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOBLGDJCKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC___C_CTOR_OFFSET))(this);
		}

		::GPOBLGDJCKC* __cctor_b__48_0()
		{
			return ((::GPOBLGDJCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
