#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPEHILMMINA;
namespace System { class Object; }

#define LPEHILMMINA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CA9B0)
#define LPEHILMMINA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CA9F0)
#define LPEHILMMINA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9CAA00)

	class LPEHILMMINA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x411E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPEHILMMINA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEHILMMINA___C_CTOR_OFFSET))(this);
		}

		::LPEHILMMINA* __cctor_b__38_0()
		{
			return ((::LPEHILMMINA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPEHILMMINA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
