#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_ANAKEGFHCPI_OFFSET UNITYSDK_OFFSET(0xE1E2DF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_APPLYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xE1E3120)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE1E2DA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_CTOR_OFFSET UNITYSDK_OFFSET(0xE1E3340)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE1E30D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_PUSHRATETOOPERATIONS_OFFSET UNITYSDK_OFFSET(0xE1E3260)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossDissolveApplier_TypeDefinitionIndex = 79129;

	class TeamTowersBossDissolveApplier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DissolveRate; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* MEEPDDMNLCH; // 0x20
		::System::Single NCNGHODGIHO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PushRateToOperations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_PUSHRATETOOPERATIONS_OFFSET))(this);
		}

		::System::Void ApplyImmediate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_APPLYIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Void ANAKEGFHCPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_ANAKEGFHCPI_OFFSET))(this);
		}

	};
}
