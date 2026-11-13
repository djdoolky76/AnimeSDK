#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelEntitySPChange; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define FBGCOPDOJNJ_AGHEFEEKDFI_OFFSET UNITYSDK_OFFSET(0x1BA4B0D0)
#define FBGCOPDOJNJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA4BC00)
#define FBGCOPDOJNJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA4BEF0)
#define FBGCOPDOJNJ_CPBCFBFCFND_OFFSET UNITYSDK_OFFSET(0x1BA4B820)
#define FBGCOPDOJNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4C1B0)
#define FBGCOPDOJNJ_DCJKBMFIBAN_OFFSET UNITYSDK_OFFSET(0x1BA4BB40)
#define FBGCOPDOJNJ_DHJBJKCLPMK_OFFSET UNITYSDK_OFFSET(0x1BA4BA20)
#define FBGCOPDOJNJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1BA4AA00)
#define FBGCOPDOJNJ_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x1BA4B960)
#define FBGCOPDOJNJ_GET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x1BA4B6B0)
#define FBGCOPDOJNJ_GIBIJDMMDPL_OFFSET UNITYSDK_OFFSET(0x1BA4B160)
#define FBGCOPDOJNJ_HGHOFCHBFEJ_OFFSET UNITYSDK_OFFSET(0x1BA4B6D0)
#define FBGCOPDOJNJ_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x1BA4AD90)
#define FBGCOPDOJNJ_MCDILFDDLJO_OFFSET UNITYSDK_OFFSET(0x1BA4BA80)
#define FBGCOPDOJNJ_NKIIOFCFHEE_OFFSET UNITYSDK_OFFSET(0x1BA4B3F0)
#define FBGCOPDOJNJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1BA4AB30)
#define FBGCOPDOJNJ_PFNACDAGPDL_OFFSET UNITYSDK_OFFSET(0x1BA4B980)
#define FBGCOPDOJNJ_PKLCEMLHMJI_OFFSET UNITYSDK_OFFSET(0x1BA4B7C0)
#define FBGCOPDOJNJ_PMPFNOCDKDK_OFFSET UNITYSDK_OFFSET(0x1BA4B200)
#define FBGCOPDOJNJ_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x1BA4B970)
#define FBGCOPDOJNJ_SET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x1BA4B6C0)
#define FBGCOPDOJNJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1BA4A440)
#define FBGCOPDOJNJ___PLAYSPCHANGEANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0x1BA4C1E0)

inline static constexpr unsigned int FBGCOPDOJNJ_TypeDefinitionIndex = 74389;

	class FBGCOPDOJNJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* COGOPBJHLME; // 0x60
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
		::UnityEngine::UI::Image* JBGEKBONKCA; // 0x70
		::UnityEngine::Transform* LKHHMNJKLJH; // 0x78
		::UnityEngine::Transform* GCAOHACNIBF; // 0x80
		::RPG::Client::RogueMagicScepterDataItem* _ScepterData_k__BackingField; // 0x88
		::RPG::Client::Promises::Promise* _ProgressChangeAnimEndPromise_k__BackingField; // 0x90
		::RPG::Client::UIValueChangeAnimation* OCNAAJKIENE; // 0x98
		::UnityEngine::Transform* AOKHJDHAAKP; // 0xA0
		::RPG::Client::Promises::Promise* BFMFIDCGGNF; // 0xA8
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0xB0
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0xB8
		::UnityEngine::Transform* NJFPFGJBLMK; // 0xC0
		::UnityEngine::Animation* PMOJILOJEPE; // 0xC8
		::UnityEngine::Coroutine* KCECMFCDFBA; // 0xD0
		::RPG::Client::UIValueChangeAnimation* KFMOAHDECGM; // 0xD8
		::System::Single CCOPIDJMDFP; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void AGHEFEEKDFI(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_AGHEFEEKDFI_OFFSET))(this, a1);
		}

		::System::Void GIBIJDMMDPL(::RPG::GameCore::LevelEntitySPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntitySPChange*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_GIBIJDMMDPL_OFFSET))(this, a1);
		}

		::System::Void LEEEAMMHPFM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_LEEEAMMHPFM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_ScepterData()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_GET_SCEPTERDATA_OFFSET))(this);
		}

		::System::Void set_ScepterData(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_SET_SCEPTERDATA_OFFSET))(this, a1);
		}

		::System::Void NKIIOFCFHEE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_NKIIOFCFHEE_OFFSET))(this, a1, a2);
		}

		::System::Void PMPFNOCDKDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_PMPFNOCDKDK_OFFSET))(this);
		}

		::System::Void HGHOFCHBFEJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_HGHOFCHBFEJ_OFFSET))(this, a1);
		}

		::System::Void PKLCEMLHMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_PKLCEMLHMJI_OFFSET))(this);
		}

		::System::Void CPBCFBFCFND(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_CPBCFBFCFND_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* get_ProgressChangeAnimEndPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET))(this);
		}

		::System::Void set_ProgressChangeAnimEndPromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* PFNACDAGPDL()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_PFNACDAGPDL_OFFSET))(this);
		}

		::System::Void DHJBJKCLPMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_DHJBJKCLPMK_OFFSET))(this);
		}

		::System::Void MCDILFDDLJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_MCDILFDDLJO_OFFSET))(this, a1);
		}

		::System::Void DCJKBMFIBAN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_DCJKBMFIBAN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __PlaySPChangeAnim_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGCOPDOJNJ___PLAYSPCHANGEANIM_B__22_0_OFFSET))(this);
		}

	};
