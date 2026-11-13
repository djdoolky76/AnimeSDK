#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
class CFNBLNHMHGO;
namespace RPG::Client { class PreDownloadAsset; }

#define AHPGFIBMGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19B2CBE0)
#define AHPGFIBMGJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B2CCC0)
#define AHPGFIBMGJJ_ENTER_OFFSET UNITYSDK_OFFSET(0x19B2CDC0)
#define AHPGFIBMGJJ_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x19B2CF10)
#define AHPGFIBMGJJ_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19B2CE20)
#define AHPGFIBMGJJ_LEAVE_OFFSET UNITYSDK_OFFSET(0x19B2CE80)
#define AHPGFIBMGJJ_TICK_OFFSET UNITYSDK_OFFSET(0x19B2CD60)

inline static constexpr unsigned int AHPGFIBMGJJ_TypeDefinitionIndex = 62544;

	class AHPGFIBMGJJ : public ::RPG::Client::LoginPhase
	{
	public:
		::RPG::Client::PreDownloadAsset* JOGNPLJEMKB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPGFIBMGJJ_GETGAMEPHASETYPE_OFFSET))(this);
		}

	};
