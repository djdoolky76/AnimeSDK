#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/BGMFAGEMHOM.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
class AJHEPIMIGBG;
class DEEJKBIMHAA;
class KFELGAIGHAP;
class LKFODAOEFHC;
class NCJILFFNINI;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGOOHIHKHNJ_AILDBGOLHDJ_OFFSET UNITYSDK_OFFSET(0xC230660)
#define PGOOHIHKHNJ_AKOHOFAMBMP_OFFSET UNITYSDK_OFFSET(0xC22ED70)
#define PGOOHIHKHNJ_BGBMDAOELAA_OFFSET UNITYSDK_OFFSET(0xC22FB60)
#define PGOOHIHKHNJ_CJFALFFMGLG_OFFSET UNITYSDK_OFFSET(0xC232B70)
#define PGOOHIHKHNJ_CMKFNAAGOIF_OFFSET UNITYSDK_OFFSET(0xC234BF0)
#define PGOOHIHKHNJ_COADOLBGKGK_OFFSET UNITYSDK_OFFSET(0xC22F480)
#define PGOOHIHKHNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC22BB80)
#define PGOOHIHKHNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC22BC40)
#define PGOOHIHKHNJ_DMFKGEBBGGG_OFFSET UNITYSDK_OFFSET(0xC234DB0)
#define PGOOHIHKHNJ_DMOCJHCDALA_OFFSET UNITYSDK_OFFSET(0xC2338E0)
#define PGOOHIHKHNJ_DMPONLJNPHC_OFFSET UNITYSDK_OFFSET(0xC22D4A0)
#define PGOOHIHKHNJ_DNHKELIFIBE_OFFSET UNITYSDK_OFFSET(0xC22BE20)
#define PGOOHIHKHNJ_EKHKMMBJODJ_OFFSET UNITYSDK_OFFSET(0xC2332C0)
#define PGOOHIHKHNJ_ENNJBMNBLNA_OFFSET UNITYSDK_OFFSET(0xC22EE10)
#define PGOOHIHKHNJ_FIBGIPGOEFO_OFFSET UNITYSDK_OFFSET(0xC22E4F0)
#define PGOOHIHKHNJ_GCCCMLFDIHE_OFFSET UNITYSDK_OFFSET(0xC22EB70)
#define PGOOHIHKHNJ_GEIGJNPPCGP_OFFSET UNITYSDK_OFFSET(0xC233340)
#define PGOOHIHKHNJ_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xC234FE0)
#define PGOOHIHKHNJ_GKKNKDHBJKN_OFFSET UNITYSDK_OFFSET(0xC22F240)
#define PGOOHIHKHNJ_GLDAGCNDCMA_OFFSET UNITYSDK_OFFSET(0xC22D640)
#define PGOOHIHKHNJ_HENBCPEDKEB_OFFSET UNITYSDK_OFFSET(0xC232CC0)
#define PGOOHIHKHNJ_HPKFAFOPGPG_OFFSET UNITYSDK_OFFSET(0xC22E5A0)
#define PGOOHIHKHNJ_IODJCEGHJML_OFFSET UNITYSDK_OFFSET(0xC2330F0)
#define PGOOHIHKHNJ_MJCKEMCGPIH_OFFSET UNITYSDK_OFFSET(0xC22C0A0)
#define PGOOHIHKHNJ_NAAPPHLGMNL_OFFSET UNITYSDK_OFFSET(0xC22FF20)
#define PGOOHIHKHNJ_NEEPFBGJHEF_OFFSET UNITYSDK_OFFSET(0xC232E40)
#define PGOOHIHKHNJ_NNGMOCFGPBN_OFFSET UNITYSDK_OFFSET(0xC230D90)
#define PGOOHIHKHNJ_OEDNMEEIMFJ_OFFSET UNITYSDK_OFFSET(0xC22F740)
#define PGOOHIHKHNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC22C180)
#define PGOOHIHKHNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC22EAC0)
#define PGOOHIHKHNJ_PKGPFIAHMKK_OFFSET UNITYSDK_OFFSET(0xC22F000)
#define PGOOHIHKHNJ_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xC234FF0)
#define PGOOHIHKHNJ_TICK_OFFSET UNITYSDK_OFFSET(0xC22EB10)

	class PGOOHIHKHNJ : public ::GELIALJDFBL
	{
	public:
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* DOBPMCAIEEI; // 0x28
		::System::Collections::Generic::List_1<::AJHEPIMIGBG*>* IIFDOKDCEEC; // 0x30
		::RPG::GameCore::DamageByAttackProperty* OFKGLJOAMLD; // 0x38
		::System::Boolean _Disposed_k__BackingField; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_DISPOSE_OFFSET))(this);
		}

		::AJHEPIMIGBG* DNHKELIFIBE()
		{
			return ((::AJHEPIMIGBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_DNHKELIFIBE_OFFSET))(this);
		}

		::System::Void MJCKEMCGPIH(::AJHEPIMIGBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJHEPIMIGBG*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_MJCKEMCGPIH_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HPKFAFOPGPG(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_HPKFAFOPGPG_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_TICK_OFFSET))(this, a1);
		}

		::NCJILFFNINI* GCCCMLFDIHE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::NCJILFFNINI*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_GCCCMLFDIHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AKOHOFAMBMP(::NCJILFFNINI* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_AKOHOFAMBMP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ENNJBMNBLNA(::NCJILFFNINI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_ENNJBMNBLNA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint FIBGIPGOEFO(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_FIBGIPGOEFO_OFFSET))(this, a1);
		}

		::System::Boolean GLDAGCNDCMA(::LKFODAOEFHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKFODAOEFHC*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_GLDAGCNDCMA_OFFSET))(this, a1);
		}

		::System::Void PKGPFIAHMKK(::NCJILFFNINI* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_PKGPFIAHMKK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GKKNKDHBJKN(::NCJILFFNINI* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_GKKNKDHBJKN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void COADOLBGKGK(::NCJILFFNINI* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::TurnBasedAbilityComponent* a6)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_COADOLBGKGK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean NNGMOCFGPBN(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2, ::NCJILFFNINI* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::KFELGAIGHAP* a10)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*, ::NCJILFFNINI*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_NNGMOCFGPBN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void CJFALFFMGLG(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::AttackData* a4, ::NCJILFFNINI* a5, ::BGMFAGEMHOM a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackData*, ::NCJILFFNINI*, ::BGMFAGEMHOM))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_CJFALFFMGLG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void OEDNMEEIMFJ(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::NCJILFFNINI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_OEDNMEEIMFJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGBMDAOELAA(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::NCJILFFNINI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_BGBMDAOELAA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void AILDBGOLHDJ(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::NCJILFFNINI* a3, ::KFELGAIGHAP* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::NCJILFFNINI*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_AILDBGOLHDJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GEIGJNPPCGP(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::NCJILFFNINI* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_GEIGJNPPCGP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NAAPPHLGMNL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::DamageByAttackProperty* a5, ::NCJILFFNINI* a6, ::RPG::GameCore::TaskContext* a7)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::DamageByAttackProperty*, ::NCJILFFNINI*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_NAAPPHLGMNL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void DMOCJHCDALA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::AttackData* a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::System::Single))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_DMOCJHCDALA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean CMKFNAAGOIF(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_CMKFNAAGOIF_OFFSET))(a1, a2);
		}

		static ::System::Void DMFKGEBBGGG(::RPG::Client::MonoEffect* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_DMFKGEBBGGG_OFFSET))(a1, a2);
		}

		::System::Void DMPONLJNPHC(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_DMPONLJNPHC_OFFSET))(this, a1);
		}

		static ::System::Void HENBCPEDKEB(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::NCJILFFNINI* a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::NCJILFFNINI*, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_HENBCPEDKEB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NEEPFBGJHEF(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::NCJILFFNINI* a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::NCJILFFNINI*, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_NEEPFBGJHEF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IODJCEGHJML(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::NCJILFFNINI* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_IODJCEGHJML_OFFSET))(a1, a2);
		}

		static ::System::Void EKHKMMBJODJ(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::NCJILFFNINI* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_EKHKMMBJODJ_OFFSET))(a1, a2);
		}

		::System::Boolean get_Disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_Disposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGOOHIHKHNJ_SET_DISPOSED_OFFSET))(this, a1);
		}

	};
