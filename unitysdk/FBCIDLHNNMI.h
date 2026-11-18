#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define FBCIDLHNNMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16173270)
#define FBCIDLHNNMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x161731E0)
#define FBCIDLHNNMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x161730A0)
#define FBCIDLHNNMI__CTOR_OFFSET UNITYSDK_OFFSET(0x16173260)

inline static constexpr unsigned int FBCIDLHNNMI_TypeDefinitionIndex = 55989;

class FBCIDLHNNMI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIDLHNNMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBCIDLHNNMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBCIDLHNNMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIDLHNNMI_KGEBDLGBGNM_OFFSET))(this);
	}
};
