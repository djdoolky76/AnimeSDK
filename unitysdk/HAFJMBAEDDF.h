#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HAFJMBAEDDF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D09580)
#define HAFJMBAEDDF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D094D0)
#define HAFJMBAEDDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D09330)
#define HAFJMBAEDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x14D09570)

inline static constexpr unsigned int HAFJMBAEDDF_TypeDefinitionIndex = 57655;

class HAFJMBAEDDF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* COFEIDPKNIH; // 0x18
	::LGINJIKKBJA* BAKGGPNGFDB; // 0x20
	::UnityEngine::Transform* IKOFJEHPPAN; // 0x28
	::MonoUITableScrollV2* HEIAEFIDLAK; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJMBAEDDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAFJMBAEDDF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAFJMBAEDDF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFJMBAEDDF_KGEBDLGBGNM_OFFSET))(this);
	}
};
