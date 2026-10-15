#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKJMFLALFEH;
namespace System { class Object; }

#define LKJMFLALFEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9920A0)
#define LKJMFLALFEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9920D0)
#define LKJMFLALFEH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E9920E0)

	class LKJMFLALFEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ABE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKJMFLALFEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH___C_CTOR_OFFSET))(this);
		}

		::LKJMFLALFEH* __cctor_b__43_0()
		{
			return ((::LKJMFLALFEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJMFLALFEH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
