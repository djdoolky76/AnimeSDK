#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMOIBEFBKCL;
namespace System { class Object; }

#define IMOIBEFBKCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BA900)
#define IMOIBEFBKCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BA940)
#define IMOIBEFBKCL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6BA950)

	class IMOIBEFBKCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMOIBEFBKCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL___C_CTOR_OFFSET))(this);
		}

		::IMOIBEFBKCL* __cctor_b__38_0()
		{
			return ((::IMOIBEFBKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
