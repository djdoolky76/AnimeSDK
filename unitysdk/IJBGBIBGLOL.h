#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/CodeGeneration/Attributes/ContextAttribute.h"

#define IJBGBIBGLOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB49410)

inline static constexpr unsigned int IJBGBIBGLOL_TypeDefinitionIndex = 42815;

	class IJBGBIBGLOL : public ::Entitas::CodeGeneration::Attributes::ContextAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGBIBGLOL_CTOR_OFFSET))(this);
		}

	};
