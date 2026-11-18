#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define HKCBBPBCEDH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x12E62750)
#define HKCBBPBCEDH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E626D0)
#define HKCBBPBCEDH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E62560)
#define HKCBBPBCEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x12E62900)

inline static constexpr unsigned int HKCBBPBCEDH_TypeDefinitionIndex = 46591;

class HKCBBPBCEDH : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x28
	::UnityEngine::RectTransform* FMLHPKIHFJC; // 0x30
	::UnityEngine::RectTransform* FNJAEKAMGPO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCBBPBCEDH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKCBBPBCEDH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCBBPBCEDH_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCBBPBCEDH_KGEBDLGBGNM_OFFSET))(this);
	}
};
