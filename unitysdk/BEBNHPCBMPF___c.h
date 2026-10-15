#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEBNHPCBMPF;
namespace System { class Object; }

#define BEBNHPCBMPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E922560)
#define BEBNHPCBMPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E922590)
#define BEBNHPCBMPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9225A0)

	class BEBNHPCBMPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEBNHPCBMPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBNHPCBMPF___C_CTOR_OFFSET))(this);
		}

		::BEBNHPCBMPF* __cctor_b__28_0()
		{
			return ((::BEBNHPCBMPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBNHPCBMPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
