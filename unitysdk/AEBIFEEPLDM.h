#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define AEBIFEEPLDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB14A800)
#define AEBIFEEPLDM_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0xB14A990)
#define AEBIFEEPLDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB14A810)
#define AEBIFEEPLDM_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB14A8B0)

inline static constexpr unsigned int AEBIFEEPLDM_TypeDefinitionIndex = 67052;

	class AEBIFEEPLDM : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + AEBIFEEPLDM_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBIFEEPLDM_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBIFEEPLDM_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCard()
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBIFEEPLDM_GET_ROOMCARD_OFFSET))(this);
		}

	};
