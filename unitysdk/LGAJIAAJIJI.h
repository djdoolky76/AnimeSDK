#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/System/Object.h"
class ABECADANPBO;
class KHOHPNEGHHN;

#define LGAJIAAJIJI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8DF410)
#define LGAJIAAJIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DF5C0)
#define LGAJIAAJIJI_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C8DF510)
#define LGAJIAAJIJI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C8DF580)

inline static constexpr unsigned int LGAJIAAJIJI_TypeDefinitionIndex = 43297;

	class LGAJIAAJIJI : public ::System::Object
	{
	public:
		::ABECADANPBO* CEEGJCAJAHB; // 0x10
		::ABECADANPBO* CDJBDBKGDIL; // 0x18
		::OEEKHELGHKF ANCGCNIEAAC; // 0x20
		::KHOHPNEGHHN* DHHKBENPHMH; // 0x30
		::System::UInt32 EEFDHJEDMEG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAJIAAJIJI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAJIAAJIJI_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAJIAAJIJI_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAJIAAJIJI_ONRECYCLE_OFFSET))(this);
		}

	};
