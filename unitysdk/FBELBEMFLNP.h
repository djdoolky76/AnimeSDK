#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoLayoutElementProcessor;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define FBELBEMFLNP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F564E0)
#define FBELBEMFLNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F56420)
#define FBELBEMFLNP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F564D0)

inline static constexpr unsigned int FBELBEMFLNP_TypeDefinitionIndex = 61707;

class FBELBEMFLNP : public ::GIBMJLOJLKD
{
public:
	::MonoLayoutElementProcessor* EDKJGKFONAF; // 0x18
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBELBEMFLNP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBELBEMFLNP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBELBEMFLNP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
