#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class FLDPBAPLICI;
class JGALJALGFFC;
class JHAEDNPFIGC;
class OHDHAGLCAEB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADEFGFOLCNC_ABMAALKHNNF_OFFSET UNITYSDK_OFFSET(0x12CE1B80)
#define ADEFGFOLCNC_AMFEIFPLDAN_OFFSET UNITYSDK_OFFSET(0x12CE1D20)
#define ADEFGFOLCNC_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x12CE0BF0)
#define ADEFGFOLCNC_DIKCGIDAMAF_OFFSET UNITYSDK_OFFSET(0x12CE1560)
#define ADEFGFOLCNC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12CE1D50)
#define ADEFGFOLCNC_FKPLJMCGDGB_OFFSET UNITYSDK_OFFSET(0x12CE15C0)
#define ADEFGFOLCNC_GLJBBNDMEHF_OFFSET UNITYSDK_OFFSET(0x12CE1D40)
#define ADEFGFOLCNC_HGKMNJGFMCK_OFFSET UNITYSDK_OFFSET(0x12CE1D30)
#define ADEFGFOLCNC_ILJMJHAGLKC_OFFSET UNITYSDK_OFFSET(0x12CE1B10)
#define ADEFGFOLCNC_JCFNEIGCKFO_OFFSET UNITYSDK_OFFSET(0x12CE0E40)
#define ADEFGFOLCNC_KDEHIHNAPAD_OFFSET UNITYSDK_OFFSET(0x12CE1CC0)
#define ADEFGFOLCNC_KEBDJCLFCJE_OFFSET UNITYSDK_OFFSET(0x12CE0BE0)
#define ADEFGFOLCNC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x12CE1B20)
#define ADEFGFOLCNC_PCLMMDGIJGH_1_OFFSET UNITYSDK_OFFSET(0x12CE1760)
#define ADEFGFOLCNC_PDGLELIONLL_OFFSET UNITYSDK_OFFSET(0x12CE1000)
#define ADEFGFOLCNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12CE0AA0)
#define ADEFGFOLCNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE0B80)

inline static constexpr unsigned int ADEFGFOLCNC_TypeDefinitionIndex = 68924;

class ADEFGFOLCNC : public ::System::Object
{
public:
	::JHAEDNPFIGC* FJHKLJGFFOE; // 0x10
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* OKHCJINLIFB; // 0x18
	::FJGEHPBJKDM HDIEABKPPNF; // 0x20
	::Foundation::ViewObject::ViewObjectHandle KMLAFHAPCMJ; // 0x30
	::JGALJALGFFC* HNHIAALGCFH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_TOSTRING_OFFSET))(this);
	}

	::JHAEDNPFIGC* KEBDJCLFCJE()
	{
		return ((::JHAEDNPFIGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_KEBDJCLFCJE_OFFSET))(this);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void JCFNEIGCKFO(::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_JCFNEIGCKFO_OFFSET))(this, PHHDHIBOCKA);
	}

	::Foundation::ViewObject::ViewObjectHandle PDGLELIONLL(::EKHEOJOFLLA* GMDLKOAPKGP, ::System::String* HIAIKHDFCLN, ::System::Boolean JIPOIHGGHFD)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::EKHEOJOFLLA*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_PDGLELIONLL_OFFSET))(this, GMDLKOAPKGP, HIAIKHDFCLN, JIPOIHGGHFD);
	}

	::System::Void DIKCGIDAMAF(::FJGEHPBJKDM PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::FJGEHPBJKDM))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_DIKCGIDAMAF_OFFSET))(this, PHHDHIBOCKA);
	}

	::Foundation::ViewObject::ViewObjectHandle FKPLJMCGDGB(::FLDPBAPLICI* DFMKILICPFB, ::OHDHAGLCAEB* JNBJNLKOKCN, ::System::Action_1<::EKHEOJOFLLA*>* IKLJINPLNJA, ::System::Boolean JIPOIHGGHFD)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::FLDPBAPLICI*, ::OHDHAGLCAEB*, ::System::Action_1<::EKHEOJOFLLA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_FKPLJMCGDGB_OFFSET))(this, DFMKILICPFB, JNBJNLKOKCN, IKLJINPLNJA, JIPOIHGGHFD);
	}

	::System::Void PCLMMDGIJGH_1(::System::Int64 AFDNFFLBEHN, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_PCLMMDGIJGH_1_OFFSET))(this, AFDNFFLBEHN, PILELGPBCLL);
	}

	::FJGEHPBJKDM ILJMJHAGLKC()
	{
		return ((::FJGEHPBJKDM(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_ILJMJHAGLKC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::Foundation::ViewObject::ViewObjectHandle ABMAALKHNNF(::FLDPBAPLICI* DFMKILICPFB, ::OHDHAGLCAEB* JNBJNLKOKCN, ::System::Action_1<::EKHEOJOFLLA*>* IKLJINPLNJA, ::System::Boolean JIPOIHGGHFD)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::FLDPBAPLICI*, ::OHDHAGLCAEB*, ::System::Action_1<::EKHEOJOFLLA*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_ABMAALKHNNF_OFFSET))(this, DFMKILICPFB, JNBJNLKOKCN, IKLJINPLNJA, JIPOIHGGHFD);
	}

	::System::Void KDEHIHNAPAD(::JHAEDNPFIGC* FJHIDNECMIH, ::JGALJALGFFC* NPODAKNPNEH)
	{
		return ((::System::Void(*)(::PVOID, ::JHAEDNPFIGC*, ::JGALJALGFFC*))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_KDEHIHNAPAD_OFFSET))(this, FJHIDNECMIH, NPODAKNPNEH);
	}

	::Foundation::ViewObject::ViewObjectHandle AMFEIFPLDAN()
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_AMFEIFPLDAN_OFFSET))(this);
	}

	::JGALJALGFFC* HGKMNJGFMCK()
	{
		return ((::JGALJALGFFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_HGKMNJGFMCK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* GLJBBNDMEHF()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_GLJBBNDMEHF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADEFGFOLCNC_DPIHOJBBGLA_OFFSET))(this);
	}
};
