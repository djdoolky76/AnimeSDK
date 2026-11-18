#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }

#define HDDNCDNAANP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F24410)
#define HDDNCDNAANP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F24350)
#define HDDNCDNAANP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24400)

inline static constexpr unsigned int HDDNCDNAANP_TypeDefinitionIndex = 38589;

class HDDNCDNAANP : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::MoleMole::MonoGamepadNavigatableList* NHPHNNBMJBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDNCDNAANP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDDNCDNAANP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDDNCDNAANP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
