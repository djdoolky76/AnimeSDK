#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_VOXELBAKEDGI_CTOR_OFFSET UNITYSDK_OFFSET(0xE496F20)

namespace RPG::CustomRP
{
	class VoxelBakedGI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELBAKEDGI_CTOR_OFFSET))(this);
		}

	};
}
