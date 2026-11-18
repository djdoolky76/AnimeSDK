#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }

#define EAFGLEIPIFO_MAPCBIEBLBJ_AJHECCABHFE_OFFSET UNITYSDK_OFFSET(0x148C2390)
#define EAFGLEIPIFO_MAPCBIEBLBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148C23B0)
#define EAFGLEIPIFO_MAPCBIEBLBJ_GIBNAFKACOO_OFFSET UNITYSDK_OFFSET(0x148C23A0)
#define EAFGLEIPIFO_MAPCBIEBLBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148C22F0)
#define EAFGLEIPIFO_MAPCBIEBLBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x148C2380)

inline static constexpr unsigned int EAFGLEIPIFO_MAPCBIEBLBJ_TypeDefinitionIndex = 91641;

class EAFGLEIPIFO_MAPCBIEBLBJ : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* _GKEBKLDGNFL_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_MAPCBIEBLBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_MAPCBIEBLBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void AJHECCABHFE(::MoleMole::MonoGamepadCustomList* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadCustomList*))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_MAPCBIEBLBJ_AJHECCABHFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MonoGamepadCustomList* GIBNAFKACOO()
	{
		return ((::MoleMole::MonoGamepadCustomList*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_MAPCBIEBLBJ_GIBNAFKACOO_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_MAPCBIEBLBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
