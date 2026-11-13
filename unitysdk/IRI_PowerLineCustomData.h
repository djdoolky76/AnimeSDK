#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"

#define IRI_POWERLINECUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19316D50)

inline static constexpr unsigned int IRI_PowerLineCustomData_TypeDefinitionIndex = 48592;

	class IRI_PowerLineCustomData : public ::IRI_BaseBuildingCustomData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_POWERLINECUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
