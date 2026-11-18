#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define KCMMEJGJBEF_BONGMLDCDFI_OFFSET UNITYSDK_OFFSET(0x42D920)
#define KCMMEJGJBEF_FCICGEALCFA_OFFSET UNITYSDK_OFFSET(0x440210)
#define KCMMEJGJBEF_FFGANCIEFCJ_OFFSET UNITYSDK_OFFSET(0x654730)
#define KCMMEJGJBEF_IGFGIHLOLBE_OFFSET UNITYSDK_OFFSET(0x654710)
#define KCMMEJGJBEF_MOADBCFOOEG_OFFSET UNITYSDK_OFFSET(0x7AA5D0)
#define KCMMEJGJBEF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7AA580)

inline static constexpr unsigned int KCMMEJGJBEF_TypeDefinitionIndex = 64546;

struct alignas(4) KCMMEJGJBEF
{
	::System::Single BEOGLFJBPMN; // 0x10
	::System::Byte _padding0[0x4];
	::System::Double _IDHEKCPCDBA_k__BackingField; // 0x18
	::System::Double _BOKALAOFEBN_k__BackingField; // 0x20
	::System::Int32 OGFPEPEEHLP; // 0x28

	::System::Void IGFGIHLOLBE(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KCMMEJGJBEF_IGFGIHLOLBE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double FCICGEALCFA()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMEJGJBEF_FCICGEALCFA_OFFSET))(this);
	}

	::System::Double BONGMLDCDFI()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMEJGJBEF_BONGMLDCDFI_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMEJGJBEF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void MOADBCFOOEG(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KCMMEJGJBEF_MOADBCFOOEG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FFGANCIEFCJ(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KCMMEJGJBEF_FFGANCIEFCJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
