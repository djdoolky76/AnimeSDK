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

#define KHIPGICKOPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19953B20)
#define KHIPGICKOPN_KANGAJIMFJC_OFFSET UNITYSDK_OFFSET(0x19953900)
#define KHIPGICKOPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19953A50)
#define KHIPGICKOPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x199536A0)
#define KHIPGICKOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x19953B10)

inline static constexpr unsigned int KHIPGICKOPN_TypeDefinitionIndex = 56873;

class KHIPGICKOPN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x18
	::MoleMole::MonoGamepadSelectable* BGIKLBLEDMG; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* JEAEFGNJAGB; // 0x30
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x38
	::UnityEngine::RectTransform* FHMJFENEGOL; // 0x40
	::UnityEngine::GameObject* MPFDMAPAHOO; // 0x48
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* IJGBDGOFGNK; // 0x58
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIPGICKOPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHIPGICKOPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIPGICKOPN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHIPGICKOPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* KANGAJIMFJC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHIPGICKOPN_KANGAJIMFJC_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
