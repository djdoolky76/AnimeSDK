#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GHKGOMOCHAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC69C0)

inline static constexpr unsigned int GHKGOMOCHAC_TypeDefinitionIndex = 39182;

class GHKGOMOCHAC : public ::IOONMNPCCNF
{
public:
	::System::Int32 EBEBHFGDMGP; // 0x18
	::UnityEngine::Vector3 DOHMCGFKPFF; // 0x1C
	::System::Single JBFOAKELCNK; // 0x28
	::System::Single KNAOGOONIFN; // 0x2C
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType MNBPKDHJEBF; // 0x30
	::System::Boolean GNJJDLNCOCG; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKGOMOCHAC__CTOR_OFFSET))(this);
	}
};
