#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNLEEFGEKFB.h"
#include "unitysdk/IDJCEFPNPMM.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define BBLFDCMINFP_AHCNMIFLNOH_OFFSET UNITYSDK_OFFSET(0x17011270)
#define BBLFDCMINFP_BOBEJIOLMJL_OFFSET UNITYSDK_OFFSET(0x17011400)
#define BBLFDCMINFP_CTOR_OFFSET UNITYSDK_OFFSET(0x170117F0)
#define BBLFDCMINFP_FNOHMNIHLCN_OFFSET UNITYSDK_OFFSET(0x17011610)
#define BBLFDCMINFP_MDBJFGJBNKL_OFFSET UNITYSDK_OFFSET(0x17011730)
#define BBLFDCMINFP_NBEOGNLFGBE_OFFSET UNITYSDK_OFFSET(0x17011330)
#define BBLFDCMINFP_NBNKMIMDLJB_OFFSET UNITYSDK_OFFSET(0x17011450)
#define BBLFDCMINFP_NCKNGJPHNBN_OFFSET UNITYSDK_OFFSET(0x17011130)
#define BBLFDCMINFP_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x170111A0)
#define BBLFDCMINFP_PMMNBAJPPKG_OFFSET UNITYSDK_OFFSET(0x170114A0)

inline static constexpr unsigned int BBLFDCMINFP_TypeDefinitionIndex = 38182;

	class BBLFDCMINFP : public ::System::Object
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x10
		::System::Byte _padding0[0x3];
		::CNLEEFGEKFB PBLDEABLGHP; // 0x14
		::CNLEEFGEKFB BNLOBFOAKCJ; // 0x28
		::System::Int32 EBJKJAGJGPK; // 0x3C
		::System::Int32 HBAMPJPOOLM; // 0x40
		::System::Int32 HJGHEBINGOF; // 0x44
		::IDJCEFPNPMM EFLBKPGNNPM; // 0x48
		::RPG::MVector3 MIFKHBDOGLN; // 0x54
		::System::Int32 OOFOCLJKNCM; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_CTOR_OFFSET))(this);
		}

		::System::Void NCKNGJPHNBN(::RPG::MVector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + BBLFDCMINFP_NCKNGJPHNBN_OFFSET))(this, a1, a2);
		}

		::System::Void PAFCMAMJENB(::RPG::MVector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + BBLFDCMINFP_PAFCMAMJENB_OFFSET))(this, a1, a2);
		}

		::System::Void AHCNMIFLNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_AHCNMIFLNOH_OFFSET))(this);
		}

		::System::Void NBEOGNLFGBE(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BBLFDCMINFP_NBEOGNLFGBE_OFFSET))(this, a1);
		}

		::System::Int32 BOBEJIOLMJL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_BOBEJIOLMJL_OFFSET))(this);
		}

		::System::Int32 NBNKMIMDLJB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_NBNKMIMDLJB_OFFSET))(this);
		}

		::RPG::MVector3 PMMNBAJPPKG()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_PMMNBAJPPKG_OFFSET))(this);
		}

		::System::Single FNOHMNIHLCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_FNOHMNIHLCN_OFFSET))(this);
		}

		::System::Single MDBJFGJBNKL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLFDCMINFP_MDBJFGJBNKL_OFFSET))(this);
		}

	};
