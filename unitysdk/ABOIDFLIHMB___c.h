#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOIDFLIHMB;
namespace System { class Object; }

#define ABOIDFLIHMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2B70)
#define ABOIDFLIHMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2BB0)
#define ABOIDFLIHMB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DDD2BC0)

	class ABOIDFLIHMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOIDFLIHMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB___C_CTOR_OFFSET))(this);
		}

		::ABOIDFLIHMB* __cctor_b__48_0()
		{
			return ((::ABOIDFLIHMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOIDFLIHMB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
