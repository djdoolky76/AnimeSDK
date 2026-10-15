#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define EKBGEFFPJGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA54E70)

inline static constexpr unsigned int EKBGEFFPJGI_TypeDefinitionIndex = 42820;

	class EKBGEFFPJGI : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGEFFPJGI_CTOR_OFFSET))(this);
		}

	};
