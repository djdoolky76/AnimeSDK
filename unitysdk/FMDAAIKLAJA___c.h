#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMDAAIKLAJA;
namespace System { class Object; }

#define FMDAAIKLAJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0240)
#define FMDAAIKLAJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0270)
#define FMDAAIKLAJA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3E0280)

	class FMDAAIKLAJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x649E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMDAAIKLAJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA___C_CTOR_OFFSET))(this);
		}

		::FMDAAIKLAJA* __cctor_b__33_0()
		{
			return ((::FMDAAIKLAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
