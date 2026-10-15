#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNNCBDHHBC;
namespace System { class Object; }

#define ECNNCBDHHBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E257590)
#define ECNNCBDHHBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2575D0)
#define ECNNCBDHHBC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2575E0)

	class ECNNCBDHHBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNNCBDHHBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC___C_CTOR_OFFSET))(this);
		}

		::ECNNCBDHHBC* __cctor_b__28_0()
		{
			return ((::ECNNCBDHHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
