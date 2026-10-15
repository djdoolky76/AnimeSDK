#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEIDFMBKNAK_CTOR_OFFSET UNITYSDK_OFFSET(0x16323820)

inline static constexpr unsigned int BEIDFMBKNAK_TypeDefinitionIndex = 79199;

	class BEIDFMBKNAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIDFMBKNAK_CTOR_OFFSET))(this);
		}

	};
