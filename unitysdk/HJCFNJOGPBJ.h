#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HJCFNJOGPBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB1030)

inline static constexpr unsigned int HJCFNJOGPBJ_TypeDefinitionIndex = 44721;

	class HJCFNJOGPBJ : public ::System::Object
	{
	public:
		::System::UInt32 MIOBMOCCOHF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNJOGPBJ_CTOR_OFFSET))(this);
		}

	};
