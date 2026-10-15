#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHLPEJFEGAN;
namespace System { class Object; }

#define DHLPEJFEGAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8060)
#define DHLPEJFEGAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B80A0)
#define DHLPEJFEGAN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1B80B0)

	class DHLPEJFEGAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x354F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHLPEJFEGAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN___C_CTOR_OFFSET))(this);
		}

		::DHLPEJFEGAN* __cctor_b__28_0()
		{
			return ((::DHLPEJFEGAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLPEJFEGAN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
