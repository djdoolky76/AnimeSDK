#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseWallCustomData.h"

#define IRI_CURVEWALLCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB8680A0)

inline static constexpr unsigned int IRI_CurveWallCustomData_TypeDefinitionIndex = 48196;

	class IRI_CurveWallCustomData : public ::IRI_BaseWallCustomData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_CURVEWALLCUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
