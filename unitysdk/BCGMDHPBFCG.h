#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define BCGMDHPBFCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150681F0)
#define BCGMDHPBFCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150680E0)
#define BCGMDHPBFCG__CTOR_OFFSET UNITYSDK_OFFSET(0x150681E0)

inline static constexpr unsigned int BCGMDHPBFCG_TypeDefinitionIndex = 79135;

class BCGMDHPBFCG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadRegion* DIMNHJAMLDG; // 0x18
	::MoleMole::MonoGamepadModule* JODKLLLCLCL; // 0x20
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x28
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGMDHPBFCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCGMDHPBFCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCGMDHPBFCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
