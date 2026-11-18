#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGPDCBDPJMC.h"

class EMGMHNMJLGG;

#define KHAIBHJAFEP_BLDKEOMKCEA_OFFSET UNITYSDK_OFFSET(0x1A2CB0A0)
#define KHAIBHJAFEP_CGPBBLGFEPD_OFFSET UNITYSDK_OFFSET(0x1A2CB080)
#define KHAIBHJAFEP_EAKMDAEPICH_OFFSET UNITYSDK_OFFSET(0x1A2CB010)
#define KHAIBHJAFEP_LBGOLFONALI_OFFSET UNITYSDK_OFFSET(0x1A2CB090)
#define KHAIBHJAFEP_ONIICCHCNJJ_OFFSET UNITYSDK_OFFSET(0x1A2CB070)
#define KHAIBHJAFEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CAEA0)

inline static constexpr unsigned int KHAIBHJAFEP_TypeDefinitionIndex = 63030;

class KHAIBHJAFEP : public ::IGPDCBDPJMC
{
public:
	::EMGMHNMJLGG* _CMCAAKLLJBB_k__BackingField; // 0x28
	::System::UInt32 _KGBDEPHDMMG_k__BackingField; // 0x30

	::System::Void _ctor(::System::Double CIIPCCLOHLH, ::System::Double AJPAFKAPNNM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + KHAIBHJAFEP__CTOR_OFFSET))(this, CIIPCCLOHLH, AJPAFKAPNNM);
	}

	::System::Double EAKMDAEPICH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAIBHJAFEP_EAKMDAEPICH_OFFSET))(this);
	}

	::EMGMHNMJLGG* ONIICCHCNJJ()
	{
		return ((::EMGMHNMJLGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAIBHJAFEP_ONIICCHCNJJ_OFFSET))(this);
	}

	::System::Void CGPBBLGFEPD(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHAIBHJAFEP_CGPBBLGFEPD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 LBGOLFONALI()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAIBHJAFEP_LBGOLFONALI_OFFSET))(this);
	}

	::System::Void BLDKEOMKCEA(::EMGMHNMJLGG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EMGMHNMJLGG*))((::PBYTE)hIl2Cpp + KHAIBHJAFEP_BLDKEOMKCEA_OFFSET))(this, EGEGIMGMJHN);
	}
};
