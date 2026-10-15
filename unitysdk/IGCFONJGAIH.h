#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGCFONJGAIH_CTOR_OFFSET UNITYSDK_OFFSET(0x163E7590)
#define IGCFONJGAIH_DHOCFJDCLLN_OFFSET UNITYSDK_OFFSET(0x163E7510)
#define IGCFONJGAIH_PDJHGGFBNPP_OFFSET UNITYSDK_OFFSET(0x163E7420)

inline static constexpr unsigned int IGCFONJGAIH_TypeDefinitionIndex = 63203;

	class IGCFONJGAIH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCFONJGAIH_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* PDJHGGFBNPP()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCFONJGAIH_PDJHGGFBNPP_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* DHOCFJDCLLN(::RPG::Client::AvatarRoleType a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + IGCFONJGAIH_DHOCFJDCLLN_OFFSET))(this, a1);
		}

	};
