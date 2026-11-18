#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPMHJKFIPDC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define NCLDIHPAGDK_EEMOFACNNHN_OFFSET UNITYSDK_OFFSET(0x1ADF7AD0)
#define NCLDIHPAGDK_HFBHKKJOBJN_OFFSET UNITYSDK_OFFSET(0x1ADF7DC0)
#define NCLDIHPAGDK_IDAEEFNIEMM_OFFSET UNITYSDK_OFFSET(0x1ADF7970)
#define NCLDIHPAGDK_IJPLHGLGFNI_OFFSET UNITYSDK_OFFSET(0x1ADF7810)
#define NCLDIHPAGDK_NNIGJHDPDFE_OFFSET UNITYSDK_OFFSET(0x1ADF8050)
#define NCLDIHPAGDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF7800)

inline static constexpr unsigned int NCLDIHPAGDK_TypeDefinitionIndex = 49959;

class NCLDIHPAGDK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLDIHPAGDK__CTOR_OFFSET))(this);
	}

	static ::System::Void IJPLHGLGFNI(::MoleMole::EntityHandle NGKCJHGMEPG, ::MPMHJKFIPDC JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MPMHJKFIPDC))((::PBYTE)hIl2Cpp + NCLDIHPAGDK_IJPLHGLGFNI_OFFSET))(NGKCJHGMEPG, JKBLDFBGBPK);
	}

	static ::System::Void IDAEEFNIEMM(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + NCLDIHPAGDK_IDAEEFNIEMM_OFFSET))(KECKGDFIALJ, JKBLDFBGBPK);
	}

	static ::System::Void EEMOFACNNHN(::MoleMole::EntityHandle NGKCJHGMEPG)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + NCLDIHPAGDK_EEMOFACNNHN_OFFSET))(NGKCJHGMEPG);
	}

	static ::System::Void HFBHKKJOBJN(::MoleMole::EntityHandle NGKCJHGMEPG)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + NCLDIHPAGDK_HFBHKKJOBJN_OFFSET))(NGKCJHGMEPG);
	}

	static ::System::Void NNIGJHDPDFE(::MoleMole::EntityHandle NGKCJHGMEPG)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + NCLDIHPAGDK_NNIGJHDPDFE_OFFSET))(NGKCJHGMEPG);
	}
};
