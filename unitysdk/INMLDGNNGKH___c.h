#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMLDGNNGKH;
namespace System { class Object; }

#define INMLDGNNGKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C6960)
#define INMLDGNNGKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C69A0)
#define INMLDGNNGKH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6C69B0)

	class INMLDGNNGKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INMLDGNNGKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH___C_CTOR_OFFSET))(this);
		}

		::INMLDGNNGKH* __cctor_b__28_0()
		{
			return ((::INMLDGNNGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLDGNNGKH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
