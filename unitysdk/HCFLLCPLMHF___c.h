#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCFLLCPLMHF;
namespace System { class Object; }

#define HCFLLCPLMHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53B370)
#define HCFLLCPLMHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53B3B0)
#define HCFLLCPLMHF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E53B3C0)

	class HCFLLCPLMHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCFLLCPLMHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF___C_CTOR_OFFSET))(this);
		}

		::HCFLLCPLMHF* __cctor_b__23_0()
		{
			return ((::HCFLLCPLMHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLLCPLMHF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
