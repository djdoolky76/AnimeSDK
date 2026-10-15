#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKLPMDCIEIG;
namespace System { class Object; }

#define OKLPMDCIEIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0150)
#define OKLPMDCIEIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0190)
#define OKLPMDCIEIG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEA01A0)

	class OKLPMDCIEIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLPMDCIEIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG___C_CTOR_OFFSET))(this);
		}

		::OKLPMDCIEIG* __cctor_b__38_0()
		{
			return ((::OKLPMDCIEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
