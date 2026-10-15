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

#define FBGCOPDOJNJ_AGHEFEEKDFI_OFFSET UNITYSDK_OFFSET(0x1568EDA0)
#define FBGCOPDOJNJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1568F8D0)
#define FBGCOPDOJNJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1568FBC0)
#define FBGCOPDOJNJ_CPBCFBFCFND_OFFSET UNITYSDK_OFFSET(0x1568F4E0)
#define FBGCOPDOJNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1568FE70)
#define FBGCOPDOJNJ_DCJKBMFIBAN_OFFSET UNITYSDK_OFFSET(0x1568F810)
#define FBGCOPDOJNJ_DHJBJKCLPMK_OFFSET UNITYSDK_OFFSET(0x1568F6F0)
#define FBGCOPDOJNJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1568E710)
#define FBGCOPDOJNJ_GET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x1568F630)
#define FBGCOPDOJNJ_GET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x1568F370)
#define FBGCOPDOJNJ_GIBIJDMMDPL_OFFSET UNITYSDK_OFFSET(0x1568EE30)
#define FBGCOPDOJNJ_HGHOFCHBFEJ_OFFSET UNITYSDK_OFFSET(0x1568F390)
#define FBGCOPDOJNJ_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0x1568EAA0)
#define FBGCOPDOJNJ_MCDILFDDLJO_OFFSET UNITYSDK_OFFSET(0x1568F750)
#define FBGCOPDOJNJ_NKIIOFCFHEE_OFFSET UNITYSDK_OFFSET(0x1568F0C0)
#define FBGCOPDOJNJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1568E840)
#define FBGCOPDOJNJ_PFNACDAGPDL_OFFSET UNITYSDK_OFFSET(0x1568F650)
#define FBGCOPDOJNJ_PKLCEMLHMJI_OFFSET UNITYSDK_OFFSET(0x1568F480)
#define FBGCOPDOJNJ_PMPFNOCDKDK_OFFSET UNITYSDK_OFFSET(0x1568EED0)
#define FBGCOPDOJNJ_SET_PROGRESSCHANGEANIMENDPROMISE_OFFSET UNITYSDK_OFFSET(0x1568F640)
#define FBGCOPDOJNJ_SET_SCEPTERDATA_OFFSET UNITYSDK_OFFSET(0x1568F380)
#define FBGCOPDOJNJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x1568E3E0)
#define FBGCOPDOJNJ___PLAYSPCHANGEANIM_B__22_0_OFFSET UNITYSDK_OFFSET(0x1568FEA0)

inline static constexpr unsigned int FBGCOPDOJNJ_TypeDefinitionIndex = 72312;

	class FBGCOPDOJNJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIValueChangeAnimation* OCNAAJKIENE; // 0x60
		::RPG::Client::RogueMagicScepterDataItem* _ScepterData_k__BackingField; // 0x68
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x70
		::RPG::Client::Promises::Promise* _ProgressChangeAnimEndPromise_k__BackingField; // 0x78
		::UnityEngine::Transform* LKHHMNJKLJH; // 0x80
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x88
		::UnityEngine::Transform* AOKHJDHAAKP; // 0x90
		::UnityEngine::UI::Image* JBGEKBONKCA; // 0x98
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA0
		::UnityEngine::Transform* COGOPBJHLME; // 0xA8
		::UnityEngine::Transform* GCAOHACNIBF; // 0xB0
		::RPG::Client::UIValueChangeAnimation* KFMOAHDECGM; // 0xB8
		::UnityEngine::Transform* NJFPFGJBLMK; // 0xC0
		::UnityEngine::Coroutine* KCECMFCDFBA; // 0xC8
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0xD0
		::RPG::Client::Promises::Promise* BFMFIDCGGNF; // 0xD8
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
