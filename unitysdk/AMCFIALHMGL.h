#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGBGBPIAPEI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMCFIALHMGL_BMFIIFAAOAN_OFFSET UNITYSDK_OFFSET(0x19ABECA0)
#define AMCFIALHMGL_BOCPBDKBKBF_OFFSET UNITYSDK_OFFSET(0x19ABEDB0)
#define AMCFIALHMGL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ABEBB0)
#define AMCFIALHMGL_FGIHAMIKOEN_OFFSET UNITYSDK_OFFSET(0x19ABF380)
#define AMCFIALHMGL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ABF010)
#define AMCFIALHMGL_HHJCOCMEHHI_OFFSET UNITYSDK_OFFSET(0x19ABF020)
#define AMCFIALHMGL_KEFJJNJLBPM_OFFSET UNITYSDK_OFFSET(0x19ABF270)
#define AMCFIALHMGL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ABEBA0)
#define AMCFIALHMGL_LOPAEABAEBO_OFFSET UNITYSDK_OFFSET(0x19ABE8D0)
#define AMCFIALHMGL_PLPOOBABKIC_OFFSET UNITYSDK_OFFSET(0x19ABF130)
#define AMCFIALHMGL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABE8C0)

inline static constexpr unsigned int AMCFIALHMGL_TypeDefinitionIndex = 16133;

class AMCFIALHMGL : public ::System::Object
{
public:
	::System::String* JLIDPNNDIFD; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KPHIGCLLBJI; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* CALCBKGCKEK; // 0x28
	::GGBGBPIAPEI HBDPAIKANDB; // 0x30
	::System::String* OCLPOIMKAJN; // 0x40
	::System::String* FFLJDIBEHED; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* FMHDJHJADHC; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x58
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x59
	::System::Byte CNIAANMNOCF; // 0x5A
	::System::Byte _padding0[0x1];
	::System::Int32 JKOGCDGGPFB; // 0x5C

	::System::Void _ctor(::GGBGBPIAPEI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GGBGBPIAPEI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AMCFIALHMGL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LOPAEABAEBO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_LOPAEABAEBO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* BMFIIFAAOAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_BMFIIFAAOAN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* BOCPBDKBKBF()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_BOCPBDKBKBF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMCFIALHMGL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HHJCOCMEHHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_HHJCOCMEHHI_OFFSET))(this);
	}

	::System::Int32 PLPOOBABKIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_PLPOOBABKIC_OFFSET))(this);
	}

	::System::String* KEFJJNJLBPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_KEFJJNJLBPM_OFFSET))(this);
	}

	::System::String* FGIHAMIKOEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCFIALHMGL_FGIHAMIKOEN_OFFSET))(this);
	}
};
