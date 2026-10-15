#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DENMLFOJLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7310)

inline static constexpr unsigned int DENMLFOJLAA_TypeDefinitionIndex = 42229;

	class DENMLFOJLAA : public ::System::Object
	{
	public:
		::System::UInt32 AGIJPBDJILM; // 0x10
		::System::Int32 PMOHKEDFGHP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENMLFOJLAA_CTOR_OFFSET))(this);
		}

	};
