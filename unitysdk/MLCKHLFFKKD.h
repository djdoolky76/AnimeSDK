#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMiniScapeMapPage_MapIconDetailWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_TopWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define MLCKHLFFKKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1406AA40)
#define MLCKHLFFKKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1406A930)
#define MLCKHLFFKKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1406A760)
#define MLCKHLFFKKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1406AA30)

inline static constexpr unsigned int MLCKHLFFKKD_TypeDefinitionIndex = 74381;

class MLCKHLFFKKD : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIMiniScapeMapPage_TopWidgetController*>* JIKEHPNIEBP; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController*>* BOGHCBIHHBF; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIMiniScapeMapPage_MapWidgetController*>* PFNAFELKHHP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKHLFFKKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLCKHLFFKKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLCKHLFFKKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKHLFFKKD_KGEBDLGBGNM_OFFSET))(this);
	}
};
