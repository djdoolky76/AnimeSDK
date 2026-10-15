#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHBHIHJAOPB;
namespace System { class Object; }

#define FHBHIHJAOPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E387BB0)
#define FHBHIHJAOPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E387BF0)
#define FHBHIHJAOPB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E387C00)

	class FHBHIHJAOPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHBHIHJAOPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB___C_CTOR_OFFSET))(this);
		}

		::FHBHIHJAOPB* __cctor_b__33_0()
		{
			return ((::FHBHIHJAOPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBHIHJAOPB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
