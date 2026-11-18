#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HADOIMHCOCP_ACFICPGMHNL_OFFSET UNITYSDK_OFFSET(0x13E07300)

inline static constexpr unsigned int HADOIMHCOCP_TypeDefinitionIndex = 50621;

class HADOIMHCOCP : public ::System::Object
{
public:
	static ::System::Boolean ACFICPGMHNL(::UnityEngine::PhysicsScene AHGGAKHJMPI, ::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 HODAIDNDKHD, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + HADOIMHCOCP_ACFICPGMHNL_OFFSET))(AHGGAKHJMPI, EIIDOADGOIF, HODAIDNDKHD, FBNGKPGLADH);
	}
};
