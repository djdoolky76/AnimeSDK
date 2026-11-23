#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BA052A3113E9017A;
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define B0C745C463BA9FA0_A47BCAA43ED7396C_OFFSET UNITYSDK_OFFSET(0x1D2D530)
#define B0C745C463BA9FA0_BBFD3CECA00AFB5D_OFFSET UNITYSDK_OFFSET(0x1D2D400)
#define B0C745C463BA9FA0_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1D2D350)
#define B0C745C463BA9FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D6A0)

inline static constexpr unsigned int B0C745C463BA9FA0_TypeDefinitionIndex = 9957;

class B0C745C463BA9FA0 : public ::System::Object
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x10
	::UnityEngine::Animator* A6E0C410734A354A; // 0x18
	::UnityEngine::GameObject* EC47EE761522EA05; // 0x20

	::System::Void BBFD3CECA00AFB5D(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*))((::PBYTE)hIl2Cpp + B0C745C463BA9FA0_BBFD3CECA00AFB5D_OFFSET))(this, E6305B8DDD56CFBC);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC, ::BA052A3113E9017A* B3256601A274B16D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*, ::BA052A3113E9017A*))((::PBYTE)hIl2Cpp + B0C745C463BA9FA0__CTOR_OFFSET))(this, E6305B8DDD56CFBC, B3256601A274B16D);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0C745C463BA9FA0_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A47BCAA43ED7396C(::System::Int32 F64C7499A01BC596, ::System::Int32 A1ED5D42644BEE76, ::System::Int32 A8EF45DFCDAA80B7, ::System::Int32 E507C30C8E44D589)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + B0C745C463BA9FA0_A47BCAA43ED7396C_OFFSET))(this, F64C7499A01BC596, A1ED5D42644BEE76, A8EF45DFCDAA80B7, E507C30C8E44D589);
	}
};
