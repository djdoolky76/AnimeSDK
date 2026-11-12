#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleItemProgressPrefabType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FJHCAKDCLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x166EAC50)

inline static constexpr unsigned int FJHCAKDCLEF_TypeDefinitionIndex = 48631;

	class FJHCAKDCLEF : public ::System::Object
	{
	public:
		::System::String* EDMBKLOAKIG; // 0x10
		::RPG::Client::TextID NFCHLOMEGFA; // 0x18
		::System::Int32 HCDEOKNIGKG; // 0x28
		::System::UInt32 OKPLNHKELKI; // 0x2C
		::System::Single FIJLEDEKBJP; // 0x30
		::RPG::GameCore::BattleItemProgressPrefabType ICDJHJKFGKK; // 0x34
		::RPG::Client::TextID PJHMJKEIGOA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHCAKDCLEF_CTOR_OFFSET))(this);
		}

	};
