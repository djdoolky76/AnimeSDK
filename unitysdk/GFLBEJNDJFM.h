#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFLBEJNDJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA79A00)

inline static constexpr unsigned int GFLBEJNDJFM_TypeDefinitionIndex = 44768;

	class GFLBEJNDJFM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLBEJNDJFM_CTOR_OFFSET))(this);
		}

	};
