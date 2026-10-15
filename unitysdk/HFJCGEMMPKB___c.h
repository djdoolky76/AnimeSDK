#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJCGEMMPKB;
namespace System { class Object; }

#define HFJCGEMMPKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56CF10)
#define HFJCGEMMPKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56CF50)
#define HFJCGEMMPKB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E56CF60)

	class HFJCGEMMPKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJCGEMMPKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB___C_CTOR_OFFSET))(this);
		}

		::HFJCGEMMPKB* __cctor_b__23_0()
		{
			return ((::HFJCGEMMPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
