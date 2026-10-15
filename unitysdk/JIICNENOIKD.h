#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JIICNENOIKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1FB620)
#define JIICNENOIKD_OGDMAKFJMKA_OFFSET UNITYSDK_OFFSET(0xB1FB5D0)

inline static constexpr unsigned int JIICNENOIKD_TypeDefinitionIndex = 77438;

	class JIICNENOIKD : public ::System::Object
	{
	public:
		::System::UInt32 MPIMEEAIELI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIICNENOIKD_CTOR_OFFSET))(this);
		}

		::System::UInt32 OGDMAKFJMKA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIICNENOIKD_OGDMAKFJMKA_OFFSET))(this);
		}

	};
