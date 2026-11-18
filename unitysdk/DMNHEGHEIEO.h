#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define DMNHEGHEIEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16978D10)
#define DMNHEGHEIEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16978BD0)
#define DMNHEGHEIEO__CTOR_OFFSET UNITYSDK_OFFSET(0x16978D00)

inline static constexpr unsigned int DMNHEGHEIEO_TypeDefinitionIndex = 74577;

class DMNHEGHEIEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Light* KBBCDHGBHJO; // 0x18
	::UnityEngine::Transform* BPLCMMDMCFL; // 0x20
	::UnityEngine::Light* BEPHNCCCCGN; // 0x28
	::UnityEngine::Light* PMFFIHLHLNA; // 0x30
	::UnityEngine::Light* MJEEEPEDOJM; // 0x38
	::UnityEngine::Transform* CECEJIGEOBM; // 0x40
	::UnityEngine::Transform* ONDPMDEBPME; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNHEGHEIEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DMNHEGHEIEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DMNHEGHEIEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
