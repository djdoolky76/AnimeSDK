#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMMOFOBCINL;
namespace System { class Object; }

#define PMMOFOBCINL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF330)
#define PMMOFOBCINL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF360)
#define PMMOFOBCINL___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DFAF370)

	class PMMOFOBCINL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMMOFOBCINL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOFOBCINL___C_CTOR_OFFSET))(this);
		}

		::PMMOFOBCINL* __cctor_b__53_0()
		{
			return ((::PMMOFOBCINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMOFOBCINL___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
