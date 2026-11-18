#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHBMDCEBMGE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LOODBIMJOAL_BGDGFOGPFDD_OFFSET UNITYSDK_OFFSET(0x19DAC230)
#define LOODBIMJOAL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19DAC140)
#define LOODBIMJOAL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19DAC370)
#define LOODBIMJOAL_HDNCCEDDKDG_OFFSET UNITYSDK_OFFSET(0x19DAC5D0)
#define LOODBIMJOAL_JFCNOLHFLHO_OFFSET UNITYSDK_OFFSET(0x19DAC6F0)
#define LOODBIMJOAL_JGNNJKPCKHC_OFFSET UNITYSDK_OFFSET(0x19DAC380)
#define LOODBIMJOAL_JOADBFHPNAH_OFFSET UNITYSDK_OFFSET(0x19DAC030)
#define LOODBIMJOAL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19DAC6E0)
#define LOODBIMJOAL_NACMHJGMEAP_OFFSET UNITYSDK_OFFSET(0x19DAC4C0)
#define LOODBIMJOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAC020)

inline static constexpr unsigned int LOODBIMJOAL_TypeDefinitionIndex = 14355;

class LOODBIMJOAL : public ::System::Object
{
public:
	::System::String* COHBENNCFBC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::IHBMDCEBMGE HBDPAIKANDB; // 0x20
	::System::String* PCDAJCJAOOO; // 0x30
	::System::String* DBFECKFDNPA; // 0x38
	::System::Int32 KGMAOOGABJB; // 0x40
	::System::Int32 NAFDHMFICCJ; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 JCLEKBNKBNE; // 0x4C

	::System::Void _ctor(::IHBMDCEBMGE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IHBMDCEBMGE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LOODBIMJOAL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JOADBFHPNAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_JOADBFHPNAH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BGDGFOGPFDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_BGDGFOGPFDD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOODBIMJOAL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JGNNJKPCKHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_JGNNJKPCKHC_OFFSET))(this);
	}

	::System::String* NACMHJGMEAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_NACMHJGMEAP_OFFSET))(this);
	}

	::System::String* HDNCCEDDKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_HDNCCEDDKDG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 JFCNOLHFLHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOODBIMJOAL_JFCNOLHFLHO_OFFSET))(this);
	}
};
