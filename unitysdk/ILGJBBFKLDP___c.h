#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILGJBBFKLDP;
namespace System { class Object; }

#define ILGJBBFKLDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6ADC80)
#define ILGJBBFKLDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ADCC0)
#define ILGJBBFKLDP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6ADCD0)

	class ILGJBBFKLDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x564C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILGJBBFKLDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP___C_CTOR_OFFSET))(this);
		}

		::ILGJBBFKLDP* __cctor_b__28_0()
		{
			return ((::ILGJBBFKLDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGJBBFKLDP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
