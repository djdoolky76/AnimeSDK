#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NDAEFCMNODB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C758240)

inline static constexpr unsigned int NDAEFCMNODB_TypeDefinitionIndex = 36879;

	class NDAEFCMNODB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAEFCMNODB_CTOR_OFFSET))(this);
		}

	};
