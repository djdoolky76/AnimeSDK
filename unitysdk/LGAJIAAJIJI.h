#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/System/Object.h"
class ABECADANPBO;
class KHOHPNEGHHN;

#define LGAJIAAJIJI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D639500)
#define LGAJIAAJIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6396B0)
#define LGAJIAAJIJI_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D639600)
#define LGAJIAAJIJI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D639670)

inline static constexpr unsigned int LGAJIAAJIJI_TypeDefinitionIndex = 44278;

	class LGAJIAAJIJI : public ::System::Object
	{
	public:
		::ABECADANPBO* CDJBDBKGDIL; // 0x10
		::ABECADANPBO* CEEGJCAJAHB; // 0x18
		::KHOHPNEGHHN* DHHKBENPHMH; // 0x20
		::OEEKHELGHKF ANCGCNIEAAC; // 0x28
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
