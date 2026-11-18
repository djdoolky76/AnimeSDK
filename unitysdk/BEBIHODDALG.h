#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIKAMDOBGNL.h"

class MABHFKPGFDK;
class MEKLIGLLJKM;

#define BEBIHODDALG_ALNIFGCMINJ_OFFSET UNITYSDK_OFFSET(0xFF68390)
#define BEBIHODDALG_ANAFPIPIENN_OFFSET UNITYSDK_OFFSET(0xFF67FC0)
#define BEBIHODDALG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFF67BA0)
#define BEBIHODDALG_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0xFF68870)
#define BEBIHODDALG_DOJIFJCNEHA_OFFSET UNITYSDK_OFFSET(0xFF68100)
#define BEBIHODDALG_NCNCCNKLACD_OFFSET UNITYSDK_OFFSET(0xFF68AF0)
#define BEBIHODDALG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFF68A60)
#define BEBIHODDALG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFF68310)
#define BEBIHODDALG_PJAKHJMAEBJ_OFFSET UNITYSDK_OFFSET(0xFF68910)
#define BEBIHODDALG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0xFF67DE0)
#define BEBIHODDALG_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0xFF68BC0)
#define BEBIHODDALG__CTOR_OFFSET UNITYSDK_OFFSET(0xFF68380)

inline static constexpr unsigned int BEBIHODDALG_TypeDefinitionIndex = 47503;

class BEBIHODDALG : public ::PIKAMDOBGNL
{
public:
	// static const ::System::Single NCIOMIJALDA; // 0x0
	::MABHFKPGFDK* IJKIMCMPBCF; // 0x10
	::MEKLIGLLJKM* CDPHHNAGHJM; // 0x18
	::System::Int32 IHBDNJFGLCB; // 0x20
	::System::Boolean FNBFNGCGHDK; // 0x24
	::System::Boolean PNGDACAALDP; // 0x25
	::System::Byte _padding0[0x2];
	::System::Single EOKLCAPKPOA; // 0x28
	::System::Single PINEIPABFBK; // 0x2C
	::System::Int32 FKEHDHCEKMM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MEKLIGLLJKM* POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + BEBIHODDALG_BBOMJDBNHIC_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEBIHODDALG_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void ALNIFGCMINJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_ALNIFGCMINJ_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BEBIHODDALG_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DOJIFJCNEHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_DOJIFJCNEHA_OFFSET))(this);
	}

	::System::Void PJAKHJMAEBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_PJAKHJMAEBJ_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Boolean ANAFPIPIENN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_ANAFPIPIENN_OFFSET))(this);
	}

	::System::Void NCNCCNKLACD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBIHODDALG_NCNCCNKLACD_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::MEKLIGLLJKM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + BEBIHODDALG_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}
};
