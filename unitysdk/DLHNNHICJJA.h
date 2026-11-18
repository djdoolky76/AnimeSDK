#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DLHNNHICJJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BA69C0)
#define DLHNNHICJJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BA68E0)
#define DLHNNHICJJA__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA69B0)

inline static constexpr unsigned int DLHNNHICJJA_TypeDefinitionIndex = 93049;

class DLHNNHICJJA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* PMCNDKMMFDG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JIJHGFHJJAJ; // 0x20
	::UnityEngine::GameObject* IKJDEIEGBDN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHNNHICJJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLHNNHICJJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLHNNHICJJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
