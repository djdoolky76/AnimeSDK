#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ServantRowData; }

#define GBHNGJPNJKM_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x15950CA0)
#define GBHNGJPNJKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15950EE0)
#define GBHNGJPNJKM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15950D80)
#define GBHNGJPNJKM_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15950E10)

inline static constexpr unsigned int GBHNGJPNJKM_TypeDefinitionIndex = 62636;

	class GBHNGJPNJKM : public ::System::Object
	{
	public:
		::RPG::GameCore::ServantRowData* APPIHABBCGK; // 0x10
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNGJPNJKM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ServantRowData* ANALOEDDDHD()
		{
			return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNGJPNJKM_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + GBHNGJPNJKM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHNGJPNJKM_LJBCDJNNBJH_OFFSET))(this);
		}

	};
