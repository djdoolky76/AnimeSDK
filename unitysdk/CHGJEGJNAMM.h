#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGAKLIPJDM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CHGJEGJNAMM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1573E2F0)
#define CHGJEGJNAMM_EFIMHDNGNGJ_OFFSET UNITYSDK_OFFSET(0x1573E520)
#define CHGJEGJNAMM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1573E790)
#define CHGJEGJNAMM_GHKEBFFGPBN_OFFSET UNITYSDK_OFFSET(0x1573E1E0)
#define CHGJEGJNAMM_HFHPIGMGGEA_OFFSET UNITYSDK_OFFSET(0x1573E0D0)
#define CHGJEGJNAMM_JAOIEIJGHED_OFFSET UNITYSDK_OFFSET(0x1573E3E0)
#define CHGJEGJNAMM_LIOBKEMNMKP_OFFSET UNITYSDK_OFFSET(0x1573DDF0)
#define CHGJEGJNAMM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1573E0C0)
#define CHGJEGJNAMM_OBNFHANMLKO_OFFSET UNITYSDK_OFFSET(0x1573E630)
#define CHGJEGJNAMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1573DDE0)

inline static constexpr unsigned int CHGJEGJNAMM_TypeDefinitionIndex = 17502;

class CHGJEGJNAMM : public ::System::Object
{
public:
	::System::String* FHIPEIBFLPP; // 0x10
	::MOGAKLIPJDM HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* HLECIFKLJAG; // 0x30
	::System::String* LAEDPHFFOLF; // 0x38
	::System::String* FDEEHKMJCHA; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Boolean PAJFDANFNAG; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte CNIAANMNOCF; // 0x4B
	::System::Int32 MLEJANOKAOC; // 0x4C

	::System::Void _ctor(::MOGAKLIPJDM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOGAKLIPJDM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CHGJEGJNAMM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LIOBKEMNMKP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_LIOBKEMNMKP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HFHPIGMGGEA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_HFHPIGMGGEA_OFFSET))(this);
	}

	::System::String* GHKEBFFGPBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_GHKEBFFGPBN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JAOIEIJGHED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_JAOIEIJGHED_OFFSET))(this);
	}

	::System::String* EFIMHDNGNGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_EFIMHDNGNGJ_OFFSET))(this);
	}

	::System::Boolean OBNFHANMLKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_OBNFHANMLKO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHGJEGJNAMM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
