#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHGBMIEBOE;
namespace System { class Object; }

#define FHHGBMIEBOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38D170)
#define FHHGBMIEBOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38D1B0)
#define FHHGBMIEBOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E38D1C0)

	class FHHGBMIEBOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHGBMIEBOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE___C_CTOR_OFFSET))(this);
		}

		::FHHGBMIEBOE* __cctor_b__28_0()
		{
			return ((::FHHGBMIEBOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHGBMIEBOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
