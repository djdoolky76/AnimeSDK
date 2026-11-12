#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMENAJEGBJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBBA2C0)

inline static constexpr unsigned int PMENAJEGBJK_TypeDefinitionIndex = 44436;

	class PMENAJEGBJK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMENAJEGBJK_CTOR_OFFSET))(this);
		}

	};
