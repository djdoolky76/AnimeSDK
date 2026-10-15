#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLPHDEONPI___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C614790)
#define FCLPHDEONPI___C__DISPLAYCLASS5_0__ISDICECONTENTODDOREVENSPECIFICNUM_B__0_OFFSET UNITYSDK_OFFSET(0x1C615630)

inline static constexpr unsigned int FCLPHDEONPI___c__DisplayClass5_0_TypeDefinitionIndex = 36286;

	class FCLPHDEONPI___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Boolean isOdd; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDiceContentOddOrEvenSpecificNum_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__DISPLAYCLASS5_0__ISDICECONTENTODDOREVENSPECIFICNUM_B__0_OFFSET))(this, a1);
		}

	};
