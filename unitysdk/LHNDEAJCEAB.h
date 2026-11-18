#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define LHNDEAJCEAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A312480)
#define LHNDEAJCEAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A312370)
#define LHNDEAJCEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A312470)

inline static constexpr unsigned int LHNDEAJCEAB_TypeDefinitionIndex = 57310;

class LHNDEAJCEAB : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18
	::UnityEngine::GameObject* DNHLEFFOJAJ; // 0x20
	::UnityEngine::GameObject* JHMJIECHMFA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNDEAJCEAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHNDEAJCEAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHNDEAJCEAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
