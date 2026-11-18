#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define CDLDPAPIAEB_DJMNMDONAFJ_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define CDLDPAPIAEB_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x3583D0)
#define CDLDPAPIAEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x145483F0)
#define CDLDPAPIAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCD30)

inline static constexpr unsigned int CDLDPAPIAEB_TypeDefinitionIndex = 54508;

struct alignas(4) CDLDPAPIAEB
{
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_EPDPPMJKMLF()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(CDLDPAPIAEB_TypeDefinitionIndex)->GetStaticField(0x4C6A0);
	}
	::System::Boolean _KNHFHHEIPHJ_k__BackingField; // 0x10

	::System::Void _ctor(::System::Boolean COMHKJLKMEL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDLDPAPIAEB__CTOR_OFFSET))(this, COMHKJLKMEL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLDPAPIAEB__CCTOR_OFFSET))();
	}

	::System::Void DJMNMDONAFJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDLDPAPIAEB_DJMNMDONAFJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLDPAPIAEB_PNNJKJEOHAL_OFFSET))(this);
	}
};
