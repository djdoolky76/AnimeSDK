#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJJDLEIGPMJ;
namespace System { class Object; }

#define KJJDLEIGPMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86EF70)
#define KJJDLEIGPMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86EFB0)
#define KJJDLEIGPMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E86EFC0)

	class KJJDLEIGPMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJJDLEIGPMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ___C_CTOR_OFFSET))(this);
		}

		::KJJDLEIGPMJ* __cctor_b__23_0()
		{
			return ((::KJJDLEIGPMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
