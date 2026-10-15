#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COFMKALOLKB;
namespace System { class Object; }

#define COFMKALOLKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E132CF0)
#define COFMKALOLKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E132D30)
#define COFMKALOLKB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E132D40)

	class COFMKALOLKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFMKALOLKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMKALOLKB___C_CTOR_OFFSET))(this);
		}

		::COFMKALOLKB* __cctor_b__38_0()
		{
			return ((::COFMKALOLKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMKALOLKB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
