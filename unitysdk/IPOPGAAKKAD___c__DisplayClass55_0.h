#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class IPOPGAAKKAD;

#define IPOPGAAKKAD___C__DISPLAYCLASS55_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C1E00)
#define IPOPGAAKKAD___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET UNITYSDK_OFFSET(0x1C6C2750)

inline static constexpr unsigned int IPOPGAAKKAD___c__DisplayClass55_0_TypeDefinitionIndex = 37309;

	class IPOPGAAKKAD___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::IFBFJDCECML* sparkleEntity; // 0x10
		::IPOPGAAKKAD* __4__this; // 0x18
		::System::UInt64 nextWaitEndTime; // 0x20
		::System::UInt32 sparkleOccurZ; // 0x28
		::System::UInt32 transferFloatingUnits; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C__DISPLAYCLASS55_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _PrepareSparkleOccur_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOPGAAKKAD___C__DISPLAYCLASS55_0__PREPARESPARKLEOCCUR_B__0_OFFSET))(this);
		}

	};
