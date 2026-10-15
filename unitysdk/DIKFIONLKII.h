#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GroupForceVisibleReason.h"
#include "unitysdk/RPG/GameCore/GroupInvisibleReason.h"
namespace RPG::GameCore { class GameEntity; }

#define DIKFIONLKII_AHBBDFJOLBL_OFFSET UNITYSDK_OFFSET(0xF209CE0)
#define DIKFIONLKII_CTOR_OFFSET UNITYSDK_OFFSET(0xF2098A0)
#define DIKFIONLKII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2098B0)
#define DIKFIONLKII_GHAAALIHOKN_OFFSET UNITYSDK_OFFSET(0xF209A70)
#define DIKFIONLKII_GHHOOCLEENA_OFFSET UNITYSDK_OFFSET(0xF209A10)
#define DIKFIONLKII_GMJEHEIHABD_OFFSET UNITYSDK_OFFSET(0xF20A2C0)
#define DIKFIONLKII_JOLOAIGMLEP_OFFSET UNITYSDK_OFFSET(0xF209E30)
#define DIKFIONLKII_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xF209900)

inline static constexpr unsigned int DIKFIONLKII_TypeDefinitionIndex = 57082;

	class DIKFIONLKII : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::ReasonBool_1<::RPG::GameCore::GroupInvisibleReason> EAHBDCJLJJO; // 0x18
		::RPG::Client::ReasonBool_1<::RPG::GameCore::GroupForceVisibleReason> GMMAGOGANEB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFIONLKII_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFIONLKII_DISPOSE_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1, ::RPG::GameCore::GroupInvisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GroupInvisibleReason))((::PBYTE)hIl2Cpp + DIKFIONLKII_NHPDCPKMNAM_OFFSET))(this, a1, a2);
		}

		::System::Void AHBBDFJOLBL(::System::Boolean a1, ::RPG::GameCore::GroupForceVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GroupForceVisibleReason))((::PBYTE)hIl2Cpp + DIKFIONLKII_AHBBDFJOLBL_OFFSET))(this, a1, a2);
		}

		::System::Void GHAAALIHOKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFIONLKII_GHAAALIHOKN_OFFSET))(this);
		}

		::System::Void JOLOAIGMLEP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIKFIONLKII_JOLOAIGMLEP_OFFSET))(this, a1, a2);
		}

		::System::Void GMJEHEIHABD(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIKFIONLKII_GMJEHEIHABD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHHOOCLEENA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKFIONLKII_GHHOOCLEENA_OFFSET))(this);
		}

	};
