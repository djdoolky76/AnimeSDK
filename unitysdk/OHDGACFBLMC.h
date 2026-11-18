#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define OHDGACFBLMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B78A000)
#define OHDGACFBLMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B789F30)
#define OHDGACFBLMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B789D00)
#define OHDGACFBLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B789FF0)

inline static constexpr unsigned int OHDGACFBLMC_TypeDefinitionIndex = 90859;

class OHDGACFBLMC : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* HGEBLKNDDPG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* IOCJPLCLDKA; // 0x30
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDGACFBLMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHDGACFBLMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDGACFBLMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHDGACFBLMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
