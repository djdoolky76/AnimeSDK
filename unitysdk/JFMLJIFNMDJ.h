#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJBOAMAPGNK.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define JFMLJIFNMDJ_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x1EC77ED0)
#define JFMLJIFNMDJ_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x1EC77D70)
#define JFMLJIFNMDJ_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x1EC78070)
#define JFMLJIFNMDJ_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x1EC77D30)
#define JFMLJIFNMDJ_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0x1EC77C90)
#define JFMLJIFNMDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC77B90)
#define JFMLJIFNMDJ_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x1EC77BB0)
#define JFMLJIFNMDJ_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x1EC781F0)

	class JFMLJIFNMDJ
	{
	public:
		::System::Void _ctor(::CJBOAMAPGNK a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJBOAMAPGNK))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_DCPLHPFGNHB_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask CONFIAMBBBC()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_CONFIAMBBBC_OFFSET))(this);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLJIFNMDJ_FJMKAOHGMHH_OFFSET))(this);
		}

	};
