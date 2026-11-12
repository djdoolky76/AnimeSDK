#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class IDEGLFHLFPE;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EKDCBAAGNJH_AAKIBAALGPM_OFFSET UNITYSDK_OFFSET(0x16447D90)
#define EKDCBAAGNJH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16448E40)
#define EKDCBAAGNJH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16448F80)
#define EKDCBAAGNJH_CEBGPBHMCHG_OFFSET UNITYSDK_OFFSET(0x16447FB0)
#define EKDCBAAGNJH_CGOHMJAMDCK_OFFSET UNITYSDK_OFFSET(0x16448730)
#define EKDCBAAGNJH_CTOR_OFFSET UNITYSDK_OFFSET(0x164490A0)
#define EKDCBAAGNJH_FMOLAHJHOMI_OFFSET UNITYSDK_OFFSET(0x164484C0)
#define EKDCBAAGNJH_GNAHOCPDPPO_OFFSET UNITYSDK_OFFSET(0x16448D40)
#define EKDCBAAGNJH_ICNJFFBMINO_OFFSET UNITYSDK_OFFSET(0x164483A0)
#define EKDCBAAGNJH_JHEPCILNLMI_OFFSET UNITYSDK_OFFSET(0x16448C50)
#define EKDCBAAGNJH_KINAGKCPJBH_OFFSET UNITYSDK_OFFSET(0x16448560)
#define EKDCBAAGNJH_NHGGFBOAJMD_OFFSET UNITYSDK_OFFSET(0x164489F0)
#define EKDCBAAGNJH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16448510)
#define EKDCBAAGNJH__ONBIND_OFFSET UNITYSDK_OFFSET(0x16447D00)
#define EKDCBAAGNJH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16448430)
#define EKDCBAAGNJH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16448320)

inline static constexpr unsigned int EKDCBAAGNJH_TypeDefinitionIndex = 74322;

	class EKDCBAAGNJH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleGridFightAvatarData* OAEOLANBFMB; // 0x60
		::UnityEngine::Transform* DJGBGLMNPOL; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MEIMAOKMEPF; // 0x70
		::System::Collections::Generic::List_1<::IDEGLFHLFPE*>* KHDMABKENMC; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OFLJMICCPGG; // 0x80
		::System::Boolean BFGEKIHIDAE; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH__ONBIND_OFFSET))(this);
		}

		::System::Void AAKIBAALGPM(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_AAKIBAALGPM_OFFSET))(this, a1);
		}

		::System::Void ICNJFFBMINO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_ICNJFFBMINO_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EKDCBAAGNJH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean FMOLAHJHOMI(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_FMOLAHJHOMI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void KINAGKCPJBH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_KINAGKCPJBH_OFFSET))(this, a1);
		}

		::System::Void CGOHMJAMDCK(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_CGOHMJAMDCK_OFFSET))(this, a1);
		}

		::System::Void NHGGFBOAJMD(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_NHGGFBOAJMD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* CEBGPBHMCHG()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_CEBGPBHMCHG_OFFSET))(this);
		}

		::System::Void JHEPCILNLMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_JHEPCILNLMI_OFFSET))(this, a1);
		}

		::System::Void GNAHOCPDPPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_GNAHOCPDPPO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
