#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDIHJENNBEE.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define EHABKALGJOF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7806B0)
#define EHABKALGJOF___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1D780710)

inline static constexpr unsigned int EHABKALGJOF___c__DisplayClass0_0_TypeDefinitionIndex = 38071;

	class EHABKALGJOF___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::LDIHJENNBEE context; // 0x10
		::RPG::MVector2 positionDelta; // 0x48
		::System::UInt32 islandConfigID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABKALGJOF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABKALGJOF___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this);
		}

	};
