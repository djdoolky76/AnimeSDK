#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BOOHMOLKDCA;
class FOPJIACKHCC;
class GOJNGCCBOGI;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MEACEKBHCPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B8430)
#define MEACEKBHCPP_DGEDEBKMBPG_1_OFFSET UNITYSDK_OFFSET(0xB8B7A60)
#define MEACEKBHCPP_DGEDEBKMBPG_OFFSET UNITYSDK_OFFSET(0xB8B7700)
#define MEACEKBHCPP_FMCDJJBJDIK_1_OFFSET UNITYSDK_OFFSET(0xB8B7900)
#define MEACEKBHCPP_FMCDJJBJDIK_OFFSET UNITYSDK_OFFSET(0xB8B7C80)
#define MEACEKBHCPP_HGHGMPPLNDG_OFFSET UNITYSDK_OFFSET(0xB8B7DC0)
#define MEACEKBHCPP_ILCPHCAOCFJ_OFFSET UNITYSDK_OFFSET(0xB8B81F0)
#define MEACEKBHCPP_JPGEPIFBHJA_OFFSET UNITYSDK_OFFSET(0xB8B8120)
#define MEACEKBHCPP_LLNFAOHFLFD_OFFSET UNITYSDK_OFFSET(0xB8B8380)
#define MEACEKBHCPP_PDILJIFEFKB_1_OFFSET UNITYSDK_OFFSET(0xB8B7BF0)
#define MEACEKBHCPP_PDILJIFEFKB_OFFSET UNITYSDK_OFFSET(0xB8B7870)

inline static constexpr unsigned int MEACEKBHCPP_TypeDefinitionIndex = 71551;

	class MEACEKBHCPP : public ::System::Object
	{
	public:
		::BOOHMOLKDCA* ODMGBEOIEEB; // 0x10
		// static const ::System::String* CBEANHHGNAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEACEKBHCPP_CTOR_OFFSET))(this);
		}

		::GOJNGCCBOGI* DGEDEBKMBPG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_DGEDEBKMBPG_OFFSET))(this, a1);
		}

		::GOJNGCCBOGI* DGEDEBKMBPG_1(::RPG::Client::BattleBuffToastNotify* a1)
		{
			return ((::GOJNGCCBOGI*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_DGEDEBKMBPG_1_OFFSET))(this, a1);
		}

		::System::Boolean PDILJIFEFKB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_PDILJIFEFKB_OFFSET))(this, a1, a2);
		}

		::System::Boolean PDILJIFEFKB_1(::RPG::Client::BattleBuffToastNotify* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_PDILJIFEFKB_1_OFFSET))(this, a1, a2);
		}

		::FOPJIACKHCC* FMCDJJBJDIK(::RPG::Client::BattleBuffToastNotify* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::FOPJIACKHCC*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_FMCDJJBJDIK_OFFSET))(this, a1, a2);
		}

		::FOPJIACKHCC* FMCDJJBJDIK_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::FOPJIACKHCC*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_FMCDJJBJDIK_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* ILCPHCAOCFJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_ILCPHCAOCFJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* JPGEPIFBHJA(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + MEACEKBHCPP_JPGEPIFBHJA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 HGHGMPPLNDG(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MEACEKBHCPP_HGHGMPPLNDG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LLNFAOHFLFD(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MEACEKBHCPP_LLNFAOHFLFD_OFFSET))(this, a1);
		}

	};
