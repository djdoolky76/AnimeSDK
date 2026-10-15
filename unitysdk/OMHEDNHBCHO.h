#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMLPMKPFLAH.h"
class CCFBPCBMINH;
namespace UnityEngine { class GameObject; }

#define OMHEDNHBCHO_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0xBF2CDC0)
#define OMHEDNHBCHO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2CD60)
#define OMHEDNHBCHO_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0xBF2CD70)
#define OMHEDNHBCHO_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0xBF2CE70)
#define OMHEDNHBCHO_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0xBF2CE10)

inline static constexpr unsigned int OMHEDNHBCHO_TypeDefinitionIndex = 49528;

	class OMHEDNHBCHO : public ::EMLPMKPFLAH
	{
	public:
		::UnityEngine::GameObject* PANGKOPAOML; // 0x18
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OMHEDNHBCHO_CTOR_OFFSET))(this, a1);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + OMHEDNHBCHO_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + OMHEDNHBCHO_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + OMHEDNHBCHO_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + OMHEDNHBCHO_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

	};
