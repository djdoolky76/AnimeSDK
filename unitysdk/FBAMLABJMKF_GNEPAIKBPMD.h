#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_FEELNPOFJKH;
namespace UnityEngine { class AnimationCurve; }

#define FBAMLABJMKF_GNEPAIKBPMD_DICABFHGHPD_OFFSET UNITYSDK_OFFSET(0x123812B0)
#define FBAMLABJMKF_GNEPAIKBPMD_GOGFNKBEIEI_OFFSET UNITYSDK_OFFSET(0x12381290)
#define FBAMLABJMKF_GNEPAIKBPMD_HOELNEBFCLO_OFFSET UNITYSDK_OFFSET(0x123812A0)
#define FBAMLABJMKF_GNEPAIKBPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x12381280)

inline static constexpr unsigned int FBAMLABJMKF_GNEPAIKBPMD_TypeDefinitionIndex = 78155;

class FBAMLABJMKF_GNEPAIKBPMD : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* IAKPGBCAAKM; // 0x10
	::FBAMLABJMKF_FEELNPOFJKH* MFOCAFMBBGM; // 0x18
	::System::Single MDPPNMIPDMP; // 0x20
	::System::Single HACJFKBLODH; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_GNEPAIKBPMD__CTOR_OFFSET))(this);
	}

	::System::Single GOGFNKBEIEI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_GNEPAIKBPMD_GOGFNKBEIEI_OFFSET))(this);
	}

	::System::Void HOELNEBFCLO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_GNEPAIKBPMD_HOELNEBFCLO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DICABFHGHPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_GNEPAIKBPMD_DICABFHGHPD_OFFSET))(this);
	}
};
