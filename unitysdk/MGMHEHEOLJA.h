#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFPHKPLDMJ.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Func_1; }

#define MGMHEHEOLJA_BOEJLFCNMIC_OFFSET UNITYSDK_OFFSET(0x14DE40A0)
#define MGMHEHEOLJA_DIOOIKGBJCF_OFFSET UNITYSDK_OFFSET(0x14DE4900)
#define MGMHEHEOLJA_FLFNKKOGJMG_OFFSET UNITYSDK_OFFSET(0x14DE4870)
#define MGMHEHEOLJA_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x14DE4770)
#define MGMHEHEOLJA_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x14DE3E80)
#define MGMHEHEOLJA_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x14DE47E0)
#define MGMHEHEOLJA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE47D0)

inline static constexpr unsigned int MGMHEHEOLJA_TypeDefinitionIndex = 56083;

class MGMHEHEOLJA : public ::KAFPHKPLDMJ
{
public:
	::System::Int32 OFKMPBKEDLO; // 0x20
	::System::Int32 CCGDLKJMHEH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEHEOLJA__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEHEOLJA_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEHEOLJA_HIABONACIDH_OFFSET))(this);
	}

	::System::Void OBBJKALBMFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEHEOLJA_OBBJKALBMFL_OFFSET))(this);
	}

	::System::Void BOEJLFCNMIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEHEOLJA_BOEJLFCNMIC_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* FLFNKKOGJMG(::System::Func_1<::MoleMole::UIControlReference*>* KOIBHLHLMFC)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MGMHEHEOLJA_FLFNKKOGJMG_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void DIOOIKGBJCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEHEOLJA_DIOOIKGBJCF_OFFSET))(this);
	}
};
