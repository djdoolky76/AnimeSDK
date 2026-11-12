#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCLLDPOGLCC_CTOR_OFFSET UNITYSDK_OFFSET(0xC674400)

inline static constexpr unsigned int OCLLDPOGLCC_TypeDefinitionIndex = 74952;

	class OCLLDPOGLCC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLLDPOGLCC_CTOR_OFFSET))(this);
		}

	};
