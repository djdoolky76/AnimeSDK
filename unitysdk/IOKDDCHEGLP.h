#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKCDMJONKMB.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
class LFFAJPMHLMD;

#define IOKDDCHEGLP_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0xB83BFC0)
#define IOKDDCHEGLP_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0xB83C080)
#define IOKDDCHEGLP_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0xB83C130)
#define IOKDDCHEGLP_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0xB83C030)
#define IOKDDCHEGLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB83BE30)
#define IOKDDCHEGLP_DBIMDIBHNLK_OFFSET UNITYSDK_OFFSET(0xB83C0E0)
#define IOKDDCHEGLP_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0xB83BE50)
#define IOKDDCHEGLP_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0xB83C200)
#define IOKDDCHEGLP_HJIJNEFPEEN_OFFSET UNITYSDK_OFFSET(0xB83BF20)

inline static constexpr unsigned int IOKDDCHEGLP_TypeDefinitionIndex = 50807;

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
