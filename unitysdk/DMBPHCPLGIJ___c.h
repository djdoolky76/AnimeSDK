#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMBPHCPLGIJ;
namespace System { class Object; }

#define DMBPHCPLGIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EA1C0)
#define DMBPHCPLGIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EA200)
#define DMBPHCPLGIJ___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E1EA210)

	class DMBPHCPLGIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBPHCPLGIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ___C_CTOR_OFFSET))(this);
		}

		::DMBPHCPLGIJ* __cctor_b__37_0()
		{
			return ((::DMBPHCPLGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
