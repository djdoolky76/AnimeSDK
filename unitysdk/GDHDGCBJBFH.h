#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GDHDGCBJBFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179D8F40)
#define GDHDGCBJBFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179D8E70)
#define GDHDGCBJBFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179D8CA0)
#define GDHDGCBJBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x179D8F30)

inline static constexpr unsigned int GDHDGCBJBFH_TypeDefinitionIndex = 90070;

class GDHDGCBJBFH : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::LGINJIKKBJA* IDMJCFNGOGI; // 0x28
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x38
	::UnityEngine::Transform* HNJKEIAGGEC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHDGCBJBFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDHDGCBJBFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHDGCBJBFH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDHDGCBJBFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
