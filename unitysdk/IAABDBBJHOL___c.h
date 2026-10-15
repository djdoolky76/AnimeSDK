#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAABDBBJHOL;
namespace System { class Object; }

#define IAABDBBJHOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6021C0)
#define IAABDBBJHOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E602200)
#define IAABDBBJHOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E602210)

	class IAABDBBJHOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAABDBBJHOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAABDBBJHOL___C_CTOR_OFFSET))(this);
		}

		::IAABDBBJHOL* __cctor_b__33_0()
		{
			return ((::IAABDBBJHOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAABDBBJHOL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
