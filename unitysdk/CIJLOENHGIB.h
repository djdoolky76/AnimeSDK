#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIJLOENHGIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCD0C0)

inline static constexpr unsigned int CIJLOENHGIB_TypeDefinitionIndex = 43936;

	class CIJLOENHGIB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJLOENHGIB_CTOR_OFFSET))(this);
		}

	};
