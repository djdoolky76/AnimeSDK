#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define EPOEOJEADPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E3F450)
#define EPOEOJEADPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E3F370)
#define EPOEOJEADPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3F440)

inline static constexpr unsigned int EPOEOJEADPJ_TypeDefinitionIndex = 91709;

class EPOEOJEADPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DJKOBDEJNME; // 0x18
	::UnityEngine::UI::Button* PDACHPLBKIE; // 0x20
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOEOJEADPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPOEOJEADPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPOEOJEADPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
