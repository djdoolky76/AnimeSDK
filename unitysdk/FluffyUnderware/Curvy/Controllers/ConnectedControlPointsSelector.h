#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONNECTEDCONTROLPOINTSSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE6DFB0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int ConnectedControlPointsSelector_TypeDefinitionIndex = 37448;

	class ConnectedControlPointsSelector : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CONNECTEDCONTROLPOINTSSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
