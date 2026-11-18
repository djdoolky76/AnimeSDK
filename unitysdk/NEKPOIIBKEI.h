#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class KNLFLMMHALL_1;

#define NEKPOIIBKEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10D722C0)
#define NEKPOIIBKEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10D721C0)
#define NEKPOIIBKEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10D71D80)
#define NEKPOIIBKEI_PDJJDOJLNFA_OFFSET UNITYSDK_OFFSET(0x10D71FD0)
#define NEKPOIIBKEI__CTOR_OFFSET UNITYSDK_OFFSET(0x10D722B0)

inline static constexpr unsigned int NEKPOIIBKEI_TypeDefinitionIndex = 91473;

class NEKPOIIBKEI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LAKOLIAJFOF; // 0x18
	::FGCOIBFFCHB* DMGJFJOOMGC; // 0x20
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* NLDEEEHBKCI; // 0x28
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::FGCOIBFFCHB* HMHPLOLDMFN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKPOIIBKEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEKPOIIBKEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKPOIIBKEI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEKPOIIBKEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDJJDOJLNFA(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEKPOIIBKEI_PDJJDOJLNFA_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
