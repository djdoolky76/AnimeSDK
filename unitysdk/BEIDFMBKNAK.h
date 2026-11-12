#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEIDFMBKNAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DAAB0)

inline static constexpr unsigned int BEIDFMBKNAK_TypeDefinitionIndex = 81976;

	class BEIDFMBKNAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIDFMBKNAK_CTOR_OFFSET))(this);
		}

	};
