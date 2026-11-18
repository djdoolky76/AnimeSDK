#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define BBNFPBKAFMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13611450)
#define BBNFPBKAFMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136113B0)
#define BBNFPBKAFMI__CTOR_OFFSET UNITYSDK_OFFSET(0x13611440)

inline static constexpr unsigned int BBNFPBKAFMI_TypeDefinitionIndex = 60927;

class BBNFPBKAFMI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FNIHLNIEFAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNFPBKAFMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBNFPBKAFMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBNFPBKAFMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
