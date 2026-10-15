#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOFLIJPLDEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2E6F0)
#define GOFLIJPLDEP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B2E650)
#define GOFLIJPLDEP_LOHADNFAFOJ_OFFSET UNITYSDK_OFFSET(0x15B2E6D0)
#define GOFLIJPLDEP_OEDLCCKBABE_OFFSET UNITYSDK_OFFSET(0x15B2E6E0)

	class GOFLIJPLDEP : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_JHNDMPFIKCE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOFLIJPLDEP")->GetStaticField(0x15100);
		}

		static ::System::Boolean* StaticGet_LGECFPPLDMH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOFLIJPLDEP")->GetStaticField(0x15101);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFLIJPLDEP_CTOR_OFFSET))(this);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOFLIJPLDEP_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Boolean LOHADNFAFOJ()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOFLIJPLDEP_LOHADNFAFOJ_OFFSET))();
		}

		static ::System::Boolean OEDLCCKBABE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOFLIJPLDEP_OEDLCCKBABE_OFFSET))();
		}

	};
