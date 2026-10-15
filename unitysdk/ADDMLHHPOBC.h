#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADDMLHHPOBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5531D0)

inline static constexpr unsigned int ADDMLHHPOBC_TypeDefinitionIndex = 37232;

	class ADDMLHHPOBC : public ::System::Object
	{
	public:
		::System::UInt32 JCPHIHJEBMI; // 0x10
		::System::UInt32 LJMNNBMALLL; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMLHHPOBC_CTOR_OFFSET))(this);
		}

	};
