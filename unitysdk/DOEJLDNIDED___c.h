#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEJLDNIDED;
namespace System { class Object; }

#define DOEJLDNIDED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE680)
#define DOEJLDNIDED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE6C0)
#define DOEJLDNIDED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1FE6D0)

	class DOEJLDNIDED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEJLDNIDED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED___C_CTOR_OFFSET))(this);
		}

		::DOEJLDNIDED* __cctor_b__23_0()
		{
			return ((::DOEJLDNIDED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEJLDNIDED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
