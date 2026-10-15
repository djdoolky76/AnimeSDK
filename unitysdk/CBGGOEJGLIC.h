#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CBGGOEJGLIC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A2F00)

inline static constexpr unsigned int CBGGOEJGLIC_TypeDefinitionIndex = 72406;

	class CBGGOEJGLIC : public ::System::Object
	{
	public:
		::System::Boolean CNLLNBEDJCF; // 0x10
		::System::Boolean ALIDAAEHMEE; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGGOEJGLIC_CTOR_OFFSET))(this);
		}

	};
