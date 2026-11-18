#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOGBAPBJDPK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define CAKDIJGEBID_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AC95A0)
#define CAKDIJGEBID_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AC9450)
#define CAKDIJGEBID_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AC9690)
#define CAKDIJGEBID_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x19AC9460)
#define CAKDIJGEBID__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9440)

inline static constexpr unsigned int CAKDIJGEBID_TypeDefinitionIndex = 11788;

class CAKDIJGEBID : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NOGBAPBJDPK HBDPAIKANDB; // 0x18
	::System::Int32 AEMJJEABKGP; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::NOGBAPBJDPK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOGBAPBJDPK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CAKDIJGEBID__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAKDIJGEBID_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PEOEBEBFIJO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKDIJGEBID_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKDIJGEBID_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKDIJGEBID_LJANCIBECFG_OFFSET))(this);
	}
};
