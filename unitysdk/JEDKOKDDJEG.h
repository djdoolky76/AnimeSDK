#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEDKOKDDJEG_JBNBNKJLMLL_1_OFFSET UNITYSDK_OFFSET(0x13071660)
#define JEDKOKDDJEG_JBNBNKJLMLL_OFFSET UNITYSDK_OFFSET(0x13071480)
#define JEDKOKDDJEG_JHCDAEHBKGN_OFFSET UNITYSDK_OFFSET(0x13071280)
#define JEDKOKDDJEG_LPOIAFPPJLO_OFFSET UNITYSDK_OFFSET(0x130710F0)
#define JEDKOKDDJEG_NHONENFHJJG_OFFSET UNITYSDK_OFFSET(0x13071090)
#define JEDKOKDDJEG_NHPIIFKFDFA_OFFSET UNITYSDK_OFFSET(0x13071430)
#define JEDKOKDDJEG_OGJPALNDIIP_OFFSET UNITYSDK_OFFSET(0x13070E40)
#define JEDKOKDDJEG_POIIGNDFOCD_OFFSET UNITYSDK_OFFSET(0x130713E0)
#define JEDKOKDDJEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13070D70)

inline static constexpr unsigned int JEDKOKDDJEG_TypeDefinitionIndex = 72939;

class JEDKOKDDJEG : public ::System::Object
{
public:
	::MoleMole::UIBaseController* AEJBCMBCDJE; // 0x10
	::System::Collections::Generic::HashSet_1<::CJIEIHEDMME*>* JGPNACOFLHG; // 0x18
	::System::Action* PEGBHJCNKJG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDKOKDDJEG__CTOR_OFFSET))(this);
	}

	::System::Void OGJPALNDIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_OGJPALNDIIP_OFFSET))(this);
	}

	::System::Void NHONENFHJJG(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_NHONENFHJJG_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void LPOIAFPPJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_LPOIAFPPJLO_OFFSET))(this);
	}

	::System::Void JHCDAEHBKGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_JHCDAEHBKGN_OFFSET))(this);
	}

	::System::Void POIIGNDFOCD(::System::Action* PEGBHJCNKJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_POIIGNDFOCD_OFFSET))(this, PEGBHJCNKJG);
	}

	::System::Void NHPIIFKFDFA(::MoleMole::UIBaseController* ENFIPKDNBKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_NHPIIFKFDFA_OFFSET))(this, ENFIPKDNBKA);
	}

	::System::Void JBNBNKJLMLL(::System::Collections::Generic::List_1<::CJIEIHEDMME*>* JLLNLKGFKOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CJIEIHEDMME*>*))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_JBNBNKJLMLL_OFFSET))(this, JLLNLKGFKOJ);
	}

	::System::Void JBNBNKJLMLL_1(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JEDKOKDDJEG_JBNBNKJLMLL_1_OFFSET))(this, LADPIPOMBJM);
	}
};
