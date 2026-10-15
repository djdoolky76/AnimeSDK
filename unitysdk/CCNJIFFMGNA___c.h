#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNJIFFMGNA;
namespace System { class Object; }

#define CCNJIFFMGNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07D090)
#define CCNJIFFMGNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07D0C0)
#define CCNJIFFMGNA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E07D0D0)

	class CCNJIFFMGNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCNJIFFMGNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA___C_CTOR_OFFSET))(this);
		}

		::CCNJIFFMGNA* __cctor_b__43_0()
		{
			return ((::CCNJIFFMGNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
