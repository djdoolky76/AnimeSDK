#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBGADFGONHI;
namespace System { class Object; }

#define BBGADFGONHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C2F80)
#define BBGADFGONHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C2FC0)
#define BBGADFGONHI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7C2FD0)

	class BBGADFGONHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBGADFGONHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI___C_CTOR_OFFSET))(this);
		}

		::BBGADFGONHI* __cctor_b__38_0()
		{
			return ((::BBGADFGONHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGADFGONHI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
