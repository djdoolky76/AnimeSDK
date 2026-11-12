#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PKILELCBFKH;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }

#define HDBEKHHDOEH_AIMIMEOEEND_OFFSET UNITYSDK_OFFSET(0x16B732F0)
#define HDBEKHHDOEH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16B734E0)
#define HDBEKHHDOEH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16B73660)
#define HDBEKHHDOEH_CJDPHKGDJAA_OFFSET UNITYSDK_OFFSET(0x16B73070)
#define HDBEKHHDOEH_CTOR_OFFSET UNITYSDK_OFFSET(0x16B737C0)
#define HDBEKHHDOEH_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x16B733F0)
#define HDBEKHHDOEH_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x16B730E0)
#define HDBEKHHDOEH_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x16B73010)
#define HDBEKHHDOEH_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x16B73200)
#define HDBEKHHDOEH_NJJHNDPJJJG_OFFSET UNITYSDK_OFFSET(0x16B731A0)
#define HDBEKHHDOEH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B72EF0)
#define HDBEKHHDOEH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16B73140)

inline static constexpr unsigned int HDBEKHHDOEH_TypeDefinitionIndex = 74319;

	class HDBEKHHDOEH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::PKILELCBFKH* NHNHKBJJKPP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBEKHHDOEH__ONBIND_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void CJDPHKGDJAA(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_CJDPHKGDJAA_OFFSET))(this, a1);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HDBEKHHDOEH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void NJJHNDPJJJG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_NJJHNDPJJJG_OFFSET))(this, a1);
		}

		::System::Void NEEFLPBIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_NEEFLPBIKMH_OFFSET))(this, a1);
		}

		::System::Void AIMIMEOEEND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_AIMIMEOEEND_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDBEKHHDOEH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
