#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/UnityEngine/Color.h"

class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define LKBBJAKGOMJ_AAHCJBJLOPK_OFFSET UNITYSDK_OFFSET(0x15E022E0)
#define LKBBJAKGOMJ_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x15E02470)
#define LKBBJAKGOMJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x15E01F70)
#define LKBBJAKGOMJ_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x15E025D0)
#define LKBBJAKGOMJ_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x15E024C0)
#define LKBBJAKGOMJ_LOPABKBANAN_OFFSET UNITYSDK_OFFSET(0x15E023C0)
#define LKBBJAKGOMJ_MFBMGEICNIH_OFFSET UNITYSDK_OFFSET(0x15E023B0)
#define LKBBJAKGOMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15E02350)

inline static constexpr unsigned int LKBBJAKGOMJ_TypeDefinitionIndex = 47723;

class LKBBJAKGOMJ
{
public:
	::UnityEngine::RectTransform* GACHKMCKLOH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* AAHCJBJLOPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_AAHCJBJLOPK_OFFSET))(this);
	}

	::System::String* MFBMGEICNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_MFBMGEICNIH_OFFSET))(this);
	}

	::UnityEngine::Color LOPABKBANAN()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_LOPABKBANAN_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_JHMPNJLFHKC_OFFSET))(this);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBBJAKGOMJ_HPPLBNIKOLN_OFFSET))(this);
	}
};
