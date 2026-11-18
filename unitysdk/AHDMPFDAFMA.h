#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define AHDMPFDAFMA_AAHCJBJLOPK_OFFSET UNITYSDK_OFFSET(0x14351D80)
#define AHDMPFDAFMA_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x14351E50)
#define AHDMPFDAFMA_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x14351BE0)
#define AHDMPFDAFMA_MFBMGEICNIH_OFFSET UNITYSDK_OFFSET(0x14351EA0)
#define AHDMPFDAFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x14351DF0)

inline static constexpr unsigned int AHDMPFDAFMA_TypeDefinitionIndex = 77857;

class AHDMPFDAFMA
{
public:
	::UnityEngine::RectTransform* GACHKMCKLOH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDMPFDAFMA__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + AHDMPFDAFMA_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* AAHCJBJLOPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDMPFDAFMA_AAHCJBJLOPK_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + AHDMPFDAFMA_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::String* MFBMGEICNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDMPFDAFMA_MFBMGEICNIH_OFFSET))(this);
	}
};
