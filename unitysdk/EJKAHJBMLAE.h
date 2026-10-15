#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJKAHJBMLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x154E0E00)

inline static constexpr unsigned int EJKAHJBMLAE_TypeDefinitionIndex = 64223;

	class EJKAHJBMLAE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKAHJBMLAE_CTOR_OFFSET))(this);
		}

	};
