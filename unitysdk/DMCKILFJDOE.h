#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFABDONBBOK.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMCKILFJDOE_AAAIGPGCHFB_OFFSET UNITYSDK_OFFSET(0x15A5AB80)
#define DMCKILFJDOE_GPIIEPGHACF_OFFSET UNITYSDK_OFFSET(0x15A5ABF0)
#define DMCKILFJDOE_KLPBAKNGKAF_OFFSET UNITYSDK_OFFSET(0x15A5A760)
#define DMCKILFJDOE_KPEILCMMCNE_OFFSET UNITYSDK_OFFSET(0x15A5A6E0)
#define DMCKILFJDOE_LNFCCMJNIBC_OFFSET UNITYSDK_OFFSET(0x15A5ABE0)
#define DMCKILFJDOE_NDPHDHDMPFH_OFFSET UNITYSDK_OFFSET(0x15A5A3B0)
#define DMCKILFJDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A5A300)

inline static constexpr unsigned int DMCKILFJDOE_TypeDefinitionIndex = 57875;

class DMCKILFJDOE : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* KCDOPOMMHHN; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* CIFFCPJIECG; // 0x18
	::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* COOIHHHMPEK; // 0x20
	::CFABDONBBOK CDHMEDBPMIC; // 0x28
	::System::Int32 JOECHPCHKFM; // 0x2C
	::System::Int32 DMGLEONPDLH; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>*& DGCFNHNOCPF, ::System::Action_1<::System::Int32>* LFLPJOFCBML, ::CFABDONBBOK KINFADMHKFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>*&, ::System::Action_1<::System::Int32>*, ::CFABDONBBOK))((::PBYTE)hIl2Cpp + DMCKILFJDOE__CTOR_OFFSET))(this, DGCFNHNOCPF, LFLPJOFCBML, KINFADMHKFC);
	}

	::System::Void NDPHDHDMPFH(::MoleMole::UIGeneralHeadRowWidgetController* MNOMCCLBJAO, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + DMCKILFJDOE_NDPHDHDMPFH_OFFSET))(this, MNOMCCLBJAO, ABHBKFJKINO);
	}

	::System::Void KPEILCMMCNE(::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*& LCAELLMMICE, ::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + DMCKILFJDOE_KPEILCMMCNE_OFFSET))(this, LCAELLMMICE, NACGJJKHEJE);
	}

	::System::Void AAAIGPGCHFB(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMCKILFJDOE_AAAIGPGCHFB_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 LNFCCMJNIBC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCKILFJDOE_LNFCCMJNIBC_OFFSET))(this);
	}

	::System::Void KLPBAKNGKAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMCKILFJDOE_KLPBAKNGKAF_OFFSET))(this);
	}

	::System::Void GPIIEPGHACF(::MoleMole::UIGeneralHeadRowWidgetController* MNOMCCLBJAO, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + DMCKILFJDOE_GPIIEPGHACF_OFFSET))(this, MNOMCCLBJAO, ABHBKFJKINO);
	}
};
