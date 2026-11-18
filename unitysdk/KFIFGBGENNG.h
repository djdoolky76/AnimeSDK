#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KFIFGBGENNG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD3F3600)
#define KFIFGBGENNG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD3F3530)
#define KFIFGBGENNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD3F3380)
#define KFIFGBGENNG__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F35F0)

inline static constexpr unsigned int KFIFGBGENNG_TypeDefinitionIndex = 43374;

class KFIFGBGENNG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* EKFNNJIKOPL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PCLBNEDIPLK; // 0x38
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIFGBGENNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFIFGBGENNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFIFGBGENNG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIFGBGENNG_KGEBDLGBGNM_OFFSET))(this);
	}
};
