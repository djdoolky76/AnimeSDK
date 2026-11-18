#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NDMGGBECLBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18FAF590)
#define NDMGGBECLBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18FAF3F0)
#define NDMGGBECLBH__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAF580)

inline static constexpr unsigned int NDMGGBECLBH_TypeDefinitionIndex = 85754;

class NDMGGBECLBH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NKADAPNGKAI; // 0x18
	::UnityEngine::RectTransform* NDGDFIIPJMK; // 0x20
	::UnityEngine::GameObject* LNLEGBAJONB; // 0x28
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x30
	::UnityEngine::RectTransform* AAJIHFCEABI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KKHPPEBABNE; // 0x40
	::UnityEngine::GameObject* FABCPKEMFMK; // 0x48
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x50
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x58
	::UnityEngine::RectTransform* CAMOKNIGBDE; // 0x60
	::UnityEngine::RectTransform* MKFAKNJAGDN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGGBECLBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDMGGBECLBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDMGGBECLBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
