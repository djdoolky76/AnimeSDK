#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACABBGBMIPN;
namespace System { class Object; }

#define ACABBGBMIPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6420)
#define ACABBGBMIPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6460)
#define ACABBGBMIPN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DDD6470)

	class ACABBGBMIPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACABBGBMIPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABBGBMIPN___C_CTOR_OFFSET))(this);
		}

		::ACABBGBMIPN* __cctor_b__48_0()
		{
			return ((::ACABBGBMIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABBGBMIPN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
