#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PGMBDLEFILH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E8F20)

inline static constexpr unsigned int PGMBDLEFILH_TypeDefinitionIndex = 43805;

	class PGMBDLEFILH : public ::System::Object
	{
	public:
		::System::UInt32 IMDPJFEGIDF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMBDLEFILH_CTOR_OFFSET))(this);
		}

	};
