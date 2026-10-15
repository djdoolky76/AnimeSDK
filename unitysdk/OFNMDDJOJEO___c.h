#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFNMDDJOJEO;
namespace System { class Object; }

#define OFNMDDJOJEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C590)
#define OFNMDDJOJEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C5C0)
#define OFNMDDJOJEO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE4C5D0)

	class OFNMDDJOJEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFNMDDJOJEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO___C_CTOR_OFFSET))(this);
		}

		::OFNMDDJOJEO* __cctor_b__18_0()
		{
			return ((::OFNMDDJOJEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNMDDJOJEO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
