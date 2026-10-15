#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PKILELCBFKH;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }

#define HIGLDDOJBBJ_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0x15CE5150)
#define HIGLDDOJBBJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15CE5340)
#define HIGLDDOJBBJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15CE54A0)
#define HIGLDDOJBBJ_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x15CE4F90)
#define HIGLDDOJBBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CE55D0)
#define HIGLDDOJBBJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15CE4ED0)
#define HIGLDDOJBBJ_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x15CE5250)
#define HIGLDDOJBBJ_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x15CE5000)
#define HIGLDDOJBBJ_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x15CE4F30)
#define HIGLDDOJBBJ_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x15CE5060)
#define HIGLDDOJBBJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x15CE4DA0)

inline static constexpr unsigned int HIGLDDOJBBJ_TypeDefinitionIndex = 71613;

	class HIGLDDOJBBJ : public ::FMPCODLIOLG
	{
	public:
		::PKILELCBFKH* NHNHKBJJKPP; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void LEHJAPMONNN(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void NEEFLPBIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_NEEFLPBIKMH_OFFSET))(this, a1);
		}

		::System::Void AIMIMEOEEND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_AIMIMEOEEND_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLDDOJBBJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
