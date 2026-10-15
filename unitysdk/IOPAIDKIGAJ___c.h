#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOPAIDKIGAJ;
namespace System { class Object; }

#define IOPAIDKIGAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DBE90)
#define IOPAIDKIGAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DBED0)
#define IOPAIDKIGAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6DBEE0)

	class IOPAIDKIGAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOPAIDKIGAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ___C_CTOR_OFFSET))(this);
		}

		::IOPAIDKIGAJ* __cctor_b__23_0()
		{
			return ((::IOPAIDKIGAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
