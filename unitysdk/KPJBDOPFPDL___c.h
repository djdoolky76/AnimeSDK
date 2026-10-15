#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJBDOPFPDL;
namespace System { class Object; }

#define KPJBDOPFPDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BCBC0)
#define KPJBDOPFPDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BCC00)
#define KPJBDOPFPDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8BCC10)

	class KPJBDOPFPDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJBDOPFPDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL___C_CTOR_OFFSET))(this);
		}

		::KPJBDOPFPDL* __cctor_b__23_0()
		{
			return ((::KPJBDOPFPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJBDOPFPDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
