#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COFMKALOLKB;
namespace System { class Object; }

#define COFMKALOLKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E105750)
#define COFMKALOLKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E105790)
#define COFMKALOLKB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1057A0)

inline static constexpr unsigned int COFMKALOLKB___c_TypeDefinitionIndex = 30081;

	class COFMKALOLKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E0A0);
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
