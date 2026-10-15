#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDLFFHOHAIH;
namespace System { class Object; }

#define CDLFFHOHAIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E088480)
#define CDLFFHOHAIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0884C0)
#define CDLFFHOHAIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0884D0)

	class CDLFFHOHAIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLFFHOHAIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLFFHOHAIH___C_CTOR_OFFSET))(this);
		}

		::CDLFFHOHAIH* __cctor_b__23_0()
		{
			return ((::CDLFFHOHAIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLFFHOHAIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
