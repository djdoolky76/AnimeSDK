#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPJLKGGKKFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA39FA0)

inline static constexpr unsigned int MPJLKGGKKFH_TypeDefinitionIndex = 67784;

	class MPJLKGGKKFH : public ::System::Object
	{
	public:
		::System::UInt32 Version; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJLKGGKKFH_CTOR_OFFSET))(this);
		}

	};
