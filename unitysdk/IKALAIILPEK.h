#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IKALAIILPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB49BC0)

inline static constexpr unsigned int IKALAIILPEK_TypeDefinitionIndex = 42930;

	class IKALAIILPEK : public ::System::Object
	{
	public:
		::System::UInt32 JKFEMPOIKGF; // 0x10
		::System::UInt32 HJPFGLAMCLE; // 0x14
		::System::UInt32 HODPDPAMIMJ; // 0x18
		::System::UInt32 DCLPKLDJIIH; // 0x1C
		::System::UInt32 MGPMDJOMMOK; // 0x20
		::System::UInt32 NHALIJLIIFK; // 0x24
		::System::UInt32 CHIKBDCJGCG; // 0x28
		::System::Boolean ALHKMDMOCON; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKALAIILPEK_CTOR_OFFSET))(this);
		}

	};
