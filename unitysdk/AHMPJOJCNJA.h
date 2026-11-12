#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace System { class String; }

#define AHMPJOJCNJA_CTOR_OFFSET UNITYSDK_OFFSET(0xF148370)
#define AHMPJOJCNJA_DIHELALOJIM_OFFSET UNITYSDK_OFFSET(0xF1482B0)
#define AHMPJOJCNJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF148320)
#define AHMPJOJCNJA_EPHPOJNAABH_OFFSET UNITYSDK_OFFSET(0xF148170)
#define AHMPJOJCNJA_IMLCEFIENLA_OFFSET UNITYSDK_OFFSET(0xF148300)
#define AHMPJOJCNJA_JBACAJDGFMD_OFFSET UNITYSDK_OFFSET(0xF1481E0)
#define AHMPJOJCNJA_LCHDEPNMOOF_OFFSET UNITYSDK_OFFSET(0xF148250)
#define AHMPJOJCNJA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xF148100)

inline static constexpr unsigned int AHMPJOJCNJA_TypeDefinitionIndex = 58764;

	class AHMPJOJCNJA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AdventureCharacterConfig* CKJJCNCOCKB; // 0x18
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x20
		::System::UInt32 GHBANBOFIOH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EPHPOJNAABH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_EPHPOJNAABH_OFFSET))(this);
		}

		::RPG::Client::IAvatarSkinData* JBACAJDGFMD()
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_JBACAJDGFMD_OFFSET))(this);
		}

		::System::String* LCHDEPNMOOF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_LCHDEPNMOOF_OFFSET))(this);
		}

		::RPG::GameCore::BodySize DIHELALOJIM()
		{
			return ((::RPG::GameCore::BodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_DIHELALOJIM_OFFSET))(this);
		}

		::System::String* IMLCEFIENLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_IMLCEFIENLA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMPJOJCNJA_DISPOSE_OFFSET))(this);
		}

	};
