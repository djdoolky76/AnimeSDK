#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define PKMJADCNABI_AAJIIHIOEKN_OFFSET UNITYSDK_OFFSET(0xC2DF070)
#define PKMJADCNABI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC2DF3B0)
#define PKMJADCNABI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC2DF4A0)
#define PKMJADCNABI_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xC2DED10)
#define PKMJADCNABI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2DF570)
#define PKMJADCNABI_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xC2DF320)
#define PKMJADCNABI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC2DED60)
#define PKMJADCNABI_HPDGNMKIODD_OFFSET UNITYSDK_OFFSET(0xC2DF0F0)
#define PKMJADCNABI_KDICAAOKPAL_OFFSET UNITYSDK_OFFSET(0xC2DF210)
#define PKMJADCNABI_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xC2DEF70)
#define PKMJADCNABI_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC2DEE00)
#define PKMJADCNABI__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2DEB60)

inline static constexpr unsigned int PKMJADCNABI_TypeDefinitionIndex = 71772;

	class PKMJADCNABI : public ::FMPCODLIOLG
	{
	public:
		::System::String* BDACPPLKLGL; // 0x60
		::UnityEngine::Transform* FOAIJMNFJFP; // 0x68
		::UnityEngine::Transform* CJHEBBGHJBO; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::UnityEngine::UI::Image* HPJBGKDNKEL; // 0x88
		::UnityEngine::UI::Image* GDLFHILNLIE; // 0x90
		::UnityEngine::Transform* DINDNKBMAEK; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI__ONBIND_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PKMJADCNABI_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PKMJADCNABI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void HPDGNMKIODD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKMJADCNABI_HPDGNMKIODD_OFFSET))(this, a1);
		}

		::System::Void KDICAAOKPAL(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PKMJADCNABI_KDICAAOKPAL_OFFSET))(this, a1, a2);
		}

		::System::Void AAJIIHIOEKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKMJADCNABI_AAJIIHIOEKN_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKMJADCNABI_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
