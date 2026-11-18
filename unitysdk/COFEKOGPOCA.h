#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMIKAAHOPPM.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/NHIDKNOBNBI.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define COFEKOGPOCA_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x17A92E40)
#define COFEKOGPOCA_DCEJHLIFPHM_OFFSET UNITYSDK_OFFSET(0x17A92E30)
#define COFEKOGPOCA_IKIPINIJOHL_OFFSET UNITYSDK_OFFSET(0x17A92E80)
#define COFEKOGPOCA_ILDPBMCDCAH_OFFSET UNITYSDK_OFFSET(0x17A92E50)
#define COFEKOGPOCA_KCGCLBDDFNE_OFFSET UNITYSDK_OFFSET(0x17A92E90)
#define COFEKOGPOCA_MLDNOMPAIJF_OFFSET UNITYSDK_OFFSET(0x17A92E60)
#define COFEKOGPOCA_NGGFEJNIALO_OFFSET UNITYSDK_OFFSET(0x17A92E70)
#define COFEKOGPOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A92E20)

inline static constexpr unsigned int COFEKOGPOCA_TypeDefinitionIndex = 16495;

class COFEKOGPOCA : public ::OMIKAAHOPPM
{
public:
	::System::Void _ctor(::NHIDKNOBNBI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHIDKNOBNBI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + COFEKOGPOCA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean DCEJHLIFPHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFEKOGPOCA_DCEJHLIFPHM_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFEKOGPOCA_ACOEONABOJL_OFFSET))(this);
	}

	::System::String* ILDPBMCDCAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFEKOGPOCA_ILDPBMCDCAH_OFFSET))(this);
	}

	::System::String* MLDNOMPAIJF(::System::Boolean ECEMKCOLBOE)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFEKOGPOCA_MLDNOMPAIJF_OFFSET))(this, ECEMKCOLBOE);
	}

	::Share::EItemType IKIPINIJOHL()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + COFEKOGPOCA_IKIPINIJOHL_OFFSET))(this);
	}

	::System::String* NGGFEJNIALO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFEKOGPOCA_NGGFEJNIALO_OFFSET))(this);
	}

	::System::Int32 KCGCLBDDFNE(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFEKOGPOCA_KCGCLBDDFNE_OFFSET))(this, OBNIAHNMHPF);
	}
};
