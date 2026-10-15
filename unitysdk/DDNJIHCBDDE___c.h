#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNJIHCBDDE;
namespace System { class Object; }

#define DDNJIHCBDDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18ACA0)
#define DDNJIHCBDDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18ACE0)
#define DDNJIHCBDDE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E18ACF0)

	class DDNJIHCBDDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNJIHCBDDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNJIHCBDDE___C_CTOR_OFFSET))(this);
		}

		::DDNJIHCBDDE* __cctor_b__18_0()
		{
			return ((::DDNJIHCBDDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNJIHCBDDE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
