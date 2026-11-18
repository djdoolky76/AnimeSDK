#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define NHMEMHGJIML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1728B370)
#define NHMEMHGJIML_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1728B2A0)
#define NHMEMHGJIML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1728B0C0)
#define NHMEMHGJIML__CTOR_OFFSET UNITYSDK_OFFSET(0x1728B360)

inline static constexpr unsigned int NHMEMHGJIML_TypeDefinitionIndex = 49914;

class NHMEMHGJIML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OMKKKALAKHL; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* MJMGANKGIFM; // 0x20
	::MoleMole::MonoGamepadRegion* DIMNHJAMLDG; // 0x28
	::GCIMMDDIFBJ* BDNMGIFNEOC; // 0x30
	::MonoUITableScrollV2* HALLMHJEAOA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMEMHGJIML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHMEMHGJIML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMEMHGJIML_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHMEMHGJIML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
