#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/Object.h"

class KDKPABFKDFC;

#define ELIDEDEGECC_ECCFNKGEGGP_OFFSET UNITYSDK_OFFSET(0x1354F950)
#define ELIDEDEGECC_EDCLHBKCKDB_OFFSET UNITYSDK_OFFSET(0x1354F840)
#define ELIDEDEGECC_FFLFFKNOPHM_OFFSET UNITYSDK_OFFSET(0x1354F900)
#define ELIDEDEGECC_GDNKBAKLABG_OFFSET UNITYSDK_OFFSET(0x1354F9C0)
#define ELIDEDEGECC_IBMIGHEHPHN_OFFSET UNITYSDK_OFFSET(0x1354F6C0)
#define ELIDEDEGECC_ILKCGGCPIKG_OFFSET UNITYSDK_OFFSET(0x1354F9B0)
#define ELIDEDEGECC_INMLDNLPPNF_OFFSET UNITYSDK_OFFSET(0x1354F7D0)
#define ELIDEDEGECC_KJPABAEKLJB_OFFSET UNITYSDK_OFFSET(0x1354F8F0)
#define ELIDEDEGECC_LPFFDFMNNOF_OFFSET UNITYSDK_OFFSET(0x1354F8A0)
#define ELIDEDEGECC_NLLJAEAHLFA_OFFSET UNITYSDK_OFFSET(0x1354F700)
#define ELIDEDEGECC_OBCJELBFKPP_OFFSET UNITYSDK_OFFSET(0x1354F960)
#define ELIDEDEGECC__CTOR_OFFSET UNITYSDK_OFFSET(0x1354F740)

inline static constexpr unsigned int ELIDEDEGECC_TypeDefinitionIndex = 90718;

class ELIDEDEGECC : public ::System::Object
{
public:
	::KDKPABFKDFC* KJAMHGPHPFF; // 0x10
	::System::Boolean CNBDDHGNOFC; // 0x18
	::System::Boolean _ABLACLDAMCH_k__BackingField; // 0x19
	::System::Byte _padding0[0x2];
	::MoleMole::ELocalPlayType JDHAFGDONFN; // 0x1C
	::MoleMole::ELocalPlayType CMFLIFJOEIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIDEDEGECC__CTOR_OFFSET))(this);
	}

	::System::Void IBMIGHEHPHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIDEDEGECC_IBMIGHEHPHN_OFFSET))(this);
	}

	::System::Void NLLJAEAHLFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIDEDEGECC_NLLJAEAHLFA_OFFSET))(this);
	}

	::System::Void INMLDNLPPNF(::MoleMole::ELocalPlayType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ELocalPlayType))((::PBYTE)hIl2Cpp + ELIDEDEGECC_INMLDNLPPNF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LPFFDFMNNOF(::MoleMole::ELocalPlayType& EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ELocalPlayType&))((::PBYTE)hIl2Cpp + ELIDEDEGECC_LPFFDFMNNOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EDCLHBKCKDB(::MoleMole::ELocalPlayType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ELocalPlayType))((::PBYTE)hIl2Cpp + ELIDEDEGECC_EDCLHBKCKDB_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::ELocalPlayType KJPABAEKLJB()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIDEDEGECC_KJPABAEKLJB_OFFSET))(this);
	}

	::System::Void FFLFFKNOPHM(::System::Boolean& LPDALNBJDIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + ELIDEDEGECC_FFLFFKNOPHM_OFFSET))(this, LPDALNBJDIM);
	}

	::System::Boolean ECCFNKGEGGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIDEDEGECC_ECCFNKGEGGP_OFFSET))(this);
	}

	::System::Void OBCJELBFKPP(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELIDEDEGECC_OBCJELBFKPP_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void ILKCGGCPIKG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELIDEDEGECC_ILKCGGCPIKG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::ELocalPlayType GDNKBAKLABG()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIDEDEGECC_GDNKBAKLABG_OFFSET))(this);
	}
};
