#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LHGAEBPLFFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EFBF0)

inline static constexpr unsigned int LHGAEBPLFFK_TypeDefinitionIndex = 42723;

	class LHGAEBPLFFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGAEBPLFFK_CTOR_OFFSET))(this);
		}

	};
