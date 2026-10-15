#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDNEAMLDDG;
namespace RPG::AvatarSystem { class AvatarSkin; }

#define IMGJJEBKIFP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164C6910)
#define IMGJJEBKIFP_CTOR_OFFSET UNITYSDK_OFFSET(0x164C6A10)

inline static constexpr unsigned int IMGJJEBKIFP_TypeDefinitionIndex = 62616;

	class IMGJJEBKIFP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMGJJEBKIFP_CTOR_OFFSET))(this);
		}

		::EGDNEAMLDDG* BPLPBPMEODA(::RPG::AvatarSystem::AvatarSkin* a1)
		{
			return ((::EGDNEAMLDDG*(*)(::PVOID, ::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + IMGJJEBKIFP_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
