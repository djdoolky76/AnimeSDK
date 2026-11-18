#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define KGNPGJAINIK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18625760)
#define KGNPGJAINIK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x186256A0)
#define KGNPGJAINIK__CTOR_OFFSET UNITYSDK_OFFSET(0x18625750)

inline static constexpr unsigned int KGNPGJAINIK_TypeDefinitionIndex = 69452;

class KGNPGJAINIK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x18
	::UnityEngine::Transform* AGLOILAOJNM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGJAINIK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGNPGJAINIK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGNPGJAINIK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
