#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define LOAFHGHDDAH_HIACFIDMBNB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13D08B50)
#define LOAFHGHDDAH_HIACFIDMBNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D08A50)
#define LOAFHGHDDAH_HIACFIDMBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D08D00)

inline static constexpr unsigned int LOAFHGHDDAH_HIACFIDMBNB_TypeDefinitionIndex = 60747;

class LOAFHGHDDAH_HIACFIDMBNB : public ::MLJGPKJJPIL
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x28
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x30
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_HIACFIDMBNB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_HIACFIDMBNB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOAFHGHDDAH_HIACFIDMBNB_EFKGNFCEENK_OFFSET))(this);
	}
};
