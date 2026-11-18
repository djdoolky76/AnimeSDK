#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ADJCNCEHLOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144BF650)
#define ADJCNCEHLOP_KANGAJIMFJC_OFFSET UNITYSDK_OFFSET(0x144BF450)
#define ADJCNCEHLOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144BF5A0)
#define ADJCNCEHLOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144BF230)
#define ADJCNCEHLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x144BF640)

inline static constexpr unsigned int ADJCNCEHLOP_TypeDefinitionIndex = 49790;

class ADJCNCEHLOP : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::MoleMole::MonoGamepadSelectable* BGIKLBLEDMG; // 0x20
	::UnityEngine::GameObject* MPFDMAPAHOO; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* IJGBDGOFGNK; // 0x30
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x38
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x40
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x48
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJCNCEHLOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADJCNCEHLOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* KANGAJIMFJC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADJCNCEHLOP_KANGAJIMFJC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJCNCEHLOP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ADJCNCEHLOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
