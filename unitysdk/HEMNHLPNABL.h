#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define HEMNHLPNABL_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0x15C4E970)
#define HEMNHLPNABL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C4EB30)
#define HEMNHLPNABL_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0x15C4E8B0)

inline static constexpr unsigned int HEMNHLPNABL_TypeDefinitionIndex = 62854;

	class HEMNHLPNABL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNHLPNABL_CTOR_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HEMNHLPNABL_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + HEMNHLPNABL_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

	};
