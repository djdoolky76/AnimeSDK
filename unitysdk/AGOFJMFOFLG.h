#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define AGOFJMFOFLG_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x154F7820)
#define AGOFJMFOFLG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154F78A0)
#define AGOFJMFOFLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154F7750)
#define AGOFJMFOFLG_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x154F7940)
#define AGOFJMFOFLG__CTOR_OFFSET UNITYSDK_OFFSET(0x154F7890)

inline static constexpr unsigned int AGOFJMFOFLG_TypeDefinitionIndex = 62664;

class AGOFJMFOFLG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PDACHPLBKIE; // 0x18
	::UnityEngine::Animation* MCHBBPJHNCK; // 0x20
	::UnityEngine::Animation* IEOIENFFIGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFJMFOFLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGOFJMFOFLG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + AGOFJMFOFLG_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGOFJMFOFLG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + AGOFJMFOFLG_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
