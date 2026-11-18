#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class MeshRenderer; }

#define HOHKIPNODCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B1B420)
#define HOHKIPNODCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B1B360)
#define HOHKIPNODCF__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1B410)

inline static constexpr unsigned int HOHKIPNODCF_TypeDefinitionIndex = 64431;

class HOHKIPNODCF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::MeshRenderer* DKKEGNCIGEO; // 0x18
	::UnityEngine::MeshRenderer* FKODLMGNCGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHKIPNODCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOHKIPNODCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOHKIPNODCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
