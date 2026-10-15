#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDHABGDIAPJ;
namespace System { class Object; }

#define KDHABGDIAPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E800270)
#define KDHABGDIAPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8002B0)
#define KDHABGDIAPJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8002C0)

	class KDHABGDIAPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDHABGDIAPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ___C_CTOR_OFFSET))(this);
		}

		::KDHABGDIAPJ* __cctor_b__23_0()
		{
			return ((::KDHABGDIAPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHABGDIAPJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
