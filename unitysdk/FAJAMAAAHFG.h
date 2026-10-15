#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define FAJAMAAAHFG_ADDHCLFCACC_OFFSET UNITYSDK_OFFSET(0x1567FCA0)
#define FAJAMAAAHFG_AGCNNNPFHEK_OFFSET UNITYSDK_OFFSET(0x1567FFD0)
#define FAJAMAAAHFG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15680CE0)
#define FAJAMAAAHFG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15680E40)
#define FAJAMAAAHFG_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x15680AA0)
#define FAJAMAAAHFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15681370)
#define FAJAMAAAHFG_CGKMHCBNOFD_OFFSET UNITYSDK_OFFSET(0x15680940)
#define FAJAMAAAHFG_CPLAEGIONDN_OFFSET UNITYSDK_OFFSET(0x156805D0)
#define FAJAMAAAHFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15680F70)
#define FAJAMAAAHFG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1567FE80)
#define FAJAMAAAHFG_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15680330)
#define FAJAMAAAHFG_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x15680020)
#define FAJAMAAAHFG_EIDLBJENLAH_OFFSET UNITYSDK_OFFSET(0x15680170)
#define FAJAMAAAHFG_EKAPIINMCDJ_OFFSET UNITYSDK_OFFSET(0x156807A0)
#define FAJAMAAAHFG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1567FF70)
#define FAJAMAAAHFG_HAAHPEOMCEH_OFFSET UNITYSDK_OFFSET(0x1567F610)
#define FAJAMAAAHFG_IBNHMFAPDIG_OFFSET UNITYSDK_OFFSET(0x1567FE10)
#define FAJAMAAAHFG_JFOJNKKHIKE_OFFSET UNITYSDK_OFFSET(0x15680820)
#define FAJAMAAAHFG_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x15680480)
#define FAJAMAAAHFG_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x15680C20)
#define FAJAMAAAHFG_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x15680B60)
#define FAJAMAAAHFG_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x1567FC30)
#define FAJAMAAAHFG_OGKGKPDCKIH_OFFSET UNITYSDK_OFFSET(0x15680A30)
#define FAJAMAAAHFG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1567FB90)
#define FAJAMAAAHFG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1567FD70)
#define FAJAMAAAHFG_PDCPJMGMMPH_OFFSET UNITYSDK_OFFSET(0x156809B0)
#define FAJAMAAAHFG__ONBIND_OFFSET UNITYSDK_OFFSET(0x1567F5C0)

inline static constexpr unsigned int FAJAMAAAHFG_TypeDefinitionIndex = 71684;

	class FAJAMAAAHFG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* LJFPHPILBJH; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*, ::System::String*>* OKCMPHAFDKL; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* OOFMKMAAJAB; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0x80
		::UnityEngine::Animation* BGIPIKNGPKC; // 0x88
		::RPG::GameCore::MonsterRank BCELNMFHDPH; // 0x90
		::System::Boolean AAGKIPFCNHO; // 0x94
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MonsterRank MJIPOHPBIMI; // 0x98
		static ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet_DDCODEFIJCJ()
		{
			return (::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>**)UnitySDK::FromName("", "FAJAMAAAHFG")->GetStaticField(0x5C7F0);
		}

		// static const ::System::String* CNFNDGKCLJD; // 0x0
		// static const ::System::String* BKKILKAFKEN; // 0x0
		// static const ::System::String* GGMHCPICENN; // 0x0
		// static const ::System::String* CLGDGMLIHKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAJAMAAAHFG_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG__ONBIND_OFFSET))(this);
		}

		::System::Void HAAHPEOMCEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_HAAHPEOMCEH_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void AGCNNNPFHEK(::RPG::GameCore::MonsterRank a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_AGCNNNPFHEK_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void EIDLBJENLAH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_EIDLBJENLAH_OFFSET))(this, a1);
		}

		::System::Void CPLAEGIONDN(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_CPLAEGIONDN_OFFSET))(this, a1);
		}

		::System::Void IBNHMFAPDIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_IBNHMFAPDIG_OFFSET))(this);
		}

		::System::Void PDCPJMGMMPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_PDCPJMGMMPH_OFFSET))(this);
		}

		::System::Void ADDHCLFCACC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_ADDHCLFCACC_OFFSET))(this);
		}

		::System::Void CGKMHCBNOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_CGKMHCBNOFD_OFFSET))(this);
		}

		::System::Void OGKGKPDCKIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_OGKGKPDCKIH_OFFSET))(this);
		}

		::System::Boolean JFOJNKKHIKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_JFOJNKKHIKE_OFFSET))(this);
		}

		::System::Boolean EKAPIINMCDJ(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_EKAPIINMCDJ_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJAMAAAHFG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
