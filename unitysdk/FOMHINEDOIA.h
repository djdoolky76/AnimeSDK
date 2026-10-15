#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LNNEBLLJHPC.h"
namespace RPG::AvatarSystem { class AvatarServant; }

#define FOMHINEDOIA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158F00B0)
#define FOMHINEDOIA_CTOR_OFFSET UNITYSDK_OFFSET(0x158F02C0)

inline static constexpr unsigned int FOMHINEDOIA_TypeDefinitionIndex = 62607;

	class FOMHINEDOIA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMHINEDOIA_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarServant* BPLPBPMEODA(::LNNEBLLJHPC a1)
		{
			return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID, ::LNNEBLLJHPC))((::PBYTE)hIl2Cpp + FOMHINEDOIA_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
