#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMLPMKPFLAH.h"
class CCFBPCBMINH;
namespace UnityEngine { class ScriptableObject; }

#define DGICFAFGCPA_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0xE84AA40)
#define DGICFAFGCPA_CTOR_OFFSET UNITYSDK_OFFSET(0xE84A9E0)
#define DGICFAFGCPA_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0xE84A9F0)
#define DGICFAFGCPA_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0xE84AAF0)
#define DGICFAFGCPA_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0xE84AA90)

inline static constexpr unsigned int DGICFAFGCPA_TypeDefinitionIndex = 49529;

	class DGICFAFGCPA : public ::EMLPMKPFLAH
	{
	public:
		::UnityEngine::ScriptableObject* CNADDNANHBL; // 0x18
		::System::Void _ctor(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + DGICFAFGCPA_CTOR_OFFSET))(this, a1);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + DGICFAFGCPA_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + DGICFAFGCPA_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + DGICFAFGCPA_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + DGICFAFGCPA_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

	};
