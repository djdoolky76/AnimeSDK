#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEGMIKNHDPO;
namespace System { class Object; }

#define MEGMIKNHDPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C080)
#define MEGMIKNHDPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0C0C0)
#define MEGMIKNHDPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA0C0D0)

	class MEGMIKNHDPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEGMIKNHDPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO___C_CTOR_OFFSET))(this);
		}

		::MEGMIKNHDPO* __cctor_b__23_0()
		{
			return ((::MEGMIKNHDPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGMIKNHDPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
