#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJEIDMOBAJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1862EC80)
#define KJEIDMOBAJJ_FNAMMHBLNPO_OFFSET UNITYSDK_OFFSET(0x1862E9F0)
#define KJEIDMOBAJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1862EBD0)
#define KJEIDMOBAJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1862E810)
#define KJEIDMOBAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1862EC70)

inline static constexpr unsigned int KJEIDMOBAJJ_TypeDefinitionIndex = 48867;

class KJEIDMOBAJJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* AGBDDGBIJMC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x38
	::UnityEngine::RectTransform* HDFFCAEFPLD; // 0x40
	::LGINJIKKBJA* MAHNABIKKDL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEIDMOBAJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJEIDMOBAJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEIDMOBAJJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJEIDMOBAJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FNAMMHBLNPO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJEIDMOBAJJ_FNAMMHBLNPO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
