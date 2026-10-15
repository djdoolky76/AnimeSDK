#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDGMIHGIFG;
namespace System { class Object; }

#define MPDGMIHGIFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB6210)
#define MPDGMIHGIFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB6250)
#define MPDGMIHGIFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAB6260)

	class MPDGMIHGIFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDGMIHGIFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG___C_CTOR_OFFSET))(this);
		}

		::MPDGMIHGIFG* __cctor_b__28_0()
		{
			return ((::MPDGMIHGIFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
