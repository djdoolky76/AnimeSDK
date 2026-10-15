#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGMOFBDAON;
namespace System { class Object; }

#define HFGMOFBDAON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E569D60)
#define HFGMOFBDAON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E569D90)
#define HFGMOFBDAON___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E569DA0)

	class HFGMOFBDAON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGMOFBDAON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON___C_CTOR_OFFSET))(this);
		}

		::HFGMOFBDAON* __cctor_b__28_0()
		{
			return ((::HFGMOFBDAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
