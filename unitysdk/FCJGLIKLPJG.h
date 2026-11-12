#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCJGLIKLPJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D794950)

inline static constexpr unsigned int FCJGLIKLPJG_TypeDefinitionIndex = 37364;

	class FCJGLIKLPJG : public ::System::Object
	{
	public:
		::System::UInt32 CABBFBKCBCE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJGLIKLPJG_CTOR_OFFSET))(this);
		}

	};
