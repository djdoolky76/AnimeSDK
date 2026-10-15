#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFHAILABBJG.h"
#include "unitysdk/NCPLKHJEBFG.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/SummonUnitFetchType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class EKFMIDBJDIA;
class ENEIHJJPNPI;
class LEKGOJBMJHD;
class LLADGGNOJPG;
class PBGJFNCHEJO;
class PNIPKAHHOLL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define HHCKNGMIAKL_AFBPGBBMBAK_OFFSET UNITYSDK_OFFSET(0x15CB75E0)
#define HHCKNGMIAKL_AGEHNAKOKOA_OFFSET UNITYSDK_OFFSET(0x15CB6760)
#define HHCKNGMIAKL_AHGGIOHLMCE_OFFSET UNITYSDK_OFFSET(0x15CB6F70)
#define HHCKNGMIAKL_AKJDGLEDNKH_OFFSET UNITYSDK_OFFSET(0x15CB77F0)
#define HHCKNGMIAKL_BCMGIJLPCPE_OFFSET UNITYSDK_OFFSET(0x15CB8A50)
#define HHCKNGMIAKL_BNFFMCPFFBC_OFFSET UNITYSDK_OFFSET(0x15CB5150)
#define HHCKNGMIAKL_CFOKDBJHHJO_OFFSET UNITYSDK_OFFSET(0x15CB81D0)
#define HHCKNGMIAKL_CKEIHIHFEMF_OFFSET UNITYSDK_OFFSET(0x15CB79B0)
#define HHCKNGMIAKL_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB47C0)
#define HHCKNGMIAKL_DIDAOEJPMFM_1_OFFSET UNITYSDK_OFFSET(0x15CB7BF0)
#define HHCKNGMIAKL_DIDAOEJPMFM_OFFSET UNITYSDK_OFFSET(0x15CB7AD0)
#define HHCKNGMIAKL_DIMIDBDLAEK_OFFSET UNITYSDK_OFFSET(0x15CB6C60)
#define HHCKNGMIAKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CB4AD0)
#define HHCKNGMIAKL_EFDDCFICELB_OFFSET UNITYSDK_OFFSET(0x15CB8260)
#define HHCKNGMIAKL_GDAKHGKJEGN_OFFSET UNITYSDK_OFFSET(0x15CB7F60)
#define HHCKNGMIAKL_GOFLHELNGDB_OFFSET UNITYSDK_OFFSET(0x15CB8F00)
#define HHCKNGMIAKL_HHOJLKPKMHN_OFFSET UNITYSDK_OFFSET(0x15CB8EF0)
#define HHCKNGMIAKL_HNDHDALEEAE_OFFSET UNITYSDK_OFFSET(0x15CB85B0)
#define HHCKNGMIAKL_HNKBEBMODFP_OFFSET UNITYSDK_OFFSET(0x15CB87F0)
#define HHCKNGMIAKL_IGDBBJCALGA_OFFSET UNITYSDK_OFFSET(0x15CB8730)
#define HHCKNGMIAKL_IMIKCDFLEBO_OFFSET UNITYSDK_OFFSET(0x15CB6580)
#define HHCKNGMIAKL_IOFNGCNNOJO_OFFSET UNITYSDK_OFFSET(0x15CB80A0)
#define HHCKNGMIAKL_JHGKFFIEDIF_OFFSET UNITYSDK_OFFSET(0x15CB8560)
#define HHCKNGMIAKL_JHNDBOLLCFM_1_OFFSET UNITYSDK_OFFSET(0x15CB7E30)
#define HHCKNGMIAKL_JHNDBOLLCFM_OFFSET UNITYSDK_OFFSET(0x15CB7D00)
#define HHCKNGMIAKL_JJCELCKKHII_OFFSET UNITYSDK_OFFSET(0x15CB4FB0)
#define HHCKNGMIAKL_JKELMCDLFDH_OFFSET UNITYSDK_OFFSET(0x15CB4EF0)
#define HHCKNGMIAKL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15CB4E90)
#define HHCKNGMIAKL_JPLAODBPPBB_OFFSET UNITYSDK_OFFSET(0x15CB83C0)
#define HHCKNGMIAKL_KAEGHCAPHNI_OFFSET UNITYSDK_OFFSET(0x15CB84D0)
#define HHCKNGMIAKL_MMBOIKCPFDJ_OFFSET UNITYSDK_OFFSET(0x15CB8EE0)
#define HHCKNGMIAKL_PHEJFJMPOFP_OFFSET UNITYSDK_OFFSET(0x15CB7070)
#define HHCKNGMIAKL_PMEACGOONCM_OFFSET UNITYSDK_OFFSET(0x15CB5E90)

	class HHCKNGMIAKL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::PNIPKAHHOLL*>* JIKFNBNOINH; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* LLCAMLIMKKC; // 0x18
		::RPG::GameCore::GameWorld* LMMOLOCONLH; // 0x20
		::System::Collections::Generic::List_1<::CFHAILABBJG>* LNJCKAJKNDJ; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FBPBPNJMKFM; // 0x30
		::System::Collections::Generic::List_1<::LEKGOJBMJHD*>* IBMHJFPBNFP; // 0x38
		::System::Collections::Generic::Queue_1<::RPG::GameCore::GameEntity*>* EKIMCOIGBEJ; // 0x40
		::Il2CppArray<::RPG::GameCore::GameEntity*>* DEMFBOHFNIG; // 0x48
		::NCPLKHJEBFG HKPMKAEOFKB; // 0x50
		::System::UInt32 KCLNNOIOPAJ; // 0x64
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* BNFFMCPFFBC(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::MVector3 a9, ::LLADGGNOJPG* a10, ::System::Action* a11, ::RPG::GameCore::EntityClassifyType a12, ::System::Boolean a13, ::ENEIHJJPNPI* a14)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::LLADGGNOJPG*, ::System::Action*, ::RPG::GameCore::EntityClassifyType, ::System::Boolean, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_BNFFMCPFFBC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::System::Boolean IMIKCDFLEBO(::LLADGGNOJPG* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLADGGNOJPG*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_IMIKCDFLEBO_OFFSET))(this, a1, a2);
		}

		::System::Void AGEHNAKOKOA(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_AGEHNAKOKOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PMEACGOONCM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_PMEACGOONCM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DIMIDBDLAEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_DIMIDBDLAEK_OFFSET))(this);
		}

		::System::Void AHGGIOHLMCE(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SummonUnitFetchType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitFetchType))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_AHGGIOHLMCE_OFFSET))(this, a1, a2, a3);
		}

		::PBGJFNCHEJO* AFBPGBBMBAK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6)
		{
			return ((::PBGJFNCHEJO*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_AFBPGBBMBAK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean AKJDGLEDNKH(::PBGJFNCHEJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBGJFNCHEJO*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_AKJDGLEDNKH_OFFSET))(this, a1);
		}

		::PBGJFNCHEJO* CKEIHIHFEMF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::PBGJFNCHEJO*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_CKEIHIHFEMF_OFFSET))(this, a1, a2);
		}

		::System::Boolean DIDAOEJPMFM(::PBGJFNCHEJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBGJFNCHEJO*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_DIDAOEJPMFM_OFFSET))(this, a1);
		}

		::System::Boolean DIDAOEJPMFM_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_DIDAOEJPMFM_1_OFFSET))(this, a1, a2);
		}

		::System::Void JHNDBOLLCFM(::PBGJFNCHEJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGJFNCHEJO*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JHNDBOLLCFM_OFFSET))(this, a1);
		}

		::System::Void JHNDBOLLCFM_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JHNDBOLLCFM_1_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GDAKHGKJEGN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_GDAKHGKJEGN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* PHEJFJMPOFP(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::SummonUnitFetchType a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SummonUnitFetchType))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_PHEJFJMPOFP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntityList* IOFNGCNNOJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_IOFNGCNNOJO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CFOKDBJHHJO(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_CFOKDBJHHJO_OFFSET))(this, a1);
		}

		::System::Void EFDDCFICELB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_EFDDCFICELB_OFFSET))(this, a1);
		}

		::System::Void JPLAODBPPBB(::LEKGOJBMJHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEKGOJBMJHD*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JPLAODBPPBB_OFFSET))(this, a1);
		}

		::System::Void KAEGHCAPHNI(::LEKGOJBMJHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEKGOJBMJHD*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_KAEGHCAPHNI_OFFSET))(this, a1);
		}

		::System::Void JHGKFFIEDIF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JHGKFFIEDIF_OFFSET))(this, a1);
		}

		::System::Void HNDHDALEEAE(::RPG::Client::GamePlayLockTarget a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePlayLockTarget, ::System::Boolean))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_HNDHDALEEAE_OFFSET))(this, a1, a2);
		}

		::System::Void IGDBBJCALGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_IGDBBJCALGA_OFFSET))(this);
		}

		::System::Void HNKBEBMODFP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_HNKBEBMODFP_OFFSET))(this, a1, a2);
		}

		::System::Void BCMGIJLPCPE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_BCMGIJLPCPE_OFFSET))(this, a1);
		}

		::System::Void JKELMCDLFDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JKELMCDLFDH_OFFSET))(this);
		}

		::System::Void JJCELCKKHII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_JJCELCKKHII_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* MMBOIKCPFDJ()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_MMBOIKCPFDJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HHOJLKPKMHN()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_HHOJLKPKMHN_OFFSET))(this);
		}

		::System::UInt32 GOFLHELNGDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCKNGMIAKL_GOFLHELNGDB_OFFSET))(this);
		}

	};
