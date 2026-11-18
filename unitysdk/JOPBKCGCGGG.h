#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/UnityEngine/Color.h"

class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define JOPBKCGCGGG_AAHCJBJLOPK_OFFSET UNITYSDK_OFFSET(0x130A09E0)
#define JOPBKCGCGGG_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x130A0BC0)
#define JOPBKCGCGGG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x130A0670)
#define JOPBKCGCGGG_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x130A0CD0)
#define JOPBKCGCGGG_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x130A0AB0)
#define JOPBKCGCGGG_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x130A0C10)
#define JOPBKCGCGGG_MFBMGEICNIH_OFFSET UNITYSDK_OFFSET(0x130A0CC0)
#define JOPBKCGCGGG__CTOR_OFFSET UNITYSDK_OFFSET(0x130A0A50)

inline static constexpr unsigned int JOPBKCGCGGG_TypeDefinitionIndex = 75960;

class JOPBKCGCGGG
{
public:
	::UnityEngine::RectTransform* GACHKMCKLOH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPBKCGCGGG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* AAHCJBJLOPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_AAHCJBJLOPK_OFFSET))(this);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::UnityEngine::Color LOPABKBANAN()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_LOPABKBANAN_OFFSET))(this);
	}

	::System::String* MFBMGEICNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_MFBMGEICNIH_OFFSET))(this);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPBKCGCGGG_HPPLBNIKOLN_OFFSET))(this);
	}
};
