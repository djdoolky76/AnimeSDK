#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCLPHDEONPI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C614670)
#define FCLPHDEONPI___C__DISPLAYCLASS4_0__GETDICECONTENTODDOREVENCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1C615620)

	class FCLPHDEONPI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Boolean isOdd; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiceContentOddOrEvenCount_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__DISPLAYCLASS4_0__GETDICECONTENTODDOREVENCOUNT_B__0_OFFSET))(this, a1);
		}

	};
