#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMJDKIDHMFH;
namespace System { class Object; }

#define LMJDKIDHMFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A74B0)
#define LMJDKIDHMFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A74F0)
#define LMJDKIDHMFH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9A7500)

	class LMJDKIDHMFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMJDKIDHMFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJDKIDHMFH___C_CTOR_OFFSET))(this);
		}

		::LMJDKIDHMFH* __cctor_b__23_0()
		{
			return ((::LMJDKIDHMFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJDKIDHMFH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
