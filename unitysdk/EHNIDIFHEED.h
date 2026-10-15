#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define EHNIDIFHEED_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0x154B7F60)
#define EHNIDIFHEED_CTOR_OFFSET UNITYSDK_OFFSET(0x154B8020)
#define EHNIDIFHEED_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0x154B7E90)

	class EHNIDIFHEED : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNIDIFHEED_CTOR_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + EHNIDIFHEED_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + EHNIDIFHEED_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

	};
