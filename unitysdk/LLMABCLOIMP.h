#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LLMABCLOIMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E08CD0)
#define LLMABCLOIMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E08BC0)
#define LLMABCLOIMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08CC0)

inline static constexpr unsigned int LLMABCLOIMP_TypeDefinitionIndex = 74771;

class LLMABCLOIMP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* KEHPAOOHNOI; // 0x18
	::UnityEngine::GameObject* HEKPNMLHFNK; // 0x20
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMABCLOIMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLMABCLOIMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLMABCLOIMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
