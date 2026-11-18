#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define ELFPCJIGIAC_AGILOMBEANN_OFFSET UNITYSDK_OFFSET(0x158B9E10)
#define ELFPCJIGIAC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158BA120)
#define ELFPCJIGIAC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x158BA000)
#define ELFPCJIGIAC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158B9B00)
#define ELFPCJIGIAC__CTOR_OFFSET UNITYSDK_OFFSET(0x158BA110)

inline static constexpr unsigned int ELFPCJIGIAC_TypeDefinitionIndex = 77314;

class ELFPCJIGIAC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::LGINJIKKBJA* MEOOMOFCFNO; // 0x20
	::FGCOIBFFCHB* NBJOGPCPDML; // 0x28
	::MonoUITableScrollV2* PCKPPLABJBC; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::MoleMole::MonoGamepadNestedListDelegate* GDKBNCANMOJ; // 0x40
	::LGINJIKKBJA* MDPHMKAFHIH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FLNNPPEKAEB; // 0x50
	::KNLFLMMHALL_1<::System::Object*>* MJMGANKGIFM; // 0x58
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KJFLNFMDCFE; // 0x60
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* ALDHDAFHFIL; // 0x68
	::MoleMole::MonoGamepadCustomList* BGAOLDKCALP; // 0x70
	::LGINJIKKBJA* IFBBMANKNCN; // 0x78
	::MoleMole::UIGeneralButtonController* EPHPOEEOMHE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFPCJIGIAC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELFPCJIGIAC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFPCJIGIAC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELFPCJIGIAC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* AGILOMBEANN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELFPCJIGIAC_AGILOMBEANN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
