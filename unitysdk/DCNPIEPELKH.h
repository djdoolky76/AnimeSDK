#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define DCNPIEPELKH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149943F0)
#define DCNPIEPELKH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149942E0)
#define DCNPIEPELKH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14994130)
#define DCNPIEPELKH__CTOR_OFFSET UNITYSDK_OFFSET(0x149943E0)

inline static constexpr unsigned int DCNPIEPELKH_TypeDefinitionIndex = 84784;

class DCNPIEPELKH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PFIKOHOHNEB; // 0x18
	::UnityEngine::GameObject* IAPKABMDJNF; // 0x20
	::FGCOIBFFCHB* EKGEIPPHICF; // 0x28
	::FGCOIBFFCHB* LFCCIAKLDJE; // 0x30
	::UnityEngine::GameObject* HELAMPHDBEH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNPIEPELKH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCNPIEPELKH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNPIEPELKH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCNPIEPELKH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
