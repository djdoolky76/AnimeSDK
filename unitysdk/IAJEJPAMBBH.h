#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define IAJEJPAMBBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E9CF40)
#define IAJEJPAMBBH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E9CE00)
#define IAJEJPAMBBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E9CC30)
#define IAJEJPAMBBH__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9CF30)

inline static constexpr unsigned int IAJEJPAMBBH_TypeDefinitionIndex = 60113;

class IAJEJPAMBBH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IMPIBMHLBHI; // 0x18
	::FGCOIBFFCHB* GEGNBGBACJK; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralNewHintWidgetController*>* LKCPFCFFILO; // 0x28
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJEJPAMBBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAJEJPAMBBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAJEJPAMBBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJEJPAMBBH_KGEBDLGBGNM_OFFSET))(this);
	}
};
