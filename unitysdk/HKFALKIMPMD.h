#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define HKFALKIMPMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x147055C0)
#define HKFALKIMPMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14705490)
#define HKFALKIMPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x147055B0)

inline static constexpr unsigned int HKFALKIMPMD_TypeDefinitionIndex = 57609;

class HKFALKIMPMD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IHGOBCEDPAO; // 0x18
	::UnityEngine::RectTransform* MMNODNABFMP; // 0x20
	::UnityEngine::RectTransform* DHFGDHGFPEF; // 0x28
	::UnityEngine::RectTransform* PIINABPGJJB; // 0x30
	::UnityEngine::RectTransform* PBNJFIJBIGJ; // 0x38
	::UnityEngine::RectTransform* FFDFJNLJHJJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFALKIMPMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKFALKIMPMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKFALKIMPMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
