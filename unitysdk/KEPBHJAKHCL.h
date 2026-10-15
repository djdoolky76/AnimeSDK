#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGICFAFGCPA.h"
class CCFBPCBMINH;
namespace System { class String; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define KEPBHJAKHCL_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0xB383C60)
#define KEPBHJAKHCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB383AE0)
#define KEPBHJAKHCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB383AB0)
#define KEPBHJAKHCL_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0xB383AF0)
#define KEPBHJAKHCL_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0xB384130)
#define KEPBHJAKHCL_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0xB383F40)
#define KEPBHJAKHCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB384180)

	class KEPBHJAKHCL : public ::DGICFAFGCPA
	{
	public:
		::UnityEngine::Rendering::VolumeComponent* BJHBCJJDKML; // 0x20
		::UnityEngine::Rendering::VolumeComponent* NHJPKHOMNCA; // 0x28
		::UnityEngine::Rendering::VolumeComponent* PBKIIDDODAD; // 0x30
		::UnityEngine::Rendering::VolumeComponent* LOJMPFBJHLC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Rendering::VolumeProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPBHJAKHCL_TOSTRING_OFFSET))(this);
		}

	};
