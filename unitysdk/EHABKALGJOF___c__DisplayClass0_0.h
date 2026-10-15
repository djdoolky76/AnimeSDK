#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIHJENNBEE.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define EHABKALGJOF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FF030)
#define EHABKALGJOF___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5FF090)

inline static constexpr unsigned int EHABKALGJOF___c__DisplayClass0_0_TypeDefinitionIndex = 37143;

	class EHABKALGJOF___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::LDIHJENNBEE context; // 0x10
		::System::UInt32 islandConfigID; // 0x48
		::RPG::MVector2 positionDelta; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABKALGJOF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABKALGJOF___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this);
		}

	};
