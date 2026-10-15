#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKECLANKKII;
namespace System { class Object; }

#define IKECLANKKII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0340)
#define IKECLANKKII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0380)
#define IKECLANKKII___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6A0390)

	class IKECLANKKII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKECLANKKII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII___C_CTOR_OFFSET))(this);
		}

		::IKECLANKKII* __cctor_b__33_0()
		{
			return ((::IKECLANKKII*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
