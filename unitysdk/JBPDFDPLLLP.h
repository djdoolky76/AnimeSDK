#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBDILLPLKBB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBPDFDPLLLP_AGIOAFDEAMN_OFFSET UNITYSDK_OFFSET(0x19545D10)
#define JBPDFDPLLLP_AHPHHLLJACI_OFFSET UNITYSDK_OFFSET(0x19545E50)
#define JBPDFDPLLLP_BFKPEPNIBLG_OFFSET UNITYSDK_OFFSET(0x19545AB0)
#define JBPDFDPLLLP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195455A0)
#define JBPDFDPLLLP_DMECPKOMGED_OFFSET UNITYSDK_OFFSET(0x19546070)
#define JBPDFDPLLLP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19545960)
#define JBPDFDPLLLP_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x19545F60)
#define JBPDFDPLLLP_JABAIPLOCEL_OFFSET UNITYSDK_OFFSET(0x19545BC0)
#define JBPDFDPLLLP_KGCGKENHBNK_OFFSET UNITYSDK_OFFSET(0x19545690)
#define JBPDFDPLLLP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19545D00)
#define JBPDFDPLLLP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19545970)
#define JBPDFDPLLLP__CTOR_OFFSET UNITYSDK_OFFSET(0x19545590)

inline static constexpr unsigned int JBPDFDPLLLP_TypeDefinitionIndex = 9496;

class JBPDFDPLLLP : public ::System::Object
{
public:
	::System::String* AOGOOLGIMIA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KHCCNJLBODK; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* HKLDINMHMEK; // 0x28
	::System::String* FMGBPECKLIP; // 0x30
	::System::String* FOILDBFAHFP; // 0x38
	::MBDILLPLKBB HBDPAIKANDB; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52
	::System::Byte GCHCDJCFCEG; // 0x53
	::System::Int32 PCHMCDIGKFJ; // 0x54
	::System::Int32 PCMOJLNOPPM; // 0x58
	::System::Int32 FFDLIBEHKLA; // 0x5C

	::System::Void _ctor(::MBDILLPLKBB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MBDILLPLKBB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JBPDFDPLLLP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KGCGKENHBNK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_KGCGKENHBNK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* BFKPEPNIBLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_BFKPEPNIBLG_OFFSET))(this);
	}

	::System::Int32 JABAIPLOCEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_JABAIPLOCEL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 AGIOAFDEAMN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_AGIOAFDEAMN_OFFSET))(this);
	}

	::System::String* AHPHHLLJACI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_AHPHHLLJACI_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_HGODFCFGNDA_OFFSET))(this);
	}

	::System::String* DMECPKOMGED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPDFDPLLLP_DMECPKOMGED_OFFSET))(this);
	}
};
