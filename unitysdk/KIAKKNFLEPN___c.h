#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIAKKNFLEPN;
namespace System { class Object; }

#define KIAKKNFLEPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E853080)
#define KIAKKNFLEPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8530C0)
#define KIAKKNFLEPN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8530D0)

	class KIAKKNFLEPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAKKNFLEPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN___C_CTOR_OFFSET))(this);
		}

		::KIAKKNFLEPN* __cctor_b__33_0()
		{
			return ((::KIAKKNFLEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAKKNFLEPN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
