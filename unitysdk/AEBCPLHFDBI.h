#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AEBCPLHFDBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84ABA0)

inline static constexpr unsigned int AEBCPLHFDBI_TypeDefinitionIndex = 42359;

	class AEBCPLHFDBI : public ::System::Object
	{
	public:
		::System::Single ECKNFNIPAKN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBCPLHFDBI_CTOR_OFFSET))(this);
		}

	};
