#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAKMNIMFGGK;
class FKPKLHICPFO;

#define EAKMNIMFGGK___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1267DE50)
#define EAKMNIMFGGK___C__DISPLAYCLASS5_0__ACTIVATETALENTPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x1267DF50)

inline static constexpr unsigned int EAKMNIMFGGK___c__DisplayClass5_0_TypeDefinitionIndex = 80212;

	class EAKMNIMFGGK___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::EAKMNIMFGGK* __4__this; // 0x10
		::System::UInt32 talentPointID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKMNIMFGGK___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _ActivateTalentPoint_b__0(::FKPKLHICPFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKPKLHICPFO*))((::PBYTE)hIl2Cpp + EAKMNIMFGGK___C__DISPLAYCLASS5_0__ACTIVATETALENTPOINT_B__0_OFFSET))(this, a1);
		}

	};
