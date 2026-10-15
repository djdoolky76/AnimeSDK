#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;

#define BLKJEJHNKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A9A40)
#define BLKJEJHNKAJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C5C0180)
#define BLKJEJHNKAJ_HJPKGKMMPCO_OFFSET UNITYSDK_OFFSET(0x1C5C0370)
#define BLKJEJHNKAJ_IFFADFFBDFM_OFFSET UNITYSDK_OFFSET(0x1C5C0310)
#define BLKJEJHNKAJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5C0120)
#define BLKJEJHNKAJ_MNLKLIAIMMI_OFFSET UNITYSDK_OFFSET(0x1C5C01C0)
#define BLKJEJHNKAJ_PEGIMBMFBBH_OFFSET UNITYSDK_OFFSET(0x1C5C02C0)

	class BLKJEJHNKAJ : public ::System::Object
	{
	public:
		::BDPDNAECJII* HHLICGLCEMJ; // 0x10
		::System::Void _ctor(::BDPDNAECJII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void MNLKLIAIMMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_MNLKLIAIMMI_OFFSET))(this, a1);
		}

		::System::Void PEGIMBMFBBH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_PEGIMBMFBBH_OFFSET))(this, a1, a2);
		}

		::System::Void IFFADFFBDFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_IFFADFFBDFM_OFFSET))(this, a1);
		}

		::System::Void HJPKGKMMPCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJEJHNKAJ_HJPKGKMMPCO_OFFSET))(this);
		}

	};
