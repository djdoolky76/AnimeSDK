#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMCLHJINBD;
namespace System { class Object; }

#define DCMCLHJINBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E174EA0)
#define DCMCLHJINBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E174ED0)
#define DCMCLHJINBD___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E174EE0)

	class DCMCLHJINBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCMCLHJINBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD___C_CTOR_OFFSET))(this);
		}

		::DCMCLHJINBD* __cctor_b__53_0()
		{
			return ((::DCMCLHJINBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMCLHJINBD___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
