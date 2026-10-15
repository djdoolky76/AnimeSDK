#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBJMPFPPLFM.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define DCBGEFJPNEB_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x1EC3A670)
#define DCBGEFJPNEB_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x1EC3A510)
#define DCBGEFJPNEB_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x1EC3A8D0)
#define DCBGEFJPNEB_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x1EC3A360)
#define DCBGEFJPNEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3A0A0)
#define DCBGEFJPNEB_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x1EC3A0C0)
#define DCBGEFJPNEB_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x1EC3AA30)
#define DCBGEFJPNEB_NAHPBCMFFKE_OFFSET UNITYSDK_OFFSET(0x1EC3A1A0)

inline static constexpr unsigned int DCBGEFJPNEB_TypeDefinitionIndex = 44197;

	class DCBGEFJPNEB
	{
	public:
		::System::Void _ctor(::BBJMPFPPLFM a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBJMPFPPLFM))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_BOEEIOMJGKG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask NAHPBCMFFKE()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_NAHPBCMFFKE_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBGEFJPNEB_FJMKAOHGMHH_OFFSET))(this);
		}

	};
