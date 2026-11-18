#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class ParticleSystem; }

#define JBLMMIPMPNM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1989D360)
#define JBLMMIPMPNM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1989D230)
#define JBLMMIPMPNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1989D350)

inline static constexpr unsigned int JBLMMIPMPNM_TypeDefinitionIndex = 92067;

class JBLMMIPMPNM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::ParticleSystem* FDMHMPIIMJK; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::UnityEngine::ParticleSystem* KLBFACJDCIC; // 0x28
	::UnityEngine::ParticleSystem* JKHDCFBPGLM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLMMIPMPNM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBLMMIPMPNM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBLMMIPMPNM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
