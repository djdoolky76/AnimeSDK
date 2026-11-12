#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLIMHAFFHCE_CTOR_OFFSET UNITYSDK_OFFSET(0x167A4CC0)
#define FLIMHAFFHCE_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x167A4BF0)

inline static constexpr unsigned int FLIMHAFFHCE_TypeDefinitionIndex = 63859;

	class FLIMHAFFHCE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIMHAFFHCE_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIMHAFFHCE_JJNFOPNOPBF_OFFSET))(this);
		}

	};
