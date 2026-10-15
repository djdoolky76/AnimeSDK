#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCEJJFNNBD;
class KFBPMGMFPLG;

#define KFBPMGMFPLG___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB38C880)
#define KFBPMGMFPLG___C__DISPLAYCLASS16_0__ONOPTIONSELECTED_B__0_OFFSET UNITYSDK_OFFSET(0xB38F020)

inline static constexpr unsigned int KFBPMGMFPLG___c__DisplayClass16_0_TypeDefinitionIndex = 80315;

	class KFBPMGMFPLG___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::KFBPMGMFPLG* __4__this; // 0x10
		::System::UInt32 employeeID; // 0x18
		::System::UInt32 optionID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnOptionSelected_b__0(::ICCEJJFNNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEJJFNNBD*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS16_0__ONOPTIONSELECTED_B__0_OFFSET))(this, a1);
		}

	};
