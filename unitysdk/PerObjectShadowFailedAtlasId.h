#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PEROBJECTSHADOWFAILEDATLASID__CTOR_OFFSET UNITYSDK_OFFSET(0x3D9940)

inline static constexpr unsigned int PerObjectShadowFailedAtlasId_TypeDefinitionIndex = 26292;

struct alignas(4) PerObjectShadowFailedAtlasId
{
	::System::Int32 entityType; // 0x10
	::System::Int32 rootID; // 0x14
	::System::Int32 entityID; // 0x18

	::System::Void _ctor(::System::Int32 entityType, ::System::Int32 rootID, ::System::Int32 entityID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PEROBJECTSHADOWFAILEDATLASID__CTOR_OFFSET))(this, entityType, rootID, entityID);
	}
};
