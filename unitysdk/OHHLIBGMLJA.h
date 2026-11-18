#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OHHLIBGMLJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F70D90)
#define OHHLIBGMLJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F70CD0)
#define OHHLIBGMLJA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F70D80)

inline static constexpr unsigned int OHHLIBGMLJA_TypeDefinitionIndex = 70910;

class OHHLIBGMLJA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* CBBKMFEBGGM; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLIBGMLJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHHLIBGMLJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHHLIBGMLJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
