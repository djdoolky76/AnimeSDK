#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNDCKLDMJKB;
namespace System { class Object; }

#define KNDCKLDMJKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0640)
#define KNDCKLDMJKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A0670)
#define KNDCKLDMJKB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8A0680)

	class KNDCKLDMJKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x237A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNDCKLDMJKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB___C_CTOR_OFFSET))(this);
		}

		::KNDCKLDMJKB* __cctor_b__18_0()
		{
			return ((::KNDCKLDMJKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDCKLDMJKB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
