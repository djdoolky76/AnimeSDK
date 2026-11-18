#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define EIGJMGAPOJD_AAHCJBJLOPK_OFFSET UNITYSDK_OFFSET(0xFE158A0)
#define EIGJMGAPOJD_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0xFE15970)
#define EIGJMGAPOJD_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xFE15700)
#define EIGJMGAPOJD_MFBMGEICNIH_OFFSET UNITYSDK_OFFSET(0xFE159C0)
#define EIGJMGAPOJD__CTOR_OFFSET UNITYSDK_OFFSET(0xFE15910)

inline static constexpr unsigned int EIGJMGAPOJD_TypeDefinitionIndex = 81752;

class EIGJMGAPOJD
{
public:
	::UnityEngine::RectTransform* GACHKMCKLOH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGJMGAPOJD__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + EIGJMGAPOJD_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::String* AAHCJBJLOPK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGJMGAPOJD_AAHCJBJLOPK_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + EIGJMGAPOJD_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::String* MFBMGEICNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGJMGAPOJD_MFBMGEICNIH_OFFSET))(this);
	}
};
