#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class F7A641F2D6618D94;
namespace UnityEngine { class GameObject; }

#define A4A68BBB87AD8181_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x1C17230)
#define A4A68BBB87AD8181_F457D0BB62BCFE58_OFFSET UNITYSDK_OFFSET(0x1C170F0)
#define A4A68BBB87AD8181_FBC0248000618FDD_OFFSET UNITYSDK_OFFSET(0x1C171E0)
#define A4A68BBB87AD8181_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1C17010)
#define A4A68BBB87AD8181__CTOR_OFFSET UNITYSDK_OFFSET(0x1C172C0)

inline static constexpr unsigned int A4A68BBB87AD8181_TypeDefinitionIndex = 9267;

class A4A68BBB87AD8181 : public ::System::Object
{
public:
	::System::Boolean BB5261064EB2E3CD; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 E84AEE09809FA1C0; // 0x14
	::UnityEngine::GameObject* E209E2642EA01B64; // 0x20

	::System::Void FBC0248000618FDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4A68BBB87AD8181_FBC0248000618FDD_OFFSET))(this);
	}

	::System::Void _ctor(::F7A641F2D6618D94* EC180A4636E8F65F)
	{
		return ((::System::Void(*)(::PVOID, ::F7A641F2D6618D94*))((::PBYTE)hIl2Cpp + A4A68BBB87AD8181__CTOR_OFFSET))(this, EC180A4636E8F65F);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4A68BBB87AD8181_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A16C8ED92C989C9B(::UnityEngine::Vector3 A0C1F1E95D5F6CA9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A4A68BBB87AD8181_A16C8ED92C989C9B_OFFSET))(this, A0C1F1E95D5F6CA9);
	}

	::System::Void F457D0BB62BCFE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4A68BBB87AD8181_F457D0BB62BCFE58_OFFSET))(this);
	}
};
