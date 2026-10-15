#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIGLIFEOKKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A36D30)
#define GIGLIFEOKKG_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x15A369C0)

inline static constexpr unsigned int GIGLIFEOKKG_TypeDefinitionIndex = 62451;

	class GIGLIFEOKKG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGLIFEOKKG_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGLIFEOKKG_JJNFOPNOPBF_OFFSET))(this);
		}

	};
