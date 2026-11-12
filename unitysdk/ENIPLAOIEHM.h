#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
class EINCCFAGAHO;

#define ENIPLAOIEHM_CTOR_OFFSET UNITYSDK_OFFSET(0x164C0D60)
#define ENIPLAOIEHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164C0D90)
#define ENIPLAOIEHM_ENTER_OFFSET UNITYSDK_OFFSET(0x164C0DD0)
#define ENIPLAOIEHM_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x164C11F0)
#define ENIPLAOIEHM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x164C1110)
#define ENIPLAOIEHM_LEAVE_OFFSET UNITYSDK_OFFSET(0x164C1170)
#define ENIPLAOIEHM_TICK_OFFSET UNITYSDK_OFFSET(0x164C10B0)

inline static constexpr unsigned int ENIPLAOIEHM_TypeDefinitionIndex = 62506;

	class ENIPLAOIEHM : public ::System::Object
	{
	public:
		::EINCCFAGAHO* MOFHGHGKAFP; // 0x10
		::System::Void _ctor(::EINCCFAGAHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINCCFAGAHO*))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIPLAOIEHM_GETGAMEPHASETYPE_OFFSET))(this);
		}

	};
