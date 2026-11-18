#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define FCPKGHCONKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14ABC890)
#define FCPKGHCONKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14ABC7D0)
#define FCPKGHCONKO__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABC880)

inline static constexpr unsigned int FCPKGHCONKO_TypeDefinitionIndex = 64156;

class FCPKGHCONKO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ILFODNLLKCP; // 0x18
	::UnityEngine::Camera* NGAJLCBIEAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPKGHCONKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCPKGHCONKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCPKGHCONKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
