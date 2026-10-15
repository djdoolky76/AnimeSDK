#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOHAGOFLGAP;
namespace System { class Object; }

#define MOHAGOFLGAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA9D80)
#define MOHAGOFLGAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA9DC0)
#define MOHAGOFLGAP___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1EAA9DD0)

	class MOHAGOFLGAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOHAGOFLGAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHAGOFLGAP___C_CTOR_OFFSET))(this);
		}

		::MOHAGOFLGAP* __cctor_b__68_0()
		{
			return ((::MOHAGOFLGAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHAGOFLGAP___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
