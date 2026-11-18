#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIStrategyGuideSkillLevelUpRecommendWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define DCAGEIKPGFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13286800)
#define DCAGEIKPGFF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13286730)
#define DCAGEIKPGFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13286550)
#define DCAGEIKPGFF__CTOR_OFFSET UNITYSDK_OFFSET(0x132867F0)

inline static constexpr unsigned int DCAGEIKPGFF_TypeDefinitionIndex = 79185;

class DCAGEIKPGFF : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIStrategyGuideSkillLevelUpRecommendWidgetController*>* KHGLJKKLDOE; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* LAAGKBIJKKL; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::RectTransform* OBKNMNGFOEI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAGEIKPGFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCAGEIKPGFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAGEIKPGFF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCAGEIKPGFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
