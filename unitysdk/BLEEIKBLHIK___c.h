#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLEEIKBLHIK;
namespace System { class Object; }

#define BLEEIKBLHIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5E660)
#define BLEEIKBLHIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5E6A0)
#define BLEEIKBLHIK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF5E6B0)

	class BLEEIKBLHIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEEIKBLHIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK___C_CTOR_OFFSET))(this);
		}

		::BLEEIKBLHIK* __cctor_b__23_0()
		{
			return ((::BLEEIKBLHIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
