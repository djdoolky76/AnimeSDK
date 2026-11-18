#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LKJGMNJKDJK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E06960)
#define LKJGMNJKDJK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E06830)
#define LKJGMNJKDJK__CTOR_OFFSET UNITYSDK_OFFSET(0x15E06950)

inline static constexpr unsigned int LKJGMNJKDJK_TypeDefinitionIndex = 52644;

class LKJGMNJKDJK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CIICFFFFBFC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BCGNAGMNEMC; // 0x20
	::MonoUITableScrollV2* MGMKDJPOACK; // 0x28
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x30
	::MonoUITableScrollV2* HALLMHJEAOA; // 0x38
	::UnityEngine::GameObject* COKICACCFLK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJGMNJKDJK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKJGMNJKDJK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKJGMNJKDJK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
