#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APNCCNFJBKO;
namespace System { class Object; }

#define APNCCNFJBKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E679F80)
#define APNCCNFJBKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E679FB0)
#define APNCCNFJBKO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E679FC0)

	class APNCCNFJBKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APNCCNFJBKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCCNFJBKO___C_CTOR_OFFSET))(this);
		}

		::APNCCNFJBKO* __cctor_b__23_0()
		{
			return ((::APNCCNFJBKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNCCNFJBKO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
