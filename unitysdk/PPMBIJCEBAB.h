#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DCDEFONFBCP;
class FDMDLGNFCFB;
class GONKCHICAAL;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define PPMBIJCEBAB_ABNNHAKNIGM_OFFSET UNITYSDK_OFFSET(0xC38B030)
#define PPMBIJCEBAB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC38BB40)
#define PPMBIJCEBAB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC38BCE0)
#define PPMBIJCEBAB_BALIBNLMFAF_OFFSET UNITYSDK_OFFSET(0xC38B980)
#define PPMBIJCEBAB_COIGHOBFILM_OFFSET UNITYSDK_OFFSET(0xC38AE40)
#define PPMBIJCEBAB_CTOR_OFFSET UNITYSDK_OFFSET(0xC38BE50)
#define PPMBIJCEBAB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC38A800)
#define PPMBIJCEBAB_EBAFDALANDJ_OFFSET UNITYSDK_OFFSET(0xC38B460)
#define PPMBIJCEBAB_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xC38AB40)
#define PPMBIJCEBAB_EEIOMGHMJCO_OFFSET UNITYSDK_OFFSET(0xC38B620)
#define PPMBIJCEBAB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC38A8A0)
#define PPMBIJCEBAB_GOFDLHGMGIJ_1_OFFSET UNITYSDK_OFFSET(0xC38B750)
#define PPMBIJCEBAB_GOFDLHGMGIJ_OFFSET UNITYSDK_OFFSET(0xC38ADE0)
#define PPMBIJCEBAB_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xC38AAB0)
#define PPMBIJCEBAB_IAMPKCMFJPI_OFFSET UNITYSDK_OFFSET(0xC38B280)
#define PPMBIJCEBAB_IOKPKFAAHON_OFFSET UNITYSDK_OFFSET(0xC38BA40)
#define PPMBIJCEBAB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC38A8F0)
#define PPMBIJCEBAB_KLPGNEJBGIA_OFFSET UNITYSDK_OFFSET(0xC38B8C0)
#define PPMBIJCEBAB_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0xC38AB90)
#define PPMBIJCEBAB_NECHEIPDPJD_OFFSET UNITYSDK_OFFSET(0xC38B800)
#define PPMBIJCEBAB_PABHKCOOGNN_OFFSET UNITYSDK_OFFSET(0xC38AED0)
#define PPMBIJCEBAB_PJKPHJHCDLD_OFFSET UNITYSDK_OFFSET(0xC38B6E0)
#define PPMBIJCEBAB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC38A780)
#define PPMBIJCEBAB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC38AA20)

inline static constexpr unsigned int PPMBIJCEBAB_TypeDefinitionIndex = 72049;

	class PPMBIJCEBAB : public ::FMPCODLIOLG
	{
	public:
		::FDMDLGNFCFB* FHKNGKLAMAF; // 0x60
		::UnityEngine::Transform* NGOEMDKHBPO; // 0x68
		::RPG::Client::PrefabLoadMeta* GGBFOLPIFIL; // 0x70
		::UnityEngine::Transform* KPGPOMMAMGA; // 0x78
		::RPG::Client::PrefabLoadMeta* CKPJOENDCDE; // 0x80
		::UnityEngine::Animation* GGHHILBNDJN; // 0x88
		::GONKCHICAAL* JDGLCCEGPMH; // 0x90
		::RPG::Client::BattleUITeamBlockData* LACMNAKHODL; // 0x98
		::DCDEFONFBCP* EIPPIIAKNJO; // 0xA0
		::UnityEngine::Animation* NGHBNMLGFNC; // 0xA8
		::System::Boolean CGOHGDKADLJ; // 0xB0
		// static const ::System::String* IJLGGAODOKC; // 0x0
		// static const ::System::String* MCNPEJFBAAG; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		// static const ::System::String* PGMNJNHPMGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB__ONDISPOSE_OFFSET))(this);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_EDFDIAKEGIK_OFFSET))(this);
		}

		::System::Void KOIEPHBLHID(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_KOIEPHBLHID_OFFSET))(this, a1);
		}

		::System::Void COIGHOBFILM(::RPG::GameCore::LevelCharacterRemoveShield* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_COIGHOBFILM_OFFSET))(this, a1);
		}

		::System::Void PABHKCOOGNN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_PABHKCOOGNN_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void ABNNHAKNIGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_ABNNHAKNIGM_OFFSET))(this);
		}

		::System::Void IAMPKCMFJPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_IAMPKCMFJPI_OFFSET))(this);
		}

		::System::Void EBAFDALANDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_EBAFDALANDJ_OFFSET))(this);
		}

		::UnityEngine::Transform* PJKPHJHCDLD()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_PJKPHJHCDLD_OFFSET))(this);
		}

		::System::Void EEIOMGHMJCO(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_EEIOMGHMJCO_OFFSET))(this, a1, a2);
		}

		::System::Void GOFDLHGMGIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_GOFDLHGMGIJ_OFFSET))(this);
		}

		::System::Void GOFDLHGMGIJ_1(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_GOFDLHGMGIJ_1_OFFSET))(this, a1);
		}

		::System::Void NECHEIPDPJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_NECHEIPDPJD_OFFSET))(this, a1);
		}

		::System::Void KLPGNEJBGIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_KLPGNEJBGIA_OFFSET))(this, a1);
		}

		::System::Void BALIBNLMFAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_BALIBNLMFAF_OFFSET))(this, a1);
		}

		::System::Void IOKPKFAAHON(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_IOKPKFAAHON_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMBIJCEBAB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
