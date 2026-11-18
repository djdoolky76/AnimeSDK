#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIBMJLOJLKD;
class IOLJFHJPFOL;
namespace MoleMole { class UIActivityWeekRewardComponentPopWindowController; }

#define JNCBGOANMMK_FIPNGDCEALH_OFFSET UNITYSDK_OFFSET(0x157D2A30)
#define JNCBGOANMMK_HEPANGBFPOB_OFFSET UNITYSDK_OFFSET(0x157D2970)
#define JNCBGOANMMK_HFMKHOBHHCM_OFFSET UNITYSDK_OFFSET(0x157D2AB0)
#define JNCBGOANMMK_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x157D2AF0)
#define JNCBGOANMMK_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x157D2A70)
#define JNCBGOANMMK__CTOR_OFFSET UNITYSDK_OFFSET(0x157D2B30)

inline static constexpr unsigned int JNCBGOANMMK_TypeDefinitionIndex = 83031;

class JNCBGOANMMK : public ::System::Object
{
public:
	::MoleMole::UIActivityWeekRewardComponentPopWindowController* CBDHCLFHHCC; // 0x10
	::GIBMJLOJLKD* GMMHEHGOLEE; // 0x18
	::IOLJFHJPFOL* IHJFMNJIDFM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCBGOANMMK__CTOR_OFFSET))(this);
	}

	::System::Void HEPANGBFPOB(::MoleMole::UIActivityWeekRewardComponentPopWindowController* JOLDOMEIKEF, ::GIBMJLOJLKD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityWeekRewardComponentPopWindowController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + JNCBGOANMMK_HEPANGBFPOB_OFFSET))(this, JOLDOMEIKEF, AEJAMJDBHAM);
	}

	::System::Void FIPNGDCEALH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCBGOANMMK_FIPNGDCEALH_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCBGOANMMK_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HFMKHOBHHCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCBGOANMMK_HFMKHOBHHCM_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCBGOANMMK_HIABONACIDH_OFFSET))(this);
	}
};
