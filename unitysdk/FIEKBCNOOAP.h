#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIEKBCNOOAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA401B0)

inline static constexpr unsigned int FIEKBCNOOAP_TypeDefinitionIndex = 42271;

	class FIEKBCNOOAP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEKBCNOOAP_CTOR_OFFSET))(this);
		}

	};
