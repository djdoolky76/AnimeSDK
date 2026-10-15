#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MODIHPIFAPK;

#define IIHLCJPAGOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AA1B0)
#define IIHLCJPAGOK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6AA1C0)

inline static constexpr unsigned int IIHLCJPAGOK_TypeDefinitionIndex = 37195;

	class IIHLCJPAGOK : public ::System::Object
	{
	public:
		::MODIHPIFAPK* PDENFEFCAGN; // 0x10
		::System::Single PEIGAGALNMD; // 0x18
		::System::Void _ctor(::MODIHPIFAPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MODIHPIFAPK*))((::PBYTE)hIl2Cpp + IIHLCJPAGOK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHLCJPAGOK_EXECUTE_OFFSET))(this);
		}

	};
