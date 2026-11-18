#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define AENICMHEIBH_NPOOJDNNOCI_JBKLGLFMAEH_OFFSET UNITYSDK_OFFSET(0x17DD21E0)
#define AENICMHEIBH_NPOOJDNNOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD21D0)

inline static constexpr unsigned int AENICMHEIBH_NPOOJDNNOCI_TypeDefinitionIndex = 85672;

class AENICMHEIBH_NPOOJDNNOCI : public ::System::Object
{
public:
	::System::Func_1<::PipelineCamera::WorldBasicCameraData>* JEAMKOOJJJC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_NPOOJDNNOCI__CTOR_OFFSET))(this);
	}

	::System::Boolean JBKLGLFMAEH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_NPOOJDNNOCI_JBKLGLFMAEH_OFFSET))(this);
	}
};
