#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_FEELNPOFJKH;
namespace UnityEngine { class AnimationCurve; }

#define FBAMLABJMKF_OABEILNIEOK_FAGALGDAFLF_OFFSET UNITYSDK_OFFSET(0x140DD660)
#define FBAMLABJMKF_OABEILNIEOK_JDDLJIDOKLG_OFFSET UNITYSDK_OFFSET(0x140DD680)
#define FBAMLABJMKF_OABEILNIEOK_NLIAJEOJOGD_OFFSET UNITYSDK_OFFSET(0x140DD670)
#define FBAMLABJMKF_OABEILNIEOK__CTOR_OFFSET UNITYSDK_OFFSET(0x140DD650)

inline static constexpr unsigned int FBAMLABJMKF_OABEILNIEOK_TypeDefinitionIndex = 78129;

class FBAMLABJMKF_OABEILNIEOK : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* IAKPGBCAAKM; // 0x10
	::FBAMLABJMKF_FEELNPOFJKH* EEMOEMFLABI; // 0x18
	::System::Single HACJFKBLODH; // 0x20
	::System::Single MDPPNMIPDMP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OABEILNIEOK__CTOR_OFFSET))(this);
	}

	::System::Void FAGALGDAFLF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OABEILNIEOK_FAGALGDAFLF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single NLIAJEOJOGD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OABEILNIEOK_NLIAJEOJOGD_OFFSET))(this);
	}

	::System::Void JDDLJIDOKLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_OABEILNIEOK_JDDLJIDOKLG_OFFSET))(this);
	}
};
