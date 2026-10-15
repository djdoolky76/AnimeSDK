#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIHMFACHENB;
namespace System { class Object; }

#define NIHMFACHENB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB307B0)
#define NIHMFACHENB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB307F0)
#define NIHMFACHENB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB30800)

	class NIHMFACHENB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIHMFACHENB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB___C_CTOR_OFFSET))(this);
		}

		::NIHMFACHENB* __cctor_b__23_0()
		{
			return ((::NIHMFACHENB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHMFACHENB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
