#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CFINHCPMLBB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC49E30)

inline static constexpr unsigned int CFINHCPMLBB_TypeDefinitionIndex = 69677;

	class CFINHCPMLBB : public ::System::Object
	{
	public:
		::System::Single NJMDINEDIJC; // 0x10
		::System::Boolean KIIGHBPPBHP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFINHCPMLBB_CTOR_OFFSET))(this);
		}

	};
