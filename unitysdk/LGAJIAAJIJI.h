#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/System/Object.h"
class ABECADANPBO;
class KHOHPNEGHHN;

#define LGAJIAAJIJI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90D700)
#define LGAJIAAJIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90D8B0)
#define LGAJIAAJIJI_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C90D800)
#define LGAJIAAJIJI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C90D870)

inline static constexpr unsigned int LGAJIAAJIJI_TypeDefinitionIndex = 43297;

	class LGAJIAAJIJI : public ::System::Object
	{
	public:
		::OEEKHELGHKF ANCGCNIEAAC; // 0x10
		::ABECADANPBO* CDJBDBKGDIL; // 0x20
		::ABECADANPBO* CEEGJCAJAHB; // 0x28
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
