#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PHNPBBGKLLM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178D2FD0)
#define PHNPBBGKLLM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178D2EE0)
#define PHNPBBGKLLM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178D2CF0)
#define PHNPBBGKLLM__CTOR_OFFSET UNITYSDK_OFFSET(0x178D2FC0)

inline static constexpr unsigned int PHNPBBGKLLM_TypeDefinitionIndex = 59570;

class PHNPBBGKLLM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* CGFEGKFCHNG; // 0x18
	::UnityEngine::RectTransform* LFHIEGCJOJF; // 0x20
	::UnityEngine::RectTransform* ANFCBNPNCOC; // 0x28
	::LGINJIKKBJA* MFGPHOIPMJK; // 0x30
	::LGINJIKKBJA* JLEKONGGFNI; // 0x38
	::UnityEngine::Transform* FGGGODDHGHC; // 0x40
	::UnityEngine::RectTransform* BABMABFCFKM; // 0x48
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPBBGKLLM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHNPBBGKLLM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHNPBBGKLLM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPBBGKLLM_KGEBDLGBGNM_OFFSET))(this);
	}
};
