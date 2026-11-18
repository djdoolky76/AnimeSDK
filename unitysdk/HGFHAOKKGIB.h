#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTargetRole_TagNumWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRole_TargetWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define HGFHAOKKGIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10103940)
#define HGFHAOKKGIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10103890)
#define HGFHAOKKGIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10103710)
#define HGFHAOKKGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x10103930)

inline static constexpr unsigned int HGFHAOKKGIB_TypeDefinitionIndex = 92196;

class HGFHAOKKGIB : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTargetRole_TagNumWidgetController*>* JPADHFANGGJ; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIFlowerMainTargetRole_TargetWidgetController*>* KEHECMCDLFC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFHAOKKGIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGFHAOKKGIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFHAOKKGIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGFHAOKKGIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
