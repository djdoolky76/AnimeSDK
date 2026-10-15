#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJCHKDLALDN;

#define HIOGHIDKJMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6393F0)

inline static constexpr unsigned int HIOGHIDKJMC_TypeDefinitionIndex = 36270;

	class HIOGHIDKJMC : public ::System::Object
	{
	public:
		::CJCHKDLALDN* OIBCHBJCHJE; // 0x10
		::CJCHKDLALDN* CJJMDMOCPDJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOGHIDKJMC_CTOR_OFFSET))(this);
		}

	};
