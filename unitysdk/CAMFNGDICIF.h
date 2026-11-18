#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CAMFNGDICIF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DBEB80)
#define CAMFNGDICIF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DBEA90)
#define CAMFNGDICIF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DBE900)
#define CAMFNGDICIF__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBEB70)

inline static constexpr unsigned int CAMFNGDICIF_TypeDefinitionIndex = 84178;

class CAMFNGDICIF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x18
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x20
	::MoleMole::MonoGamepadSelectable* AJIJIJKJAPF; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMFNGDICIF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAMFNGDICIF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMFNGDICIF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAMFNGDICIF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
