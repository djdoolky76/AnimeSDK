#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKMJKPEKOHM.h"
#include "unitysdk/BKMPCJNDLDL.h"
#include "unitysdk/PJACCBJJNLJ.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_PROJECT_CONFIG_CURVYSPLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C090570)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int CurvySplineData_TypeDefinitionIndex = 15817;

	class CurvySplineData : public ::System::Object
	{
	public:
		::BKMJKPEKOHM interpolation; // 0x10
		::PJACCBJJNLJ orientation; // 0x14
		::System::Boolean useOrientation; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single tension; // 0x1C
		::System::Single continuity; // 0x20
		::System::Single quality; // 0x24
		::BKMPCJNDLDL curvyType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_CURVYSPLINEDATA__CTOR_OFFSET))(this);
		}
	};
}
