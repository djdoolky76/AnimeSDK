#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OBJANKHLNGO;
class OOCCBMLAELL;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJBAPLNNLIC_AGJEOFKEFON_OFFSET UNITYSDK_OFFSET(0x157B6FA0)
#define FJBAPLNNLIC_CIBJHGAMAOH_OFFSET UNITYSDK_OFFSET(0x157B7970)
#define FJBAPLNNLIC_CNOGHNIHLOA_OFFSET UNITYSDK_OFFSET(0x157B7F30)
#define FJBAPLNNLIC_CTOR_OFFSET UNITYSDK_OFFSET(0x157B7110)
#define FJBAPLNNLIC_EGJKOEJKBLC_OFFSET UNITYSDK_OFFSET(0x157B7CD0)
#define FJBAPLNNLIC_EIIJCLPCFLM_OFFSET UNITYSDK_OFFSET(0x157B75C0)
#define FJBAPLNNLIC_EKHCFAHENAO_OFFSET UNITYSDK_OFFSET(0x157B8050)
#define FJBAPLNNLIC_FINDMDFBBJE_OFFSET UNITYSDK_OFFSET(0x157B7E70)
#define FJBAPLNNLIC_FMNFMLKMHHL_OFFSET UNITYSDK_OFFSET(0x157B7370)
#define FJBAPLNNLIC_GDGADMIGKHJ_OFFSET UNITYSDK_OFFSET(0x157B7DB0)
#define FJBAPLNNLIC_GJCKGGFKNKG_OFFSET UNITYSDK_OFFSET(0x157B7AB0)
#define FJBAPLNNLIC_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x157B7280)
#define FJBAPLNNLIC_IAKBLBBJONL_OFFSET UNITYSDK_OFFSET(0x157B7860)
#define FJBAPLNNLIC_IDDHLPCMLHI_OFFSET UNITYSDK_OFFSET(0x157B76E0)
#define FJBAPLNNLIC_JDOBCFMGDDJ_OFFSET UNITYSDK_OFFSET(0x157B7030)
#define FJBAPLNNLIC_KGGLNAHKECB_OFFSET UNITYSDK_OFFSET(0x157B6F40)
#define FJBAPLNNLIC_KOCLLLMBOIH_OFFSET UNITYSDK_OFFSET(0x157B7E10)
#define FJBAPLNNLIC_KPGEFNMJCML_OFFSET UNITYSDK_OFFSET(0x157B7460)
#define FJBAPLNNLIC_LGIDJNCMFJA_OFFSET UNITYSDK_OFFSET(0x157B7ED0)
#define FJBAPLNNLIC_LJAIPIJLIIN_OFFSET UNITYSDK_OFFSET(0x157B80E0)
#define FJBAPLNNLIC_LNKJJFOJPHH_OFFSET UNITYSDK_OFFSET(0x157B77F0)
#define FJBAPLNNLIC_LNLPIJBOLND_OFFSET UNITYSDK_OFFSET(0x157B7D50)
#define FJBAPLNNLIC_MGCFHDECICH_OFFSET UNITYSDK_OFFSET(0x157B6DE0)
#define FJBAPLNNLIC_MHBFJIMHDBJ_OFFSET UNITYSDK_OFFSET(0x157B7750)
#define FJBAPLNNLIC_NACJHPFBGNJ_OFFSET UNITYSDK_OFFSET(0x157B77B0)
#define FJBAPLNNLIC_NLIFDKMPCPP_OFFSET UNITYSDK_OFFSET(0x157B7BC0)
#define FJBAPLNNLIC_NNBHHBIMGHP_OFFSET UNITYSDK_OFFSET(0x157B7300)
#define FJBAPLNNLIC_NOJOCNONGMA_OFFSET UNITYSDK_OFFSET(0x157B7FC0)
#define FJBAPLNNLIC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x157B7180)
#define FJBAPLNNLIC_OHNHAODHHKK_OFFSET UNITYSDK_OFFSET(0x157B7A10)
#define FJBAPLNNLIC_OKJJGNBFAOD_1_OFFSET UNITYSDK_OFFSET(0x157B7520)
#define FJBAPLNNLIC_OKJJGNBFAOD_OFFSET UNITYSDK_OFFSET(0x157B73D0)
#define FJBAPLNNLIC_PIGPIPKKOLH_OFFSET UNITYSDK_OFFSET(0x157B7650)

	class FJBAPLNNLIC : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::System::Boolean BMLEFENJBOJ; // 0x18
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BattleGamePhase* MGCFHDECICH()
		{
			return ((::RPG::Client::BattleGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_MGCFHDECICH_OFFSET))(this);
		}

		::RPG::GameCore::BattleInstance* KGGLNAHKECB()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_KGGLNAHKECB_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* AGJEOFKEFON()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_AGJEOFKEFON_OFFSET))(this);
		}

		::OOCCBMLAELL* JDOBCFMGDDJ()
		{
			return ((::OOCCBMLAELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_JDOBCFMGDDJ_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_HFKFNFKIEON_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* NNBHHBIMGHP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_NNBHHBIMGHP_OFFSET))(this, a1);
		}

		::System::Void FMNFMLKMHHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_FMNFMLKMHHL_OFFSET))(this);
		}

		::System::Void OKJJGNBFAOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_OKJJGNBFAOD_OFFSET))(this, a1);
		}

		::System::Void OKJJGNBFAOD_1(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_OKJJGNBFAOD_1_OFFSET))(this, a1, a2);
		}

		::System::Void EIIJCLPCFLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_EIIJCLPCFLM_OFFSET))(this, a1);
		}

		::System::Void PIGPIPKKOLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_PIGPIPKKOLH_OFFSET))(this, a1);
		}

		::System::Void IDDHLPCMLHI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_IDDHLPCMLHI_OFFSET))(this, a1);
		}

		::System::Boolean MHBFJIMHDBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_MHBFJIMHDBJ_OFFSET))(this);
		}

		::System::Boolean NACJHPFBGNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_NACJHPFBGNJ_OFFSET))(this);
		}

		::System::Boolean LNKJJFOJPHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_LNKJJFOJPHH_OFFSET))(this);
		}

		::System::Void IAKBLBBJONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_IAKBLBBJONL_OFFSET))(this);
		}

		::System::Void GJCKGGFKNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_GJCKGGFKNKG_OFFSET))(this);
		}

		::System::Void NLIFDKMPCPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_NLIFDKMPCPP_OFFSET))(this, a1);
		}

		::System::Void EGJKOEJKBLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_EGJKOEJKBLC_OFFSET))(this, a1);
		}

		static ::System::Void CIBJHGAMAOH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_CIBJHGAMAOH_OFFSET))(a1);
		}

		::System::Void OHNHAODHHKK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_OHNHAODHHKK_OFFSET))(this, a1);
		}

		static ::System::Void KPGEFNMJCML(::BJHMBGLPOLB* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::BJHMBGLPOLB*, ::System::UInt32))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_KPGEFNMJCML_OFFSET))(a1, a2);
		}

		::System::Boolean LNLPIJBOLND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_LNLPIJBOLND_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GDGADMIGKHJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_GDGADMIGKHJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KOCLLLMBOIH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_KOCLLLMBOIH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FINDMDFBBJE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_FINDMDFBBJE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LGIDJNCMFJA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_LGIDJNCMFJA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CNOGHNIHLOA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_CNOGHNIHLOA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NOJOCNONGMA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_NOJOCNONGMA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EKHCFAHENAO()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_EKHCFAHENAO_OFFSET))(this);
		}

		::System::Int32 LJAIPIJLIIN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJBAPLNNLIC_LJAIPIJLIIN_OFFSET))(this);
		}

	};
