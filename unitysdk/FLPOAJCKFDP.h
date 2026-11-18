#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEINADGDMPF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FLPOAJCKFDP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B109FD0)
#define FLPOAJCKFDP_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x1B109EB0)
#define FLPOAJCKFDP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B109FC0)
#define FLPOAJCKFDP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B109EA0)
#define FLPOAJCKFDP_OGAKJIPMFOI_OFFSET UNITYSDK_OFFSET(0x1B109D60)
#define FLPOAJCKFDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B109D50)

inline static constexpr unsigned int FLPOAJCKFDP_TypeDefinitionIndex = 17655;

class FLPOAJCKFDP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OEINADGDMPF HBDPAIKANDB; // 0x18
	::System::String* BHFPABKJHEO; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PMAODDHJGGE; // 0x34

	::System::Void _ctor(::OEINADGDMPF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OEINADGDMPF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FLPOAJCKFDP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OGAKJIPMFOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPOAJCKFDP_OGAKJIPMFOI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPOAJCKFDP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DFIGOHGIDJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPOAJCKFDP_DFIGOHGIDJN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLPOAJCKFDP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPOAJCKFDP_COFGIJJOFLP_OFFSET))(this);
	}
};
