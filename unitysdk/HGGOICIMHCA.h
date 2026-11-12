#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define HGGOICIMHCA_CTOR_OFFSET UNITYSDK_OFFSET(0x16BE94E0)

inline static constexpr unsigned int HGGOICIMHCA_TypeDefinitionIndex = 50826;

	class HGGOICIMHCA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGOICIMHCA_CTOR_OFFSET))(this);
		}

	};
