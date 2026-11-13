#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define BEBKIEOBLPK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A92DDD0)
#define BEBKIEOBLPK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A92DFE0)
#define BEBKIEOBLPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A92E1B0)
#define BEBKIEOBLPK_DJJPOBNAMNH_OFFSET UNITYSDK_OFFSET(0x1A92D970)
#define BEBKIEOBLPK_EKLNFGIOLBL_OFFSET UNITYSDK_OFFSET(0x1A92C8A0)
#define BEBKIEOBLPK_FCJBMIFAFJA_OFFSET UNITYSDK_OFFSET(0x1A92C810)
#define BEBKIEOBLPK_KNKEMHHBFJO_OFFSET UNITYSDK_OFFSET(0x1A92DCE0)
#define BEBKIEOBLPK_KOEIAOJLKHN_OFFSET UNITYSDK_OFFSET(0x1A92D480)
#define BEBKIEOBLPK_LMFNJNCJJFI_OFFSET UNITYSDK_OFFSET(0x1A92C850)
#define BEBKIEOBLPK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A92C8F0)
#define BEBKIEOBLPK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1A92D8C0)
#define BEBKIEOBLPK_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A92D910)
#define BEBKIEOBLPK_PJKJKCDAHMM_OFFSET UNITYSDK_OFFSET(0x1A92D5A0)
#define BEBKIEOBLPK__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A92C460)
#define BEBKIEOBLPK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A92D820)

inline static constexpr unsigned int BEBKIEOBLPK_TypeDefinitionIndex = 73959;

	class BEBKIEOBLPK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* IFPFGDMAJCF; // 0x60
		::UnityEngine::UI::Image* MAOLDDGOHKO; // 0x68
		::RPG::Client::SPProgress* LODNFBEONKF; // 0x70
		::UnityEngine::Transform* AKAOPCFABIJ; // 0x78
		::RPG::GameCore::SkillData* JDPPBAGBACJ; // 0x80
		::UnityEngine::UI::Slider* KMIJHEGMHDL; // 0x88
		::UnityEngine::UI::Image* PGFKOHJEIII; // 0x90
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x98
		::RPG::Client::SPProgress* NAAODEIIMCI; // 0xA0
		// static const ::System::Object NAEOMKGBNPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK__ONBIND_OFFSET))(this);
		}

		::UnityEngine::UI::Image* FCJBMIFAFJA()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_FCJBMIFAFJA_OFFSET))(this);
		}

		::UnityEngine::UI::Image* LMFNJNCJJFI()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_LMFNJNCJJFI_OFFSET))(this);
		}

		::RPG::Client::SPProgress* EKLNFGIOLBL()
		{
			return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_EKLNFGIOLBL_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void PJKJKCDAHMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_PJKJKCDAHMM_OFFSET))(this);
		}

		::System::Void KOEIAOJLKHN(::RPG::Client::SPProgress* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_KOEIAOJLKHN_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BEBKIEOBLPK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_ONRETURN_OFFSET))(this);
		}

		::System::Void DJJPOBNAMNH(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_DJJPOBNAMNH_OFFSET))(this, a1);
		}

		::System::Void KNKEMHHBFJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_KNKEMHHBFJO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBKIEOBLPK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
