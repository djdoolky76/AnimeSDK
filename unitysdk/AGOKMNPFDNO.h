#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MapIconDetailWidgetController; }
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define AGOKMNPFDNO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16D79DF0)
#define AGOKMNPFDNO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16D79D00)
#define AGOKMNPFDNO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16D79B80)
#define AGOKMNPFDNO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D79DE0)

inline static constexpr unsigned int AGOKMNPFDNO_TypeDefinitionIndex = 62005;

class AGOKMNPFDNO : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController*>* PFNAFELKHHP; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIInLevelPauseMiniscapeMapWidget_MapIconDetailWidgetController*>* BOGHCBIHHBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOKMNPFDNO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGOKMNPFDNO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGOKMNPFDNO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOKMNPFDNO_KGEBDLGBGNM_OFFSET))(this);
	}
};
