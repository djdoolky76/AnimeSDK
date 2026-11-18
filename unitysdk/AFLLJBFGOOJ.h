#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEDAOIMGFMB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFLLJBFGOOJ_AEHDBMGDKGB_OFFSET UNITYSDK_OFFSET(0x19AB9D00)
#define AFLLJBFGOOJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ABA230)
#define AFLLJBFGOOJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ABA320)
#define AFLLJBFGOOJ_LGMMOKNIHKG_OFFSET UNITYSDK_OFFSET(0x19AB9E20)
#define AFLLJBFGOOJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AB9E10)
#define AFLLJBFGOOJ_MDMJEFBNFGM_OFFSET UNITYSDK_OFFSET(0x19AB9F60)
#define AFLLJBFGOOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB9CF0)

inline static constexpr unsigned int AFLLJBFGOOJ_TypeDefinitionIndex = 15450;

class AFLLJBFGOOJ : public ::System::Object
{
public:
	::System::String* GLGCKEBEBCF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::HEDAOIMGFMB HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* EIHEPCFLOOF; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FPGEGHCHPFN; // 0x3C

	::System::Void _ctor(::HEDAOIMGFMB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HEDAOIMGFMB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* AEHDBMGDKGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ_AEHDBMGDKGB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LGMMOKNIHKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ_LGMMOKNIHKG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MDMJEFBNFGM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ_MDMJEFBNFGM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFLLJBFGOOJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
