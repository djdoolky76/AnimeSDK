#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define DAFBJNCPKIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x123FE250)
#define DAFBJNCPKIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x123FE190)
#define DAFBJNCPKIB__CTOR_OFFSET UNITYSDK_OFFSET(0x123FE240)

inline static constexpr unsigned int DAFBJNCPKIB_TypeDefinitionIndex = 72859;

class DAFBJNCPKIB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animator* LKKIPKAANKL; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* HBADNCJHEOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFBJNCPKIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAFBJNCPKIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAFBJNCPKIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
