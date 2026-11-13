#pragma once
#include "unitysdk/unitysdk.h"
class PIINMLJJIAF;

#define HGFAKLEOEGE_AEBCGOOEMLG_1_OFFSET UNITYSDK_OFFSET(0x3EEC660)
#define HGFAKLEOEGE_AEBCGOOEMLG_OFFSET UNITYSDK_OFFSET(0x3EEC4F0)
#define HGFAKLEOEGE_CTOR_OFFSET UNITYSDK_OFFSET(0x7EFA30)
#define HGFAKLEOEGE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xFDD0D0)
#define HGFAKLEOEGE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xFDCAE0)
#define HGFAKLEOEGE_GET_X_OFFSET UNITYSDK_OFFSET(0x7CEEA0)
#define HGFAKLEOEGE_GET_Y_OFFSET UNITYSDK_OFFSET(0x7CEEB0)
#define HGFAKLEOEGE_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3EEC5B0)

inline static constexpr unsigned int HGFAKLEOEGE_TypeDefinitionIndex = 72200;

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
