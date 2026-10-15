#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMPMKKLLNFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB4E70)

inline static constexpr unsigned int GMPMKKLLNFC_TypeDefinitionIndex = 41972;

	class GMPMKKLLNFC : public ::System::Object
	{
	public:
		::System::UInt32 CMKLGECICPG; // 0x10
		::System::Int32 KDMNHBHAOGD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPMKKLLNFC_CTOR_OFFSET))(this);
		}

	};
