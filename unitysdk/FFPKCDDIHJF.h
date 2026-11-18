#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define FFPKCDDIHJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AC69E0)
#define FFPKCDDIHJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AC68D0)
#define FFPKCDDIHJF__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC69D0)

inline static constexpr unsigned int FFPKCDDIHJF_TypeDefinitionIndex = 47162;

class FFPKCDDIHJF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DNHLEFFOJAJ; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::UnityEngine::GameObject* JHMJIECHMFA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPKCDDIHJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFPKCDDIHJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFPKCDDIHJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
