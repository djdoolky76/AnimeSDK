#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NDAEFCMNODB_CTOR_OFFSET UNITYSDK_OFFSET(0x16098BC0)

inline static constexpr unsigned int NDAEFCMNODB_TypeDefinitionIndex = 37807;

	class NDAEFCMNODB : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAEFCMNODB_CTOR_OFFSET))(this);
		}

	};
