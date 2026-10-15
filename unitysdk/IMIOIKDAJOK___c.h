#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMIOIKDAJOK;
namespace System { class Object; }

#define IMIOIKDAJOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B8AA0)
#define IMIOIKDAJOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B8AE0)
#define IMIOIKDAJOK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6B8AF0)

	class IMIOIKDAJOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMIOIKDAJOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK___C_CTOR_OFFSET))(this);
		}

		::IMIOIKDAJOK* __cctor_b__23_0()
		{
			return ((::IMIOIKDAJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIOIKDAJOK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
