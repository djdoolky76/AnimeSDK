#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNLKMHLAPHC;
namespace System { class Object; }

#define DNLKMHLAPHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F9150)
#define DNLKMHLAPHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F9180)
#define DNLKMHLAPHC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1F9190)

	class DNLKMHLAPHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNLKMHLAPHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC___C_CTOR_OFFSET))(this);
		}

		::DNLKMHLAPHC* __cctor_b__38_0()
		{
			return ((::DNLKMHLAPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLKMHLAPHC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
