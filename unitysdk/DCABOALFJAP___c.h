#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCABOALFJAP;
namespace System { class Object; }

#define DCABOALFJAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1656C0)
#define DCABOALFJAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E165700)
#define DCABOALFJAP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E165710)

	class DCABOALFJAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x263E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCABOALFJAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP___C_CTOR_OFFSET))(this);
		}

		::DCABOALFJAP* __cctor_b__23_0()
		{
			return ((::DCABOALFJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCABOALFJAP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
