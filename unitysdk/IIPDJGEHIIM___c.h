#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIPDJGEHIIM;
namespace System { class Object; }

#define IIPDJGEHIIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68F160)
#define IIPDJGEHIIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68F1A0)
#define IIPDJGEHIIM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E68F1B0)

	class IIPDJGEHIIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIPDJGEHIIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM___C_CTOR_OFFSET))(this);
		}

		::IIPDJGEHIIM* __cctor_b__43_0()
		{
			return ((::IIPDJGEHIIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDJGEHIIM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
