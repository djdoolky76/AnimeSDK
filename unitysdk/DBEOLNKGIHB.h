#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class ParticleSystem; }

#define DBEOLNKGIHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1689B490)
#define DBEOLNKGIHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1689B3B0)
#define DBEOLNKGIHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1689B480)

inline static constexpr unsigned int DBEOLNKGIHB_TypeDefinitionIndex = 51264;

class DBEOLNKGIHB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::ParticleSystem* LDLINDOBJAB; // 0x18
	::UnityEngine::ParticleSystem* AAMKJLCCIPO; // 0x20
	::UnityEngine::ParticleSystem* NMFGOBMNOEN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEOLNKGIHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBEOLNKGIHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBEOLNKGIHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
