#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }

#define FKBFCMCNDMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1429CBA0)
#define FKBFCMCNDMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1429CA30)
#define FKBFCMCNDMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1429C810)
#define FKBFCMCNDMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1429CB90)

inline static constexpr unsigned int FKBFCMCNDMM_TypeDefinitionIndex = 75985;

class FKBFCMCNDMM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OCJOCLEDABL; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20
	::FGCOIBFFCHB* EMDDGPHHNCD; // 0x28
	::FGCOIBFFCHB* JADDEIBLLBC; // 0x30
	::FGCOIBFFCHB* KNNFOLKLNMI; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::FGCOIBFFCHB* CJBFFLCCFLC; // 0x48
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBFCMCNDMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKBFCMCNDMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBFCMCNDMM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKBFCMCNDMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
