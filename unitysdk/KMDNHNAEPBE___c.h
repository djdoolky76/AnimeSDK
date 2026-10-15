#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMDNHNAEPBE;
namespace System { class Object; }

#define KMDNHNAEPBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E895E30)
#define KMDNHNAEPBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E895E70)
#define KMDNHNAEPBE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E895E80)

	class KMDNHNAEPBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMDNHNAEPBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE___C_CTOR_OFFSET))(this);
		}

		::KMDNHNAEPBE* __cctor_b__33_0()
		{
			return ((::KMDNHNAEPBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDNHNAEPBE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
