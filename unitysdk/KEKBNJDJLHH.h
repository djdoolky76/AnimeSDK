#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LHEIMENHMKI.h"

#define KEKBNJDJLHH_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x1B5DF7C0)
#define KEKBNJDJLHH_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x1B5DF780)
#define KEKBNJDJLHH_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x1B5DF8B0)
#define KEKBNJDJLHH_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x1B5DF730)
#define KEKBNJDJLHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5DF3C0)
#define KEKBNJDJLHH_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x1B5DF3F0)
#define KEKBNJDJLHH_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x1B5DF8F0)
#define KEKBNJDJLHH_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x1B5DF520)

inline static constexpr unsigned int KEKBNJDJLHH_TypeDefinitionIndex = 50810;

	class KEKBNJDJLHH
	{
	public:
		::System::Single PBLGHIGPEIP; // 0x50
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x54
		::UnityEngine::Quaternion HBAIICJGPGC; // 0x60
		::System::Void _ctor(::LHEIMENHMKI a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHEIMENHMKI))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_FJMKAOHGMHH_OFFSET))(this);
		}

		::System::Void NAJOPNMPHPF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEKBNJDJLHH_NAJOPNMPHPF_OFFSET))(this, a1);
		}

	};
