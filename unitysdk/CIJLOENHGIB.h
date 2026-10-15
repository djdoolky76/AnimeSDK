#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIJLOENHGIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B6780)

inline static constexpr unsigned int CIJLOENHGIB_TypeDefinitionIndex = 42955;

	class CIJLOENHGIB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJLOENHGIB_CTOR_OFFSET))(this);
		}

	};
