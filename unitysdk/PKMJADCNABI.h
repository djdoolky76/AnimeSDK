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

#define PKMJADCNABI_AAJIIHIOEKN_OFFSET UNITYSDK_OFFSET(0xCC15860)
#define PKMJADCNABI_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC15B90)
#define PKMJADCNABI_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCC15C80)
#define PKMJADCNABI_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xCC154F0)
#define PKMJADCNABI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC15D50)
#define PKMJADCNABI_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xCC15B00)
#define PKMJADCNABI_HPDGNMKIODD_OFFSET UNITYSDK_OFFSET(0xCC158D0)
#define PKMJADCNABI_KDICAAOKPAL_OFFSET UNITYSDK_OFFSET(0xCC159F0)
#define PKMJADCNABI_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xCC15760)
#define PKMJADCNABI__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xCC155F0)
#define PKMJADCNABI__ONBIND_OFFSET UNITYSDK_OFFSET(0xCC15280)
#define PKMJADCNABI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCC15550)

inline static constexpr unsigned int PKMJADCNABI_TypeDefinitionIndex = 73781;

	class PKMJADCNABI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DINDNKBMAEK; // 0x60
		::UnityEngine::Transform* FOAIJMNFJFP; // 0x68
		::UnityEngine::Transform* CJHEBBGHJBO; // 0x70
		::UnityEngine::UI::Image* HPJBGKDNKEL; // 0x78
		::UnityEngine::UI::Image* GDLFHILNLIE; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x90
		::System::String* BDACPPLKLGL; // 0x98
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PKMJADCNABI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMJADCNABI__INITVARONCE_OFFSET))(this);
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
