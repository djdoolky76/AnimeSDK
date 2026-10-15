#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }

#define GIHFFKJOJGP_BUILD_OFFSET UNITYSDK_OFFSET(0x15A37A00)
#define GIHFFKJOJGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A379E0)

inline static constexpr unsigned int GIHFFKJOJGP_TypeDefinitionIndex = 75135;

	class GIHFFKJOJGP
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* CIPONGCFEJP; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + GIHFFKJOJGP_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + GIHFFKJOJGP_BUILD_OFFSET))(this, a1);
		}

	};
