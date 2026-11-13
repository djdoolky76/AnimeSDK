#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BJCCHHGENPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7690)

inline static constexpr unsigned int BJCCHHGENPC_TypeDefinitionIndex = 43114;

	class BJCCHHGENPC : public ::System::Object
	{
	public:
		::System::Single MMNELBFMJOF; // 0x10
		::System::Single BPMOHECPBON; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCCHHGENPC_CTOR_OFFSET))(this);
		}

	};
