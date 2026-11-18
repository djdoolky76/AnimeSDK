#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define NFNMHGAOGHJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12100ED0)
#define NFNMHGAOGHJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12100E30)
#define NFNMHGAOGHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12100EC0)

inline static constexpr unsigned int NFNMHGAOGHJ_TypeDefinitionIndex = 58142;

class NFNMHGAOGHJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DGJIHEFCLKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNMHGAOGHJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFNMHGAOGHJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFNMHGAOGHJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
