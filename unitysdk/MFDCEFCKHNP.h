#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class KCLIKAPODAD;
namespace RPG::AvatarSystem { class IAvatar; }

#define MFDCEFCKHNP_CFHMMIFLAKP_OFFSET UNITYSDK_OFFSET(0xC1A29E0)
#define MFDCEFCKHNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A2BF0)
#define MFDCEFCKHNP_ODEBFADAKFA_OFFSET UNITYSDK_OFFSET(0xC1A2750)

inline static constexpr unsigned int MFDCEFCKHNP_TypeDefinitionIndex = 64297;

	class MFDCEFCKHNP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDCEFCKHNP_CTOR_OFFSET))(this);
		}

		::System::Boolean ODEBFADAKFA(::RPG::AvatarSystem::IAvatar* a1, ::KCLIKAPODAD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + MFDCEFCKHNP_ODEBFADAKFA_OFFSET))(this, a1, a2);
		}

		::GIDHOABFFFP* CFHMMIFLAKP(::GIDHOABFFFP* a1, ::RPG::AvatarSystem::IAvatar* a2, ::KCLIKAPODAD* a3)
		{
			return ((::GIDHOABFFFP*(*)(::PVOID, ::GIDHOABFFFP*, ::RPG::AvatarSystem::IAvatar*, ::KCLIKAPODAD*))((::PBYTE)hIl2Cpp + MFDCEFCKHNP_CFHMMIFLAKP_OFFSET))(this, a1, a2, a3);
		}

	};
