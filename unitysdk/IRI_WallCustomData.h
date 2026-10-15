#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseWallCustomData.h"

#define IRI_WALLCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16537AD0)

	class IRI_WallCustomData : public ::IRI_BaseWallCustomData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_WALLCUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
