#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"

#define AAHBILOBJKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C877560)

inline static constexpr unsigned int AAHBILOBJKI_TypeDefinitionIndex = 42832;

	class AAHBILOBJKI : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHBILOBJKI_CTOR_OFFSET))(this);
		}

	};
