#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define LIJMJGIDIKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12A4CB30)
#define LIJMJGIDIKO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12A4CA60)
#define LIJMJGIDIKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12A4C810)
#define LIJMJGIDIKO__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4CB20)

inline static constexpr unsigned int LIJMJGIDIKO_TypeDefinitionIndex = 83884;

class LIJMJGIDIKO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::GameObject* EOLOLAJNFBN; // 0x20
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x38
	::FILNFMCNCFE* JAEAKEJOIIG; // 0x40
	::MoleMole::MonoGamepadSelectable* EBGJEBCKJPA; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UnityEngine::GameObject* APNLFGGEAOI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJMJGIDIKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIJMJGIDIKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LIJMJGIDIKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJMJGIDIKO_KGEBDLGBGNM_OFFSET))(this);
	}
};
