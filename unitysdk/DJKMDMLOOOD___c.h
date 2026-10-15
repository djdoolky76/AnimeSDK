#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJKMDMLOOOD;
namespace System { class Object; }

#define DJKMDMLOOOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D0D70)
#define DJKMDMLOOOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D0DB0)
#define DJKMDMLOOOD___C___CCTOR_B__66_0_OFFSET UNITYSDK_OFFSET(0x1E1D0DC0)

	class DJKMDMLOOOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJKMDMLOOOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKMDMLOOOD___C_CTOR_OFFSET))(this);
		}

		::DJKMDMLOOOD* __cctor_b__66_0()
		{
			return ((::DJKMDMLOOOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKMDMLOOOD___C___CCTOR_B__66_0_OFFSET))(this);
		}

	};
