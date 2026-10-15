#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEOJGIDJLOA;
namespace System { class Object; }

#define CEOJGIDJLOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09D830)
#define CEOJGIDJLOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09D870)
#define CEOJGIDJLOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E09D880)

	class CEOJGIDJLOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEOJGIDJLOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA___C_CTOR_OFFSET))(this);
		}

		::CEOJGIDJLOA* __cctor_b__23_0()
		{
			return ((::CEOJGIDJLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJGIDJLOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
