#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIStrategyGuideSkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class MEKABAIJMNM_1;

#define HHEAGONAAGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17AF7BF0)
#define HHEAGONAAGL_EKKKAAIMHJN_OFFSET UNITYSDK_OFFSET(0x17AF79C0)
#define HHEAGONAAGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17AF7BA0)
#define HHEAGONAAGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17AF7800)
#define HHEAGONAAGL__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF7BE0)

inline static constexpr unsigned int HHEAGONAAGL_TypeDefinitionIndex = 67022;

class HHEAGONAAGL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* LIHKFDIGPEA; // 0x18
	::UnityEngine::RectTransform* CAEGOCLBPLD; // 0x20
	::UnityEngine::RectTransform* LFHKCKIGEDC; // 0x28
	::UnityEngine::RectTransform* FBGEPNDCKAL; // 0x30
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* NCOELMLPKPL; // 0x38
	::UnityEngine::RectTransform* BOBKBLPPBIB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEAGONAAGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEAGONAAGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEAGONAAGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* EKKKAAIMHJN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEAGONAAGL_EKKKAAIMHJN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEAGONAAGL_KGEBDLGBGNM_OFFSET))(this);
	}
};
