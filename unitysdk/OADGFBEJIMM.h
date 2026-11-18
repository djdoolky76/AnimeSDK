#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define OADGFBEJIMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE12CFE0)
#define OADGFBEJIMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE12CF00)
#define OADGFBEJIMM__CTOR_OFFSET UNITYSDK_OFFSET(0xE12CFD0)

inline static constexpr unsigned int OADGFBEJIMM_TypeDefinitionIndex = 52919;

class OADGFBEJIMM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OBEMLOACGAF; // 0x18
	::UnityEngine::Transform* JNGCNDGGIIE; // 0x20
	::UnityEngine::RectTransform* HKEOAPODEHP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGFBEJIMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OADGFBEJIMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OADGFBEJIMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
