#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
template <typename T> class MEKABAIJMNM_1;

#define ONLDEGEBMJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178A3290)
#define ONLDEGEBMJF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178A31A0)
#define ONLDEGEBMJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178A2FC0)
#define ONLDEGEBMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3280)

inline static constexpr unsigned int ONLDEGEBMJF_TypeDefinitionIndex = 86867;

class ONLDEGEBMJF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HCNBOMDIGCM; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::Animation* FAABDMMGJCH; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x30
	::MonoUITableScrollV2* DMIBHHPLHPM; // 0x38
	::UnityEngine::Transform* AGLOILAOJNM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLDEGEBMJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ONLDEGEBMJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ONLDEGEBMJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLDEGEBMJF_KGEBDLGBGNM_OFFSET))(this);
	}
};
