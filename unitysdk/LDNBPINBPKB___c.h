#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDNBPINBPKB;
namespace System { class Object; }

#define LDNBPINBPKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FE620)
#define LDNBPINBPKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FE660)
#define LDNBPINBPKB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8FE670)

	class LDNBPINBPKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNBPINBPKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB___C_CTOR_OFFSET))(this);
		}

		::LDNBPINBPKB* __cctor_b__28_0()
		{
			return ((::LDNBPINBPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBPINBPKB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
