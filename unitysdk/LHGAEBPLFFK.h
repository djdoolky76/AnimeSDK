#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LHGAEBPLFFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56E250)

inline static constexpr unsigned int LHGAEBPLFFK_TypeDefinitionIndex = 41748;

	class LHGAEBPLFFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHGAEBPLFFK_CTOR_OFFSET))(this);
		}

	};
