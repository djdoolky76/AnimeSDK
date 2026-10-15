#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HKKAKOCGGFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C667980)

inline static constexpr unsigned int HKKAKOCGGFD_TypeDefinitionIndex = 37168;

	class HKKAKOCGGFD : public ::System::Object
	{
	public:
		::System::Int32 MHLGBPAABOP; // 0x10
		::System::Int32 CAHHEOFINLB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKAKOCGGFD_CTOR_OFFSET))(this);
		}

	};
