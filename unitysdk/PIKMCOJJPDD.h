#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define PIKMCOJJPDD_AAHCJBJLOPK_OFFSET UNITYSDK_OFFSET(0x1D9CC990)
#define PIKMCOJJPDD_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x1D9CCA60)
#define PIKMCOJJPDD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1D9CC7F0)
#define PIKMCOJJPDD_MFBMGEICNIH_OFFSET UNITYSDK_OFFSET(0x1D9CCAB0)
#define PIKMCOJJPDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CCA00)

inline static constexpr unsigned int PIKMCOJJPDD_TypeDefinitionIndex = 82691;

class PIKMCOJJPDD
{
public:
	::UnityEngine::RectTransform* GACHKMCKLOH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKMCOJJPDD__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PIKMCOJJPDD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* AAHCJBJLOPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKMCOJJPDD_AAHCJBJLOPK_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + PIKMCOJJPDD_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::String* MFBMGEICNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKMCOJJPDD_MFBMGEICNIH_OFFSET))(this);
	}
};
