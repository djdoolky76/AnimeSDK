#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAINCAOGDEL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define FGBCDDDJFAJ_BNKBEADJEML_OFFSET UNITYSDK_OFFSET(0x15A74D70)
#define FGBCDDDJFAJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A74EB0)
#define FGBCDDDJFAJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A74D60)
#define FGBCDDDJFAJ_KPOOPIJLCPE_OFFSET UNITYSDK_OFFSET(0x15A74C10)
#define FGBCDDDJFAJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A74D50)
#define FGBCDDDJFAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15A74C00)

inline static constexpr unsigned int FGBCDDDJFAJ_TypeDefinitionIndex = 15154;

class FGBCDDDJFAJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::JAINCAOGDEL HBDPAIKANDB; // 0x18
	::System::Int32 DPGMDAGGMPB; // 0x28
	::System::Int32 NACJBGCMCHC; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::JAINCAOGDEL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JAINCAOGDEL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FGBCDDDJFAJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KPOOPIJLCPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBCDDDJFAJ_KPOOPIJLCPE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBCDDDJFAJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGBCDDDJFAJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BNKBEADJEML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBCDDDJFAJ_BNKBEADJEML_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBCDDDJFAJ_COFGIJJOFLP_OFFSET))(this);
	}
};
