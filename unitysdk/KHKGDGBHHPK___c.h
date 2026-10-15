#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKGDGBHHPK;
namespace System { class Object; }

#define KHKGDGBHHPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E846930)
#define KHKGDGBHHPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E846970)
#define KHKGDGBHHPK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E846980)

	class KHKGDGBHHPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKGDGBHHPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK___C_CTOR_OFFSET))(this);
		}

		::KHKGDGBHHPK* __cctor_b__28_0()
		{
			return ((::KHKGDGBHHPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKGDGBHHPK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
