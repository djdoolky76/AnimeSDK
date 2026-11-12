#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKEJJBPGGOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC18730)

inline static constexpr unsigned int EKEJJBPGGOI_TypeDefinitionIndex = 43232;

	class EKEJJBPGGOI : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEJJBPGGOI_CTOR_OFFSET))(this);
		}

	};
