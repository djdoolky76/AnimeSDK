#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJFKHEKOPBD.h"
#include "unitysdk/LMIDMMFHLIJ_KLFLNOBODMC.h"

class ANAPNFPOMNG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define LMIDMMFHLIJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12D44460)
#define LMIDMMFHLIJ_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x12D43160)
#define LMIDMMFHLIJ_BENKILMNHMH_OFFSET UNITYSDK_OFFSET(0x12D44230)
#define LMIDMMFHLIJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D43AE0)
#define LMIDMMFHLIJ_EMECLAIMJGE_OFFSET UNITYSDK_OFFSET(0x12D43640)
#define LMIDMMFHLIJ_EODFNPIHEKC_OFFSET UNITYSDK_OFFSET(0x12D43B70)
#define LMIDMMFHLIJ_FBMENBNGOOE_OFFSET UNITYSDK_OFFSET(0x12D442C0)
#define LMIDMMFHLIJ_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x12D43560)
#define LMIDMMFHLIJ_IFACMGGOOOC_OFFSET UNITYSDK_OFFSET(0x12D43520)
#define LMIDMMFHLIJ_NDHDJCGGLBG_OFFSET UNITYSDK_OFFSET(0x12D44040)
#define LMIDMMFHLIJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D42F90)
#define LMIDMMFHLIJ_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x12D443D0)
#define LMIDMMFHLIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D43630)

inline static constexpr unsigned int LMIDMMFHLIJ_TypeDefinitionIndex = 59877;

class LMIDMMFHLIJ : public ::HJFKHEKOPBD
{
public:
	::LMIDMMFHLIJ_KLFLNOBODMC NNNPLPPOCCA; // 0x60
	::System::Int32 LLFKOOKDOLP; // 0x64
	::System::Int32 OMGEMADCEND; // 0x68
	::System::Boolean KOAOBOOOIDK; // 0x6C
	::System::Byte _padding0[0x3];
	::System::Int32 MDBBGAKAHLH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void IFACMGGOOOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_IFACMGGOOOC_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void EMECLAIMJGE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_EMECLAIMJGE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void EODFNPIHEKC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_EODFNPIHEKC_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void NDHDJCGGLBG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_NDHDJCGGLBG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void BENKILMNHMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_BENKILMNHMH_OFFSET))(this);
	}

	::System::String* FBMENBNGOOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_FBMENBNGOOE_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIDMMFHLIJ_ANEOCOIFDDJ_OFFSET))(this);
	}
};
