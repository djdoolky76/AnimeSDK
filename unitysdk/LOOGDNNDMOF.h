#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }

#define LOOGDNNDMOF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A62D8F0)
#define LOOGDNNDMOF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A62D850)
#define LOOGDNNDMOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62D8E0)

inline static constexpr unsigned int LOOGDNNDMOF_TypeDefinitionIndex = 42832;

class LOOGDNNDMOF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOGDNNDMOF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOOGDNNDMOF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOOGDNNDMOF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
