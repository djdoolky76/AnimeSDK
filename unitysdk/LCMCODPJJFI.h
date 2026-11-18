#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define LCMCODPJJFI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15808F60)
#define LCMCODPJJFI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15808E50)
#define LCMCODPJJFI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15808CA0)
#define LCMCODPJJFI__CTOR_OFFSET UNITYSDK_OFFSET(0x15808F50)

inline static constexpr unsigned int LCMCODPJJFI_TypeDefinitionIndex = 58370;

class LCMCODPJJFI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IAPKABMDJNF; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::Animation* HELAMPHDBEH; // 0x28
	::FGCOIBFFCHB* EKGEIPPHICF; // 0x30
	::FGCOIBFFCHB* AIIBFBKDLJP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMCODPJJFI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCMCODPJJFI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCMCODPJJFI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMCODPJJFI_KGEBDLGBGNM_OFFSET))(this);
	}
};
