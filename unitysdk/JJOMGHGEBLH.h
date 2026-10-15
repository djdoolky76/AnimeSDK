#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFCIKOMDEIM.h"
#include "unitysdk/BCMNLOPKLDO.h"

#define JJOMGHGEBLH_APHKGPOCPBG_OFFSET UNITYSDK_OFFSET(0xB209F80)
#define JJOMGHGEBLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB209E90)
#define JJOMGHGEBLH_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0xB209F00)
#define JJOMGHGEBLH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB209EB0)

	class JJOMGHGEBLH : public ::HFCIKOMDEIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOMGHGEBLH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOMGHGEBLH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void GAJOGNKBPJC(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + JJOMGHGEBLH_GAJOGNKBPJC_OFFSET))(this, a1);
		}

		::System::Void APHKGPOCPBG(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + JJOMGHGEBLH_APHKGPOCPBG_OFFSET))(this, a1);
		}

	};
