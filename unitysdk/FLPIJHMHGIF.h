#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLPIJHMHGIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20D5D0)

inline static constexpr unsigned int FLPIJHMHGIF_TypeDefinitionIndex = 43202;

	class FLPIJHMHGIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPIJHMHGIF_CTOR_OFFSET))(this);
		}

	};
