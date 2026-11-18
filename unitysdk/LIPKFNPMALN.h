#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LIPKFNPMALN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C59CD0)
#define LIPKFNPMALN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C59BD0)
#define LIPKFNPMALN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C59CC0)

inline static constexpr unsigned int LIPKFNPMALN_TypeDefinitionIndex = 68021;

class LIPKFNPMALN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OCIBCMLGGKJ; // 0x18
	::UnityEngine::Transform* FEBHDGHDNLC; // 0x20
	::UnityEngine::Transform* BJONDKFLOFA; // 0x28
	::UnityEngine::Transform* CJPGCMCBILK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPKFNPMALN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIPKFNPMALN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIPKFNPMALN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
