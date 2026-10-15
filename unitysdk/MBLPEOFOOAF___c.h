#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBLPEOFOOAF;
namespace System { class Object; }

#define MBLPEOFOOAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9B10)
#define MBLPEOFOOAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E9B50)
#define MBLPEOFOOAF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9E9B60)

	class MBLPEOFOOAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLPEOFOOAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF___C_CTOR_OFFSET))(this);
		}

		::MBLPEOFOOAF* __cctor_b__33_0()
		{
			return ((::MBLPEOFOOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
