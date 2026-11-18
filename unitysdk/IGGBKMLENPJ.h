#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IGGBKMLENPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10144BC0)
#define IGGBKMLENPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10144B00)
#define IGGBKMLENPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10144BB0)

inline static constexpr unsigned int IGGBKMLENPJ_TypeDefinitionIndex = 48583;

class IGGBKMLENPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OPIEEKGCNPH; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGBKMLENPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IGGBKMLENPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IGGBKMLENPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
