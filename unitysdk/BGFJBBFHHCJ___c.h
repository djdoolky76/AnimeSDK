#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFJBBFHHCJ;
namespace System { class Object; }

#define BGFJBBFHHCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA75BC0)
#define BGFJBBFHHCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA75BF0)
#define BGFJBBFHHCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA75C00)

	class BGFJBBFHHCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFJBBFHHCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ___C_CTOR_OFFSET))(this);
		}

		::BGFJBBFHHCJ* __cctor_b__28_0()
		{
			return ((::BGFJBBFHHCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFJBBFHHCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
