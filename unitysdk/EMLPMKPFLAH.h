#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCFBPCBMINH;
namespace System { class String; }

#define EMLPMKPFLAH_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0x15546EE0)
#define EMLPMKPFLAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15546FE0)
#define EMLPMKPFLAH_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0x15546E90)
#define EMLPMKPFLAH_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0x15546F90)
#define EMLPMKPFLAH_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0x15546F30)

inline static constexpr unsigned int EMLPMKPFLAH_TypeDefinitionIndex = 49527;

	class EMLPMKPFLAH : public ::System::Object
	{
	public:
		::System::String* LFLPOOCDHDP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMLPMKPFLAH_CTOR_OFFSET))(this);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + EMLPMKPFLAH_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + EMLPMKPFLAH_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + EMLPMKPFLAH_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + EMLPMKPFLAH_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

	};
