#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerSettingType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerSettingItem; }

#define EOIJLIIHGJD_CTOR_OFFSET UNITYSDK_OFFSET(0x155C3C80)
#define EOIJLIIHGJD_LFNIDOPEMEA_OFFSET UNITYSDK_OFFSET(0x155C2B60)

inline static constexpr unsigned int EOIJLIIHGJD_TypeDefinitionIndex = 66694;

	class EOIJLIIHGJD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIJLIIHGJD_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerSettingItem* LFNIDOPEMEA(::RPG::Client::PlayerSettingType a1)
		{
			return ((::RPG::Client::PlayerSettingItem*(*)(::RPG::Client::PlayerSettingType))((::PBYTE)hIl2Cpp + EOIJLIIHGJD_LFNIDOPEMEA_OFFSET))(a1);
		}

	};
