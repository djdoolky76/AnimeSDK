#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define DKLMLMFPLFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D777150)

inline static constexpr unsigned int DKLMLMFPLFB_TypeDefinitionIndex = 37805;

	class DKLMLMFPLFB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLMLMFPLFB_CTOR_OFFSET))(this);
		}

	};
