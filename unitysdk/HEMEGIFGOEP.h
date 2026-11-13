#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarRowData; }

#define HEMEGIFGOEP_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1A205090)
#define HEMEGIFGOEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A205190)
#define HEMEGIFGOEP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A205100)

inline static constexpr unsigned int HEMEGIFGOEP_TypeDefinitionIndex = 64061;

	class HEMEGIFGOEP : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x10
		::RPG::GameCore::AvatarRowData* APPIHABBCGK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMEGIFGOEP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowData* ANALOEDDDHD()
		{
			return ((::RPG::GameCore::AvatarRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMEGIFGOEP_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HEMEGIFGOEP_KPJGDHLENIP_OFFSET))(this, a1);
		}

	};
