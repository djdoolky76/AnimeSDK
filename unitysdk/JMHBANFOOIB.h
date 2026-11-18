#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define JMHBANFOOIB_AHKANLDNAEM_OFFSET UNITYSDK_OFFSET(0x13866580)
#define JMHBANFOOIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x138669D0)
#define JMHBANFOOIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13866920)
#define JMHBANFOOIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13866340)
#define JMHBANFOOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x138669C0)

inline static constexpr unsigned int JMHBANFOOIB_TypeDefinitionIndex = 83268;

class JMHBANFOOIB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EGCLKHPGJHI; // 0x18
	::UnityEngine::Transform* FKBOGLJIFDO; // 0x20
	::MoleMole::MonoGamepadRegion* EAENJJNADKJ; // 0x28
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x30
	::UnityEngine::Transform* FJEKDCCGECK; // 0x38
	::LGINJIKKBJA* PHFJCEIPFIH; // 0x40
	::System::Collections::Generic::List_1<::System::Object*>* OOENDNEIFDO; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x50
	::MoleMole::MonoGamepadCustomList* NPJDEDDLGCK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHBANFOOIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMHBANFOOIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::System::Object*>* AHKANLDNAEM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMHBANFOOIB_AHKANLDNAEM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHBANFOOIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMHBANFOOIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
