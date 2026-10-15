#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPHDKEPMCJ;
namespace System { class Object; }

#define CKPHDKEPMCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EFFB0)
#define CKPHDKEPMCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EFFF0)
#define CKPHDKEPMCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0F0000)

	class CKPHDKEPMCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPHDKEPMCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ___C_CTOR_OFFSET))(this);
		}

		::CKPHDKEPMCJ* __cctor_b__23_0()
		{
			return ((::CKPHDKEPMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPHDKEPMCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
