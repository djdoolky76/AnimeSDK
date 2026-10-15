#pragma once
#include "unitysdk/unitysdk.h"
class PIINMLJJIAF;

#define HGFAKLEOEGE_AEBCGOOEMLG_1_OFFSET UNITYSDK_OFFSET(0x2E7E6F0)
#define HGFAKLEOEGE_AEBCGOOEMLG_OFFSET UNITYSDK_OFFSET(0x2E7E580)
#define HGFAKLEOEGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0)
#define HGFAKLEOEGE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C80)
#define HGFAKLEOEGE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1D20)
#define HGFAKLEOEGE_GET_X_OFFSET UNITYSDK_OFFSET(0x1D00)
#define HGFAKLEOEGE_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D10)
#define HGFAKLEOEGE_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x2E7E640)

inline static constexpr unsigned int HGFAKLEOEGE_TypeDefinitionIndex = 70234;

	struct alignas(4) HGFAKLEOEGE
	{
		::System::Single _X_k__BackingField; // 0x10
		::System::Single _Y_k__BackingField; // 0x14
		::System::Single _Width_k__BackingField; // 0x18
		::System::Single _Height_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_GET_X_OFFSET))(this);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_GET_Y_OFFSET))(this);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_GET_WIDTH_OFFSET))(this);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Boolean AEBCGOOEMLG(::PIINMLJJIAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIINMLJJIAF*))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_AEBCGOOEMLG_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::PIINMLJJIAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIINMLJJIAF*))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_LCJMKJPECAP_OFFSET))(this, a1);
		}

		/*
		::System::Boolean AEBCGOOEMLG_1(::HGFAKLEOEGE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGFAKLEOEGE))((::PBYTE)hIl2Cpp + HGFAKLEOEGE_AEBCGOOEMLG_1_OFFSET))(this, a1);
		}
		*/

	};
