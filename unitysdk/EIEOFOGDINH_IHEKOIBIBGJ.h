#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIEOFOGDINH;
class KJALACAGLNJ;
class PIIOAKOEACN;

#define EIEOFOGDINH_IHEKOIBIBGJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154B5670)
#define EIEOFOGDINH_IHEKOIBIBGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x154B5660)

inline static constexpr unsigned int EIEOFOGDINH_IHEKOIBIBGJ_TypeDefinitionIndex = 79717;

	class EIEOFOGDINH_IHEKOIBIBGJ : public ::System::Object
	{
	public:
		::KJALACAGLNJ* OMGDJHLGMGB; // 0x10
		::System::Void _ctor(::KJALACAGLNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJALACAGLNJ*))((::PBYTE)hIl2Cpp + EIEOFOGDINH_IHEKOIBIBGJ_CTOR_OFFSET))(this, a1);
		}

		::EIEOFOGDINH* BPLPBPMEODA(::PIIOAKOEACN* a1, ::System::UInt32 a2)
		{
			return ((::EIEOFOGDINH*(*)(::PVOID, ::PIIOAKOEACN*, ::System::UInt32))((::PBYTE)hIl2Cpp + EIEOFOGDINH_IHEKOIBIBGJ_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
