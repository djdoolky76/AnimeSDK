#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class MEKABAIJMNM_1;

#define JAIBFMCNAGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15C32360)
#define JAIBFMCNAGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15C32220)
#define JAIBFMCNAGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15C31FD0)
#define JAIBFMCNAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15C32350)

inline static constexpr unsigned int JAIBFMCNAGP_TypeDefinitionIndex = 84970;

class JAIBFMCNAGP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x18
	::UnityEngine::RectTransform* JKMMABOFLNP; // 0x20
	::FGCOIBFFCHB* CBKKJAGHKNO; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::MonoUITableScrollV2* JBCLMABGEEN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x40
	::UnityEngine::RectTransform* EHFNKKMKEAJ; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* FJJPAEOHGCB; // 0x50
	::MoleMole::MonoGamepadNavigatableList* KFBEIJLKJII; // 0x58
	::FGCOIBFFCHB* OFEDHLNNKIC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIBFMCNAGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAIBFMCNAGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAIBFMCNAGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIBFMCNAGP_KGEBDLGBGNM_OFFSET))(this);
	}
};
