#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFLHJCKLPMO;
namespace System { class Object; }

#define NFLHJCKLPMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB05E70)
#define NFLHJCKLPMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB05EA0)
#define NFLHJCKLPMO___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EB05EB0)

	class NFLHJCKLPMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFLHJCKLPMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLHJCKLPMO___C_CTOR_OFFSET))(this);
		}

		::NFLHJCKLPMO* __cctor_b__58_0()
		{
			return ((::NFLHJCKLPMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLHJCKLPMO___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
