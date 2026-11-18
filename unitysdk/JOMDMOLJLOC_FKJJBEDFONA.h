#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define JOMDMOLJLOC_FKJJBEDFONA_MPHGJBIAMHF_OFFSET UNITYSDK_OFFSET(0x13C42FF0)
#define JOMDMOLJLOC_FKJJBEDFONA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C42FE0)

inline static constexpr unsigned int JOMDMOLJLOC_FKJJBEDFONA_TypeDefinitionIndex = 77103;

class JOMDMOLJLOC_FKJJBEDFONA : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_FKJJBEDFONA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 MPHGJBIAMHF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_FKJJBEDFONA_MPHGJBIAMHF_OFFSET))(this);
	}
};
