#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GIOGNBEDPJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149D9B70)
#define GIOGNBEDPJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149D9AB0)
#define GIOGNBEDPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x149D9B60)

inline static constexpr unsigned int GIOGNBEDPJH_TypeDefinitionIndex = 48985;

class GIOGNBEDPJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x18
	::UnityEngine::RectTransform* CCLINMHLGFJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOGNBEDPJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIOGNBEDPJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIOGNBEDPJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
