#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GMPMKKLLNFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC78830)

inline static constexpr unsigned int GMPMKKLLNFC_TypeDefinitionIndex = 42947;

	class GMPMKKLLNFC : public ::System::Object
	{
	public:
		::System::Int32 KDMNHBHAOGD; // 0x10
		::System::UInt32 CMKLGECICPG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPMKKLLNFC_CTOR_OFFSET))(this);
		}

	};
