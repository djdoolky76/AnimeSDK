#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLPHDEONPI___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C614320)
#define FCLPHDEONPI___C__DISPLAYCLASS3_0__ISDICECONTENTALLODDOREVEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C615610)

inline static constexpr unsigned int FCLPHDEONPI___c__DisplayClass3_0_TypeDefinitionIndex = 36284;

	class FCLPHDEONPI___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Boolean isOdd; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDiceContentAllOddOrEven_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__DISPLAYCLASS3_0__ISDICECONTENTALLODDOREVEN_B__0_OFFSET))(this, a1);
		}

	};
