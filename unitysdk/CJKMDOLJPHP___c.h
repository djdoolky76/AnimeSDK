#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJKMDOLJPHP;
namespace System { class Object; }

#define CJKMDOLJPHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2C70)
#define CJKMDOLJPHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2CA0)
#define CJKMDOLJPHP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0E2CB0)

	class CJKMDOLJPHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJKMDOLJPHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP___C_CTOR_OFFSET))(this);
		}

		::CJKMDOLJPHP* __cctor_b__38_0()
		{
			return ((::CJKMDOLJPHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
