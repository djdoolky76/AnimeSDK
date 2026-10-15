#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPIKNJLJCNC;
namespace System { class Object; }

#define IPIKNJLJCNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5C80)
#define IPIKNJLJCNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E5CC0)
#define IPIKNJLJCNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6E5CD0)

	class IPIKNJLJCNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPIKNJLJCNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC___C_CTOR_OFFSET))(this);
		}

		::IPIKNJLJCNC* __cctor_b__23_0()
		{
			return ((::IPIKNJLJCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKNJLJCNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
