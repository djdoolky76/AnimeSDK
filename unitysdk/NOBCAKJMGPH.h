#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LMNEKOLMGEM.h"
namespace RPG::AvatarSystem { class AvatarPath; }

#define NOBCAKJMGPH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC5D0780)
#define NOBCAKJMGPH_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D0880)

inline static constexpr unsigned int NOBCAKJMGPH_TypeDefinitionIndex = 64028;

	class NOBCAKJMGPH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBCAKJMGPH_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::AvatarPath* BPLPBPMEODA(::LMNEKOLMGEM a1)
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID, ::LMNEKOLMGEM))((::PBYTE)hIl2Cpp + NOBCAKJMGPH_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
