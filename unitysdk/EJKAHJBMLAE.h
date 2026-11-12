#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJKAHJBMLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x164287C0)

inline static constexpr unsigned int EJKAHJBMLAE_TypeDefinitionIndex = 65668;

	class EJKAHJBMLAE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKAHJBMLAE_CTOR_OFFSET))(this);
		}

	};
