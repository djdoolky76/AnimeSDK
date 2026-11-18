#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;

#define EBHIBDPOCGG_MLHMFAOJOEE_MHJPJDGHCDF_OFFSET UNITYSDK_OFFSET(0x157A9EF0)
#define EBHIBDPOCGG_MLHMFAOJOEE__CTOR_OFFSET UNITYSDK_OFFSET(0x157A9EE0)

inline static constexpr unsigned int EBHIBDPOCGG_MLHMFAOJOEE_TypeDefinitionIndex = 10419;

class EBHIBDPOCGG_MLHMFAOJOEE : public ::System::Object
{
public:
	::Share::EAvatarSkillType OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIBDPOCGG_MLHMFAOJOEE__CTOR_OFFSET))(this);
	}

	::System::Boolean MHJPJDGHCDF(::BPDOBLDMEGB* HEAJMIGHEHG)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + EBHIBDPOCGG_MLHMFAOJOEE_MHJPJDGHCDF_OFFSET))(this, HEAJMIGHEHG);
	}
};
