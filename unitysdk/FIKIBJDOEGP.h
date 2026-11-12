#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPHIFKIPMLI;
class FOPMBGADNJD;

#define FIKIBJDOEGP_CTOR_OFFSET UNITYSDK_OFFSET(0x166CD540)
#define FIKIBJDOEGP_EKMPMMLBNEL_OFFSET UNITYSDK_OFFSET(0x166CD5D0)

inline static constexpr unsigned int FIKIBJDOEGP_TypeDefinitionIndex = 63978;

	class FIKIBJDOEGP : public ::System::Object
	{
	public:
		::FOPMBGADNJD* JILBKMEGBDK; // 0x10
		::DPHIFKIPMLI* PMGONAJKJAE; // 0x18
		::System::Void _ctor(::FOPMBGADNJD* a1, ::DPHIFKIPMLI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FOPMBGADNJD*, ::DPHIFKIPMLI*))((::PBYTE)hIl2Cpp + FIKIBJDOEGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single EKMPMMLBNEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKIBJDOEGP_EKMPMMLBNEL_OFFSET))(this);
		}

	};
