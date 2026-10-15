#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;

#define HEKDFBKLLMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C57C70)
#define HEKDFBKLLMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C57C80)
#define HEKDFBKLLMM_DLMDLOIBMCH_OFFSET UNITYSDK_OFFSET(0x15C57DD0)
#define HEKDFBKLLMM_ENTER_OFFSET UNITYSDK_OFFSET(0x15C57CC0)
#define HEKDFBKLLMM_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x15C57F50)
#define HEKDFBKLLMM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15C57E70)
#define HEKDFBKLLMM_LEAVE_OFFSET UNITYSDK_OFFSET(0x15C57ED0)
#define HEKDFBKLLMM_TICK_OFFSET UNITYSDK_OFFSET(0x15C57E10)

inline static constexpr unsigned int HEKDFBKLLMM_TypeDefinitionIndex = 61118;

	class HEKDFBKLLMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void DLMDLOIBMCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKDFBKLLMM_DLMDLOIBMCH_OFFSET))(this);
		}

	};
