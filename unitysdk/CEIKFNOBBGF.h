#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CEIKFNOBBGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11539B00)
#define CEIKFNOBBGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11539A30)
#define CEIKFNOBBGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115398C0)
#define CEIKFNOBBGF__CTOR_OFFSET UNITYSDK_OFFSET(0x11539AF0)

inline static constexpr unsigned int CEIKFNOBBGF_TypeDefinitionIndex = 41700;

class CEIKFNOBBGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::LGINJIKKBJA* KADDHBOOKAC; // 0x20
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKFNOBBGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEIKFNOBBGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEIKFNOBBGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKFNOBBGF_KGEBDLGBGNM_OFFSET))(this);
	}
};
