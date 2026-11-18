#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::Video { class VideoPlayer; }

#define FDIHFIJFJNM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140EB0E0)
#define FDIHFIJFJNM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140EB030)
#define FDIHFIJFJNM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140EAE90)
#define FDIHFIJFJNM__CTOR_OFFSET UNITYSDK_OFFSET(0x140EB0D0)

inline static constexpr unsigned int FDIHFIJFJNM_TypeDefinitionIndex = 76882;

class FDIHFIJFJNM : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* MNHOFEMCLNH; // 0x18
	::UnityEngine::Video::VideoPlayer* FEKAMKHOIMK; // 0x20
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIHFIJFJNM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDIHFIJFJNM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIHFIJFJNM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDIHFIJFJNM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
