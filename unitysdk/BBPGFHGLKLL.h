#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
class IKGHABAAAPL;

#define BBPGFHGLKLL_CLEAR_OFFSET UNITYSDK_OFFSET(0x170973C0)
#define BBPGFHGLKLL_CTOR_OFFSET UNITYSDK_OFFSET(0x17097450)

inline static constexpr unsigned int BBPGFHGLKLL_TypeDefinitionIndex = 79743;

	class BBPGFHGLKLL : public ::IAJLHKIHBFB
	{
	public:
		::IKGHABAAAPL* DBNOEJMGLJA; // 0x28
		::System::UInt32 HOGEMAHFFEF; // 0x30
		::System::Boolean EAKIMJOCDEK; // 0x34
		::System::Boolean IBBDJBJDMFH; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPGFHGLKLL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBPGFHGLKLL_CLEAR_OFFSET))(this);
		}

	};
