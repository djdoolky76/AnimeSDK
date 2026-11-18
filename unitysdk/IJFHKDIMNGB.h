#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IJFHKDIMNGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1657A6F0)
#define IJFHKDIMNGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1657A600)
#define IJFHKDIMNGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1657A460)
#define IJFHKDIMNGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1657A6E0)

inline static constexpr unsigned int IJFHKDIMNGB_TypeDefinitionIndex = 81044;

class IJFHKDIMNGB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PBOPMKCPACD; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x30
	::MoleMole::MonoGamepadCustomList* NBGPKONDPKN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFHKDIMNGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJFHKDIMNGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFHKDIMNGB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJFHKDIMNGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
