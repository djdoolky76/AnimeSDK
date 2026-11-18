#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }

#define IEAJMLAJCIF_NGJNMHPGCOP_AJHECCABHFE_OFFSET UNITYSDK_OFFSET(0x15BFF7E0)
#define IEAJMLAJCIF_NGJNMHPGCOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BFF7F0)
#define IEAJMLAJCIF_NGJNMHPGCOP_GIBNAFKACOO_OFFSET UNITYSDK_OFFSET(0x15BFF890)
#define IEAJMLAJCIF_NGJNMHPGCOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BFF740)
#define IEAJMLAJCIF_NGJNMHPGCOP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFF7D0)

inline static constexpr unsigned int IEAJMLAJCIF_NGJNMHPGCOP_TypeDefinitionIndex = 51551;

class IEAJMLAJCIF_NGJNMHPGCOP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* _GKEBKLDGNFL_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_NGJNMHPGCOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_NGJNMHPGCOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void AJHECCABHFE(::MoleMole::MonoGamepadCustomList* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadCustomList*))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_NGJNMHPGCOP_AJHECCABHFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_NGJNMHPGCOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::MonoGamepadCustomList* GIBNAFKACOO()
	{
		return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAJMLAJCIF_NGJNMHPGCOP_GIBNAFKACOO_OFFSET))(this);
	}
};
