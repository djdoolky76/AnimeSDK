#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ILHCHHNKIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC036C0)

inline static constexpr unsigned int ILHCHHNKIHI_TypeDefinitionIndex = 35315;

	class ILHCHHNKIHI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHCHHNKIHI_CTOR_OFFSET))(this);
		}

	};
