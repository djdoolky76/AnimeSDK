#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CJPLCMJGJHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19713410)
#define CJPLCMJGJHP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19713380)
#define CJPLCMJGJHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x197131D0)
#define CJPLCMJGJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x19713400)

inline static constexpr unsigned int CJPLCMJGJHP_TypeDefinitionIndex = 65428;

class CJPLCMJGJHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KNLPBPPPHBE; // 0x18
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::UnityEngine::RectTransform* CFDKADMHPPN; // 0x30
	::UnityEngine::Transform* NLADLFCHHBO; // 0x38
	::UnityEngine::Transform* KKBHLPCGFLN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPLCMJGJHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJPLCMJGJHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJPLCMJGJHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPLCMJGJHP_KGEBDLGBGNM_OFFSET))(this);
	}
};
