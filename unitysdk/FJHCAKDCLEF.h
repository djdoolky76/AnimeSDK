#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleItemProgressPrefabType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FJHCAKDCLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x157B8700)

inline static constexpr unsigned int FJHCAKDCLEF_TypeDefinitionIndex = 47602;

	class FJHCAKDCLEF : public ::System::Object
	{
	public:
		::System::String* EDMBKLOAKIG; // 0x10
		::System::UInt32 OKPLNHKELKI; // 0x18
		::System::Int32 HCDEOKNIGKG; // 0x1C
		::RPG::Client::TextID PJHMJKEIGOA; // 0x20
		::RPG::Client::TextID NFCHLOMEGFA; // 0x30
		::RPG::GameCore::BattleItemProgressPrefabType ICDJHJKFGKK; // 0x40
		::System::Single FIJLEDEKBJP; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHCAKDCLEF_CTOR_OFFSET))(this);
		}

	};
