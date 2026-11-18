#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJEOJMNIMLN;
class FGCOIBFFCHB;
class LGINJIKKBJA;
namespace UnityEngine { class RectTransform; }

#define BJEOJMNIMLN_MDPGJJAMFEC_CBIEMHACDKF_OFFSET UNITYSDK_OFFSET(0x1691E530)
#define BJEOJMNIMLN_MDPGJJAMFEC_HFKAIDPPJND_OFFSET UNITYSDK_OFFSET(0x1691EAD0)
#define BJEOJMNIMLN_MDPGJJAMFEC_MPAIBJJDGKF_OFFSET UNITYSDK_OFFSET(0x1691E830)
#define BJEOJMNIMLN_MDPGJJAMFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E520)

inline static constexpr unsigned int BJEOJMNIMLN_MDPGJJAMFEC_TypeDefinitionIndex = 72590;

class BJEOJMNIMLN_MDPGJJAMFEC : public ::System::Object
{
public:
	::UnityEngine::RectTransform* KACEKHFEKMK; // 0x10
	::FGCOIBFFCHB* HJFCBMMPLKO; // 0x18
	::LGINJIKKBJA* JEPEJDNMFOK; // 0x20
	::BJEOJMNIMLN* KLHPEBKNIFB; // 0x28
	::System::Int32 APPDLNNMAMI; // 0x30
	::System::Int32 PIFIGHDAANF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEOJMNIMLN_MDPGJJAMFEC__CTOR_OFFSET))(this);
	}

	::System::Void CBIEMHACDKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEOJMNIMLN_MDPGJJAMFEC_CBIEMHACDKF_OFFSET))(this);
	}

	::System::Void MPAIBJJDGKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEOJMNIMLN_MDPGJJAMFEC_MPAIBJJDGKF_OFFSET))(this);
	}

	::System::Void HFKAIDPPJND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEOJMNIMLN_MDPGJJAMFEC_HFKAIDPPJND_OFFSET))(this);
	}
};
