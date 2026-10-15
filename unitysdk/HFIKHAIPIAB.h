#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFIKHAIPIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7BAA0)

inline static constexpr unsigned int HFIKHAIPIAB_TypeDefinitionIndex = 65531;

	class HFIKHAIPIAB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIKHAIPIAB_CTOR_OFFSET))(this);
		}

	};
