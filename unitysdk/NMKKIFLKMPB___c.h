#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMKKIFLKMPB;
namespace System { class Object; }

#define NMKKIFLKMPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB78380)
#define NMKKIFLKMPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB783C0)
#define NMKKIFLKMPB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB783D0)

	class NMKKIFLKMPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKKIFLKMPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB___C_CTOR_OFFSET))(this);
		}

		::NMKKIFLKMPB* __cctor_b__38_0()
		{
			return ((::NMKKIFLKMPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
