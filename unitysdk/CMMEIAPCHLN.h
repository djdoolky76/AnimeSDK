#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define CMMEIAPCHLN_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0x1B1A3D10)
#define CMMEIAPCHLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A3E70)
#define CMMEIAPCHLN_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0x1B1A3C50)

inline static constexpr unsigned int CMMEIAPCHLN_TypeDefinitionIndex = 64294;

	class CMMEIAPCHLN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMEIAPCHLN_CTOR_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + CMMEIAPCHLN_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + CMMEIAPCHLN_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

	};
