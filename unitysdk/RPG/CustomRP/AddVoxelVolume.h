#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_ADDVOXELVOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0xE48DEB0)

namespace RPG::CustomRP
{
	class AddVoxelVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ADDVOXELVOLUME_CTOR_OFFSET))(this);
		}

	};
}
