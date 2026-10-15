#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKCDMJONKMB.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
class LFFAJPMHLMD;

#define IOKDDCHEGLP_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x164F9630)
#define IOKDDCHEGLP_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x164F96F0)
#define IOKDDCHEGLP_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x164F97A0)
#define IOKDDCHEGLP_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x164F96A0)
#define IOKDDCHEGLP_CTOR_OFFSET UNITYSDK_OFFSET(0x164F94A0)
#define IOKDDCHEGLP_DBIMDIBHNLK_OFFSET UNITYSDK_OFFSET(0x164F9750)
#define IOKDDCHEGLP_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x164F94C0)
#define IOKDDCHEGLP_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x164F9870)
#define IOKDDCHEGLP_HJIJNEFPEEN_OFFSET UNITYSDK_OFFSET(0x164F9590)

inline static constexpr unsigned int IOKDDCHEGLP_TypeDefinitionIndex = 49759;

	class IOKDDCHEGLP
	{
	public:
		::LFFAJPMHLMD* GCGMBDLNABB; // 0x48
		::System::Void _ctor(::AKCDMJONKMB a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKCDMJONKMB))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_DCPLHPFGNHB_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask HJIJNEFPEEN()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_HJIJNEFPEEN_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void DBIMDIBHNLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_DBIMDIBHNLK_OFFSET))(this);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKDDCHEGLP_FJMKAOHGMHH_OFFSET))(this);
		}

	};
