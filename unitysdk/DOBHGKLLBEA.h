#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class IONGFDBBCIF;
class PMBOJEOJFAM;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define DOBHGKLLBEA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1919CB20)
#define DOBHGKLLBEA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1919CBF0)
#define DOBHGKLLBEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1919CC90)
#define DOBHGKLLBEA_GMLKMFDNNFP_OFFSET UNITYSDK_OFFSET(0x1919C730)
#define DOBHGKLLBEA_JPFNOKBAMAB_OFFSET UNITYSDK_OFFSET(0x1919C5F0)
#define DOBHGKLLBEA_KNMGPCMAAOB_OFFSET UNITYSDK_OFFSET(0x1919C950)
#define DOBHGKLLBEA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1919C4D0)
#define DOBHGKLLBEA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1919C520)
#define DOBHGKLLBEA_OONIPDPHPOE_OFFSET UNITYSDK_OFFSET(0x1919CA30)
#define DOBHGKLLBEA_PAJIHFJNIIH_OFFSET UNITYSDK_OFFSET(0x1919C570)
#define DOBHGKLLBEA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1919C2D0)
#define DOBHGKLLBEA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1919C280)
#define DOBHGKLLBEA__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1919C470)
#define DOBHGKLLBEA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1919C3C0)
#define DOBHGKLLBEA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1919C330)

inline static constexpr unsigned int DOBHGKLLBEA_TypeDefinitionIndex = 73461;

	class DOBHGKLLBEA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* IHCGLBPNDFC; // 0x60
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType, ::System::String*>* DDPEAAMMCIA; // 0x70
		::UnityEngine::Transform* JAJJKILBDDA; // 0x78
		::IONGFDBBCIF* HGIHOOECGEE; // 0x80
		// static const ::System::String* AHFNCALBDIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DOBHGKLLBEA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA__ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_ONRETURN_OFFSET))(this);
		}

		::System::Void PAJIHFJNIIH(::PMBOJEOJFAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMBOJEOJFAM*))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_PAJIHFJNIIH_OFFSET))(this, a1);
		}

		::System::Boolean JPFNOKBAMAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_JPFNOKBAMAB_OFFSET))(this);
		}

		::System::Void GMLKMFDNNFP(::PMBOJEOJFAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMBOJEOJFAM*))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_GMLKMFDNNFP_OFFSET))(this, a1);
		}

		::System::String* KNMGPCMAAOB(::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_KNMGPCMAAOB_OFFSET))(this, a1);
		}

		::System::Void OONIPDPHPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_OONIPDPHPOE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBHGKLLBEA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
