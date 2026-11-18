#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshFilter; }

#define FHPDIGKJAMN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14AD5480)
#define FHPDIGKJAMN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14AD5370)
#define FHPDIGKJAMN__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD5470)

inline static constexpr unsigned int FHPDIGKJAMN_TypeDefinitionIndex = 73364;

class FHPDIGKJAMN : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::UnityEngine::MeshFilter* BKGCMJADLMD; // 0x20
	::UnityEngine::GameObject* DDDMIOJGDBM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPDIGKJAMN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHPDIGKJAMN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHPDIGKJAMN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
