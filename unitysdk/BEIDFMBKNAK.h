#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEIDFMBKNAK_CTOR_OFFSET UNITYSDK_OFFSET(0x16316DE0)

inline static constexpr unsigned int BEIDFMBKNAK_TypeDefinitionIndex = 79198;

	class BEIDFMBKNAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIDFMBKNAK_CTOR_OFFSET))(this);
		}

	};
