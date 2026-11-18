#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IFAGBKPCPGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15EB16F0)
#define IFAGBKPCPGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15EB1590)
#define IFAGBKPCPGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15EB1330)
#define IFAGBKPCPGM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB16E0)

inline static constexpr unsigned int IFAGBKPCPGM_TypeDefinitionIndex = 48765;

class IFAGBKPCPGM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HJMOFMLMAOE; // 0x18
	::UnityEngine::Transform* BNABKFAKBBK; // 0x20
	::UnityEngine::Transform* MPJMKNJFJCE; // 0x28
	::FGCOIBFFCHB* LMOHHJJNDIP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EKHOAAPNBHI; // 0x38
	::LGINJIKKBJA* OMKJHHABFMC; // 0x40
	::LGINJIKKBJA* CJIKJDAFFDJ; // 0x48
	::UnityEngine::GameObject* ILAEFOANGAD; // 0x50
	::LGINJIKKBJA* IJMFONCIKLI; // 0x58
	::LGINJIKKBJA* EPACHBAPADM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGBKPCPGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFAGBKPCPGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGBKPCPGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IFAGBKPCPGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
