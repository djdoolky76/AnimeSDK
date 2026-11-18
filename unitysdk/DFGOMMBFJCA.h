#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define DFGOMMBFJCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A3BD60)
#define DFGOMMBFJCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A3BC60)
#define DFGOMMBFJCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A3BAC0)
#define DFGOMMBFJCA__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3BD50)

inline static constexpr unsigned int DFGOMMBFJCA_TypeDefinitionIndex = 46091;

class DFGOMMBFJCA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IIODNMGDNGA; // 0x18
	::FGCOIBFFCHB* DJCLCNCGGKA; // 0x20
	::FGCOIBFFCHB* FFEPLPINFCK; // 0x28
	::FGCOIBFFCHB* BMGEMBFEAID; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGOMMBFJCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFGOMMBFJCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGOMMBFJCA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFGOMMBFJCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
