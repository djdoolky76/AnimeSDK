#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JOOBAKOGPFG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CD41C0)
#define JOOBAKOGPFG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CD40E0)
#define JOOBAKOGPFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD41B0)

inline static constexpr unsigned int JOOBAKOGPFG_TypeDefinitionIndex = 45770;

class JOOBAKOGPFG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PBPPHLHOPNB; // 0x18
	::UnityEngine::Transform* PGJNIFLLKBM; // 0x20
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOBAKOGPFG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOOBAKOGPFG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JOOBAKOGPFG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
