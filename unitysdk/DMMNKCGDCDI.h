#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMMNKCGDCDI_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC5E70)

inline static constexpr unsigned int DMMNKCGDCDI_TypeDefinitionIndex = 65092;

	class DMMNKCGDCDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_CTOR_OFFSET))(this);
		}

	};
