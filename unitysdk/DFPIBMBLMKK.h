#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define DFPIBMBLMKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19D5E4E0)
#define DFPIBMBLMKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19D5E400)
#define DFPIBMBLMKK__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5E4D0)

inline static constexpr unsigned int DFPIBMBLMKK_TypeDefinitionIndex = 81661;

class DFPIBMBLMKK : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* GNOJGANMLCF; // 0x18
	::MonoUITableScrollV2* ECEDECACOGN; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPIBMBLMKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFPIBMBLMKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFPIBMBLMKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
