#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEKCCAGBHKK.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define NJIOAKCLACC_ADAMPOOLPLD_OFFSET UNITYSDK_OFFSET(0xBC17630)
#define NJIOAKCLACC_AFCNKCOCEJB_OFFSET UNITYSDK_OFFSET(0xBC14120)
#define NJIOAKCLACC_APFPHPDMCOJ_OFFSET UNITYSDK_OFFSET(0xBC15C70)
#define NJIOAKCLACC_BLIIDEGCBJI_OFFSET UNITYSDK_OFFSET(0xBC17BA0)
#define NJIOAKCLACC_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0xBC16280)
#define NJIOAKCLACC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC11CB0)
#define NJIOAKCLACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC11FE0)
#define NJIOAKCLACC_DMDCLPIDOLI_OFFSET UNITYSDK_OFFSET(0xBC14C50)
#define NJIOAKCLACC_EMFAOCLIONC_OFFSET UNITYSDK_OFFSET(0xBC167B0)
#define NJIOAKCLACC_FOGLBJEJCCI_OFFSET UNITYSDK_OFFSET(0xBC142F0)
#define NJIOAKCLACC_GHCBFDFPLGD_OFFSET UNITYSDK_OFFSET(0xBC14AC0)
#define NJIOAKCLACC_GLHCNKHFMOF_OFFSET UNITYSDK_OFFSET(0xBC181A0)
#define NJIOAKCLACC_GLHDJGCLCMG_OFFSET UNITYSDK_OFFSET(0xBC15E80)
#define NJIOAKCLACC_GMILBNCBGLC_OFFSET UNITYSDK_OFFSET(0xBC14630)
#define NJIOAKCLACC_GMNODHLOHNN_OFFSET UNITYSDK_OFFSET(0xBC166A0)
#define NJIOAKCLACC_HFHKCGHPDCL_OFFSET UNITYSDK_OFFSET(0xBC178A0)
#define NJIOAKCLACC_HFJOFENDOHE_OFFSET UNITYSDK_OFFSET(0xBC13680)
#define NJIOAKCLACC_HGPGOKPJFCN_OFFSET UNITYSDK_OFFSET(0xBC15F80)
#define NJIOAKCLACC_HGPJOBJDCLG_OFFSET UNITYSDK_OFFSET(0xBC18210)
#define NJIOAKCLACC_HJCNEIGMBOJ_OFFSET UNITYSDK_OFFSET(0xBC12430)
#define NJIOAKCLACC_ICMEHFGDHJL_OFFSET UNITYSDK_OFFSET(0xBC16800)
#define NJIOAKCLACC_JIBHEHCDAOK_OFFSET UNITYSDK_OFFSET(0xBC13B40)
#define NJIOAKCLACC_KEINOEGEKHP_OFFSET UNITYSDK_OFFSET(0xBC17FA0)
#define NJIOAKCLACC_LDODMCJAKKP_OFFSET UNITYSDK_OFFSET(0xBC14FD0)
#define NJIOAKCLACC_MGAMMLHIGBO_OFFSET UNITYSDK_OFFSET(0xBC14530)
#define NJIOAKCLACC_NCJNHOFJNCF_OFFSET UNITYSDK_OFFSET(0xBC16A80)
#define NJIOAKCLACC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC12350)
#define NJIOAKCLACC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC16700)
#define NJIOAKCLACC_PNFHGICAMGG_OFFSET UNITYSDK_OFFSET(0xBC155C0)
#define NJIOAKCLACC_PODHBCLOBHM_OFFSET UNITYSDK_OFFSET(0xBC15390)
#define NJIOAKCLACC_TICK_OFFSET UNITYSDK_OFFSET(0xBC16750)

	class NJIOAKCLACC : public ::JEKCCAGBHKK
	{
	public:
		::RPG::GameCore::GameEntityList* OKGNEHPEGGH; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* JEHAPGLMNKH; // 0x48
		::KFELGAIGHAP* DOIICDNNNCE; // 0x50
		::KFELGAIGHAP* FHABNNPBEIO; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x60
		::GELIALJDFBL* MOKMJHNBGBK; // 0x68
		::KFELGAIGHAP* PPGCGPPDPGG; // 0x70
		::KFELGAIGHAP* PBFANKIEMAH; // 0x78
		::RPG::GameCore::AdventureTriggerAttack* OFKGLJOAMLD; // 0x80
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x88
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HFJOFENDOHE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_HFJOFENDOHE_OFFSET))(this, a1);
		}

		::System::Void JIBHEHCDAOK(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_JIBHEHCDAOK_OFFSET))(this, a1, a2);
		}

		::System::Void AFCNKCOCEJB(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_AFCNKCOCEJB_OFFSET))(this, a1, a2);
		}

		::System::Void FOGLBJEJCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_FOGLBJEJCCI_OFFSET))(this);
		}

		::System::Void MGAMMLHIGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_MGAMMLHIGBO_OFFSET))(this);
		}

		::System::Void GMILBNCBGLC(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_GMILBNCBGLC_OFFSET))(this, a1, a2);
		}

		::System::Void GHCBFDFPLGD(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_GHCBFDFPLGD_OFFSET))(this, a1, a2);
		}

		::System::Void LDODMCJAKKP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_LDODMCJAKKP_OFFSET))(this, a1);
		}

		::System::Void PNFHGICAMGG(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_PNFHGICAMGG_OFFSET))(this, a1, a2);
		}

		::System::Void APFPHPDMCOJ(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_APFPHPDMCOJ_OFFSET))(this, a1);
		}

		::System::Void GLHDJGCLCMG(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_GLHDJGCLCMG_OFFSET))(this, a1, a2);
		}

		::System::Void HGPGOKPJFCN(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_HGPGOKPJFCN_OFFSET))(this, a1, a2);
		}

		::System::Void PODHBCLOBHM(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_PODHBCLOBHM_OFFSET))(this, a1, a2);
		}

		::System::Void DMDCLPIDOLI(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_DMDCLPIDOLI_OFFSET))(this, a1);
		}

		::System::Void HJCNEIGMBOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_HJCNEIGMBOJ_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_CCJBBIOCLIM_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJIOAKCLACC_TICK_OFFSET))(this, a1);
		}

		static ::System::Boolean EMFAOCLIONC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_EMFAOCLIONC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* ICMEHFGDHJL(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_ICMEHFGDHJL_OFFSET))(a1);
		}

		::System::Void NCJNHOFJNCF(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_NCJNHOFJNCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 ADAMPOOLPLD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJIOAKCLACC_ADAMPOOLPLD_OFFSET))(this);
		}

		::System::Void GMNODHLOHNN(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_GMNODHLOHNN_OFFSET))(this, a1);
		}

		::System::Void HFHKCGHPDCL(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_HFHKCGHPDCL_OFFSET))(this, a1);
		}

		::System::Void BLIIDEGCBJI(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_BLIIDEGCBJI_OFFSET))(this, a1);
		}

		::System::Void KEINOEGEKHP(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_KEINOEGEKHP_OFFSET))(this, a1, a2);
		}

		::System::Boolean GLHCNKHFMOF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_GLHCNKHFMOF_OFFSET))(this, a1);
		}

		::System::Int32 HGPJOBJDCLG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NJIOAKCLACC_HGPJOBJDCLG_OFFSET))(this, a1, a2);
		}

	};
