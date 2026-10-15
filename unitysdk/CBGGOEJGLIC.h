#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CBGGOEJGLIC_CTOR_OFFSET UNITYSDK_OFFSET(0xC49BC00)

inline static constexpr unsigned int CBGGOEJGLIC_TypeDefinitionIndex = 72405;

	class CBGGOEJGLIC : public ::System::Object
	{
	public:
		::System::Boolean ALIDAAEHMEE; // 0x10
		::System::Boolean CNLLNBEDJCF; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGGOEJGLIC_CTOR_OFFSET))(this);
		}

	};
