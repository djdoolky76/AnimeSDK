#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HBHHPIBODOC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19DEDBD0)
#define HBHHPIBODOC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19DEDAF0)
#define HBHHPIBODOC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEDBC0)

inline static constexpr unsigned int HBHHPIBODOC_TypeDefinitionIndex = 62887;

class HBHHPIBODOC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x20
	::UnityEngine::RectTransform* EHCDMOCLGGO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHHPIBODOC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBHHPIBODOC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBHHPIBODOC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
