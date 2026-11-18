#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define LCICNIONCIB_AHKJIBLLBEP_OFFSET UNITYSDK_OFFSET(0x17941C80)
#define LCICNIONCIB_AIKKFELBIEF_OFFSET UNITYSDK_OFFSET(0x17941C90)
#define LCICNIONCIB_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x17941C60)
#define LCICNIONCIB_CLPCKPEBPEN_OFFSET UNITYSDK_OFFSET(0x17941C50)
#define LCICNIONCIB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x17941A10)
#define LCICNIONCIB_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x17941C70)
#define LCICNIONCIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17941970)
#define LCICNIONCIB_KJGBKAFMBMJ_OFFSET UNITYSDK_OFFSET(0x17941CA0)
#define LCICNIONCIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179417F0)
#define LCICNIONCIB__CTOR_OFFSET UNITYSDK_OFFSET(0x17941BC0)

inline static constexpr unsigned int LCICNIONCIB_TypeDefinitionIndex = 77204;

class LCICNIONCIB : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _EFNNIBKFJEL_k__BackingField; // 0x28
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x30
	::FGCOIBFFCHB* _HHLFJGCELBG_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCICNIONCIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCICNIONCIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void CLPCKPEBPEN(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + LCICNIONCIB_CLPCKPEBPEN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCICNIONCIB_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + LCICNIONCIB_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::FGCOIBFFCHB* AHKJIBLLBEP()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCICNIONCIB_AHKJIBLLBEP_OFFSET))(this);
	}

	::System::Void AIKKFELBIEF(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + LCICNIONCIB_AIKKFELBIEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCICNIONCIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCICNIONCIB_EFKGNFCEENK_OFFSET))(this);
	}

	::FGCOIBFFCHB* KJGBKAFMBMJ()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCICNIONCIB_KJGBKAFMBMJ_OFFSET))(this);
	}
};
