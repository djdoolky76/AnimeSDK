#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FJDNEDOCFHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EBBC60)
#define FJDNEDOCFHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EBBB90)
#define FJDNEDOCFHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EBBA20)
#define FJDNEDOCFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBBC50)

inline static constexpr unsigned int FJDNEDOCFHG_TypeDefinitionIndex = 49768;

class FJDNEDOCFHG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x18
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x20
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDNEDOCFHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJDNEDOCFHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDNEDOCFHG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FJDNEDOCFHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
