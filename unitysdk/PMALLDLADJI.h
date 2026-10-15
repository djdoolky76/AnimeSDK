#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PMALLDLADJI_CGHDIANPOFF_OFFSET UNITYSDK_OFFSET(0xC312F10)
#define PMALLDLADJI_CTOR_OFFSET UNITYSDK_OFFSET(0xC313560)
#define PMALLDLADJI_GDBFPCFAEIF_OFFSET UNITYSDK_OFFSET(0xC312D40)
#define PMALLDLADJI_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xC313540)
#define PMALLDLADJI_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xC312830)
#define PMALLDLADJI_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xC3127D0)
#define PMALLDLADJI_MAJFEMJIHHI_OFFSET UNITYSDK_OFFSET(0xC312F60)
#define PMALLDLADJI_MHAPPGHMOPN_OFFSET UNITYSDK_OFFSET(0xC312940)
#define PMALLDLADJI_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xC313550)
#define PMALLDLADJI__ONBIND_OFFSET UNITYSDK_OFFSET(0xC312500)
#define PMALLDLADJI__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC3125B0)
#define PMALLDLADJI___SETUPULTRABTNEFX_B__6_0_OFFSET UNITYSDK_OFFSET(0xC313600)

inline static constexpr unsigned int PMALLDLADJI_TypeDefinitionIndex = 71955;

	class PMALLDLADJI : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::DamageTypeRow* LPEJACFNIDK; // 0x60
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Transform*>* IILGGIHNCMC; // 0x70
		::RPG::GameCore::SkillCharacterComponent* DLKGKDBPHOH; // 0x78
		::UnityEngine::UI::Image* NBOHBGJDNKF; // 0x80
		::UnityEngine::Transform* POGABPLIMMH; // 0x88
		::System::Boolean _IsUltraMode_k__BackingField; // 0x90
		::System::Boolean CGEIJFBMLLE; // 0x91
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMALLDLADJI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMALLDLADJI__ONBIND_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMALLDLADJI__ONDISPOSE_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMALLDLADJI_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void GDBFPCFAEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMALLDLADJI_GDBFPCFAEIF_OFFSET))(this, a1);
		}

		::System::Void CGHDIANPOFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMALLDLADJI_CGHDIANPOFF_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMALLDLADJI_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void MHAPPGHMOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMALLDLADJI_MHAPPGHMOPN_OFFSET))(this);
		}

		::System::Void MAJFEMJIHHI(::UnityEngine::GameObject* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + PMALLDLADJI_MAJFEMJIHHI_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsUltraMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMALLDLADJI_GET_ISULTRAMODE_OFFSET))(this);
		}

		::System::Void set_IsUltraMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMALLDLADJI_SET_ISULTRAMODE_OFFSET))(this, a1);
		}

		::System::Void __SetupUltraBtnEfx_b__6_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PMALLDLADJI___SETUPULTRABTNEFX_B__6_0_OFFSET))(this, a1);
		}

	};
