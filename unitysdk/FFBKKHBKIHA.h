#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define FFBKKHBKIHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB3A960)
#define FFBKKHBKIHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB3A880)
#define FFBKKHBKIHA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3A950)

inline static constexpr unsigned int FFBKKHBKIHA_TypeDefinitionIndex = 64463;

class FFBKKHBKIHA : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* GNOJGANMLCF; // 0x18
	::MoleMole::MonoGamepadModule* FIKGLDKAAPN; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBKKHBKIHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFBKKHBKIHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFBKKHBKIHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
