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

#define NJIOAKCLACC_ADAMPOOLPLD_OFFSET UNITYSDK_OFFSET(0xC4FB040)
#define NJIOAKCLACC_AFCNKCOCEJB_OFFSET UNITYSDK_OFFSET(0xC4F7B90)
#define NJIOAKCLACC_APFPHPDMCOJ_OFFSET UNITYSDK_OFFSET(0xC4F96C0)
#define NJIOAKCLACC_BLIIDEGCBJI_OFFSET UNITYSDK_OFFSET(0xC4FB5B0)
#define NJIOAKCLACC_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0xC4F9CD0)
#define NJIOAKCLACC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4F56F0)
#define NJIOAKCLACC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4F5A10)
#define NJIOAKCLACC_DMDCLPIDOLI_OFFSET UNITYSDK_OFFSET(0xC4F86B0)
#define NJIOAKCLACC_EMFAOCLIONC_OFFSET UNITYSDK_OFFSET(0xC4FA1E0)
#define NJIOAKCLACC_FOGLBJEJCCI_OFFSET UNITYSDK_OFFSET(0xC4F7D60)
#define NJIOAKCLACC_GHCBFDFPLGD_OFFSET UNITYSDK_OFFSET(0xC4F8520)
#define NJIOAKCLACC_GLHCNKHFMOF_OFFSET UNITYSDK_OFFSET(0xC4FBBA0)
#define NJIOAKCLACC_GLHDJGCLCMG_OFFSET UNITYSDK_OFFSET(0xC4F98D0)
#define NJIOAKCLACC_GMILBNCBGLC_OFFSET UNITYSDK_OFFSET(0xC4F80A0)
#define NJIOAKCLACC_GMNODHLOHNN_OFFSET UNITYSDK_OFFSET(0xC4FA0D0)
#define NJIOAKCLACC_HFHKCGHPDCL_OFFSET UNITYSDK_OFFSET(0xC4FB2B0)
#define NJIOAKCLACC_HFJOFENDOHE_OFFSET UNITYSDK_OFFSET(0xC4F70C0)
#define NJIOAKCLACC_HGPGOKPJFCN_OFFSET UNITYSDK_OFFSET(0xC4F99D0)
#define NJIOAKCLACC_HGPJOBJDCLG_OFFSET UNITYSDK_OFFSET(0xC4FBC10)
#define NJIOAKCLACC_HJCNEIGMBOJ_OFFSET UNITYSDK_OFFSET(0xC4F5E60)
#define NJIOAKCLACC_ICMEHFGDHJL_OFFSET UNITYSDK_OFFSET(0xC4FA230)
#define NJIOAKCLACC_JIBHEHCDAOK_OFFSET UNITYSDK_OFFSET(0xC4F7580)
#define NJIOAKCLACC_KEINOEGEKHP_OFFSET UNITYSDK_OFFSET(0xC4FB9A0)
#define NJIOAKCLACC_LDODMCJAKKP_OFFSET UNITYSDK_OFFSET(0xC4F8A20)
#define NJIOAKCLACC_MGAMMLHIGBO_OFFSET UNITYSDK_OFFSET(0xC4F7FA0)
#define NJIOAKCLACC_NCJNHOFJNCF_OFFSET UNITYSDK_OFFSET(0xC4FA4B0)
#define NJIOAKCLACC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4F5D80)
#define NJIOAKCLACC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4FA130)
#define NJIOAKCLACC_PNFHGICAMGG_OFFSET UNITYSDK_OFFSET(0xC4F9020)
#define NJIOAKCLACC_PODHBCLOBHM_OFFSET UNITYSDK_OFFSET(0xC4F8DE0)
#define NJIOAKCLACC_TICK_OFFSET UNITYSDK_OFFSET(0xC4FA180)

inline static constexpr unsigned int NJIOAKCLACC_TypeDefinitionIndex = 59159;

	class NJIOAKCLACC : public ::JEKCCAGBHKK
	{
	public:
		::KFELGAIGHAP* FHABNNPBEIO; // 0x40
		::KFELGAIGHAP* PPGCGPPDPGG; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::GELIALJDFBL* MOKMJHNBGBK; // 0x58
		::RPG::GameCore::AdventureTriggerAttack* OFKGLJOAMLD; // 0x60
		::KFELGAIGHAP* PBFANKIEMAH; // 0x68
		::KFELGAIGHAP* DOIICDNNNCE; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* JEHAPGLMNKH; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x80
		::RPG::GameCore::GameEntityList* OKGNEHPEGGH; // 0x88
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
