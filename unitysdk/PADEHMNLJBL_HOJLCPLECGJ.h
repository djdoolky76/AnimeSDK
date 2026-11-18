#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define PADEHMNLJBL_HOJLCPLECGJ_FDCFHKCAJFP_OFFSET UNITYSDK_OFFSET(0x178AA0D0)
#define PADEHMNLJBL_HOJLCPLECGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x178AA0C0)

inline static constexpr unsigned int PADEHMNLJBL_HOJLCPLECGJ_TypeDefinitionIndex = 86766;

class PADEHMNLJBL_HOJLCPLECGJ : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshQueryAsyncOperation* CBBCJFPGBOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_HOJLCPLECGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FDCFHKCAJFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_HOJLCPLECGJ_FDCFHKCAJFP_OFFSET))(this);
	}
};
