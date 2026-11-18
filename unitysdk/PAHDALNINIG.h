#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define PAHDALNINIG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B4E040)
#define PAHDALNINIG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B4DF70)
#define PAHDALNINIG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B4DE00)
#define PAHDALNINIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4E030)

inline static constexpr unsigned int PAHDALNINIG_TypeDefinitionIndex = 84136;

class PAHDALNINIG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FDIECHNADCK; // 0x18
	::UnityEngine::Transform* NMJNJADPCJL; // 0x20
	::UnityEngine::Animation* IJDPDOHOCGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHDALNINIG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAHDALNINIG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAHDALNINIG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHDALNINIG_KGEBDLGBGNM_OFFSET))(this);
	}
};
