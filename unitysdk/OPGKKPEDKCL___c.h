#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPGKKPEDKCL;
namespace System { class Object; }

#define OPGKKPEDKCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE14C0)
#define OPGKKPEDKCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1500)
#define OPGKKPEDKCL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DEE1510)

	class OPGKKPEDKCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPGKKPEDKCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL___C_CTOR_OFFSET))(this);
		}

		::OPGKKPEDKCL* __cctor_b__48_0()
		{
			return ((::OPGKKPEDKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGKKPEDKCL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
