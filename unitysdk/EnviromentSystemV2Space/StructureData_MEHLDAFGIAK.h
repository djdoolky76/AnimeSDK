#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/BlendingValBase.h"

#define ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_MEHLDAFGIAK_CTOR_OFFSET UNITYSDK_OFFSET(0x156579F0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int StructureData_MEHLDAFGIAK_TypeDefinitionIndex = 49404;

	class StructureData_MEHLDAFGIAK : public ::EnviromentSystemV2Space::BlendingValBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_STRUCTUREDATA_MEHLDAFGIAK_CTOR_OFFSET))(this);
		}

	};
}
