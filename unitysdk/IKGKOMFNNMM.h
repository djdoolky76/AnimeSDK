#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define IKGKOMFNNMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1987F560)
#define IKGKOMFNNMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1987F460)
#define IKGKOMFNNMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1987F550)

inline static constexpr unsigned int IKGKOMFNNMM_TypeDefinitionIndex = 82618;

class IKGKOMFNNMM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* LKJBJOCKFMM; // 0x18
	::UnityEngine::RectTransform* NJFPLCKMPAD; // 0x20
	::UnityEngine::RectTransform* MDKEPIIBIKO; // 0x28
	::UnityEngine::Transform* HGMNLNMGBBG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGKOMFNNMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKGKOMFNNMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKGKOMFNNMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
