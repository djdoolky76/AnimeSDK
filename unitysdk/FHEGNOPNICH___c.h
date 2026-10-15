#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGNOPNICH;
namespace System { class Object; }

#define FHEGNOPNICH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38B0E0)
#define FHEGNOPNICH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38B110)
#define FHEGNOPNICH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E38B120)

	class FHEGNOPNICH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHEGNOPNICH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGNOPNICH___C_CTOR_OFFSET))(this);
		}

		::FHEGNOPNICH* __cctor_b__53_0()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGNOPNICH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
