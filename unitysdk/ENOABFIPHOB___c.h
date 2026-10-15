#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENOABFIPHOB;
namespace System { class Object; }

#define ENOABFIPHOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F30D0)
#define ENOABFIPHOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F3110)
#define ENOABFIPHOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2F3120)

	class ENOABFIPHOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOABFIPHOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB___C_CTOR_OFFSET))(this);
		}

		::ENOABFIPHOB* __cctor_b__23_0()
		{
			return ((::ENOABFIPHOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
