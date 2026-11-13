#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNHAGCKOLJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A36B010)
#define HNHAGCKOLJP_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x1A36AC10)

inline static constexpr unsigned int HNHAGCKOLJP_TypeDefinitionIndex = 63862;

	class HNHAGCKOLJP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHAGCKOLJP_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHAGCKOLJP_JJNFOPNOPBF_OFFSET))(this);
		}

	};
