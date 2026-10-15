#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBHDCJHGKCN;
namespace System { class Object; }

#define NBHDCJHGKCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD2080)
#define NBHDCJHGKCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD20C0)
#define NBHDCJHGKCN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAD20D0)

	class NBHDCJHGKCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBHDCJHGKCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN___C_CTOR_OFFSET))(this);
		}

		::NBHDCJHGKCN* __cctor_b__33_0()
		{
			return ((::NBHDCJHGKCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
