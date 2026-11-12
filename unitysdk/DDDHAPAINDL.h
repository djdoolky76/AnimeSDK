#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHAINDEBAOL.h"

#define DDDHAPAINDL_ADNKBFCJMJC_OFFSET UNITYSDK_OFFSET(0x1FF195E0)
#define DDDHAPAINDL_BBFNALCHKKK_OFFSET UNITYSDK_OFFSET(0x1FF195A0)
#define DDDHAPAINDL_BLFHDCNOFGG_OFFSET UNITYSDK_OFFSET(0x1FF19670)
#define DDDHAPAINDL_BOEEIOMJGKG_OFFSET UNITYSDK_OFFSET(0x1FF19560)
#define DDDHAPAINDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF194F0)
#define DDDHAPAINDL_DCPLHPFGNHB_OFFSET UNITYSDK_OFFSET(0x1FF19510)
#define DDDHAPAINDL_FJMKAOHGMHH_OFFSET UNITYSDK_OFFSET(0x1FF196B0)

inline static constexpr unsigned int DDDHAPAINDL_TypeDefinitionIndex = 45268;

	class DDDHAPAINDL
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x40
		::System::Void _ctor(::HHAINDEBAOL a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAINDEBAOL))((::PBYTE)hIl2Cpp + DDDHAPAINDL_CTOR_OFFSET))(this, a1);
		}

		::System::Void DCPLHPFGNHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAPAINDL_DCPLHPFGNHB_OFFSET))(this);
		}

		::System::Void BOEEIOMJGKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAPAINDL_BOEEIOMJGKG_OFFSET))(this);
		}

		::System::Void BBFNALCHKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAPAINDL_BBFNALCHKKK_OFFSET))(this);
		}

		::System::Void ADNKBFCJMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDDHAPAINDL_ADNKBFCJMJC_OFFSET))(this, a1);
		}

		::System::Void BLFHDCNOFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAPAINDL_BLFHDCNOFGG_OFFSET))(this);
		}

		::System::Void FJMKAOHGMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDHAPAINDL_FJMKAOHGMHH_OFFSET))(this);
		}

	};
