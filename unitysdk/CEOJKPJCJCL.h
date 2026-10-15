#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"
class ACFLKPFDHIM;
class BGLCGNCLHLJ;
class BJGJBNJDLIK;
class EKFMIDBJDIA;
class GMMNMPCKJEM;
class KFELGAIGHAP;
class KHFHMJEMBOF;
class MGMJOPHJCNL;
class MIPDJDJLGPL;
class MLCLJKDKCDG;
class NIEGDAPHKGC;
class OGFNMNGJPIC;
class OJCBOMCCPDB;
class PIOGCEBHNBF;
class PKDNDNABKII;
class PLMOFPPHJBH;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEOJKPJCJCL_ALJGLNHKBPB_OFFSET UNITYSDK_OFFSET(0xC9EFC10)
#define CEOJKPJCJCL_ANCIOKOAKIA_OFFSET UNITYSDK_OFFSET(0xC9EFC80)
#define CEOJKPJCJCL_AOKGEFACMEN_OFFSET UNITYSDK_OFFSET(0xC9EF7A0)
#define CEOJKPJCJCL_BCJCEOLMMAL_OFFSET UNITYSDK_OFFSET(0xC9F37C0)
#define CEOJKPJCJCL_BGLDCGCKOBG_OFFSET UNITYSDK_OFFSET(0xC9F58A0)
#define CEOJKPJCJCL_BLMOFGAKEKC_OFFSET UNITYSDK_OFFSET(0xC9F0520)
#define CEOJKPJCJCL_CIFDNJNHEKD_OFFSET UNITYSDK_OFFSET(0xC9EF1F0)
#define CEOJKPJCJCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC9EE920)
#define CEOJKPJCJCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9F02C0)
#define CEOJKPJCJCL_EFFAFEGBOIF_OFFSET UNITYSDK_OFFSET(0xC9F0970)
#define CEOJKPJCJCL_EFJEPEFNJNL_OFFSET UNITYSDK_OFFSET(0xC9F0DD0)
#define CEOJKPJCJCL_EPPOMLEFPOI_OFFSET UNITYSDK_OFFSET(0xC9EFD70)
#define CEOJKPJCJCL_GIDLCFDOLNM_OFFSET UNITYSDK_OFFSET(0xC9F5120)
#define CEOJKPJCJCL_HBIBCOCDJAL_OFFSET UNITYSDK_OFFSET(0xC9F04D0)
#define CEOJKPJCJCL_HHOPEPPBICC_OFFSET UNITYSDK_OFFSET(0xC9F49B0)
#define CEOJKPJCJCL_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xC9F1110)
#define CEOJKPJCJCL_IELCKICNFFG_OFFSET UNITYSDK_OFFSET(0xC9F30E0)
#define CEOJKPJCJCL_JFKOEPGLAJM_OFFSET UNITYSDK_OFFSET(0xC9EF4B0)
#define CEOJKPJCJCL_KACDJDBAPKB_OFFSET UNITYSDK_OFFSET(0xC9F3F20)
#define CEOJKPJCJCL_KLFCBFEHMDC_OFFSET UNITYSDK_OFFSET(0xC9EF430)
#define CEOJKPJCJCL_KNIJCNEHDML_OFFSET UNITYSDK_OFFSET(0xC9F2150)
#define CEOJKPJCJCL_LMBMDANOMCG_OFFSET UNITYSDK_OFFSET(0xC9F27F0)
#define CEOJKPJCJCL_NENKMMBJMFJ_OFFSET UNITYSDK_OFFSET(0xC9EFF50)
#define CEOJKPJCJCL_NGLNEHBNNOO_OFFSET UNITYSDK_OFFSET(0xC9EF470)
#define CEOJKPJCJCL_NJHGJPDPBHE_OFFSET UNITYSDK_OFFSET(0xC9F4680)
#define CEOJKPJCJCL_NPJHPFAAIAI_OFFSET UNITYSDK_OFFSET(0xC9EF3F0)
#define CEOJKPJCJCL_PANMBOCJAGO_1_OFFSET UNITYSDK_OFFSET(0xC9F5BB0)
#define CEOJKPJCJCL_PANMBOCJAGO_2_OFFSET UNITYSDK_OFFSET(0xC9F5C90)
#define CEOJKPJCJCL_PANMBOCJAGO_3_OFFSET UNITYSDK_OFFSET(0xC9F5DE0)
#define CEOJKPJCJCL_PANMBOCJAGO_4_OFFSET UNITYSDK_OFFSET(0xC9F5E70)
#define CEOJKPJCJCL_PANMBOCJAGO_5_OFFSET UNITYSDK_OFFSET(0xC9F5EE0)
#define CEOJKPJCJCL_PANMBOCJAGO_6_OFFSET UNITYSDK_OFFSET(0xC9F5F60)
#define CEOJKPJCJCL_PANMBOCJAGO_7_OFFSET UNITYSDK_OFFSET(0xC9F5FD0)
#define CEOJKPJCJCL_PANMBOCJAGO_OFFSET UNITYSDK_OFFSET(0xC9F5AB0)
#define CEOJKPJCJCL_PBDALENLKOK_OFFSET UNITYSDK_OFFSET(0xC9F2ED0)
#define CEOJKPJCJCL_PHDFPLAGOCK_OFFSET UNITYSDK_OFFSET(0xC9F0840)

	class CEOJKPJCJCL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PLMOFPPHJBH*>* DOLJBPFAOPP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>* GABDJKKKCOK; // 0x18
		::OGFNMNGJPIC* HKBAFFELNIO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>* ILPKKPIKPNA; // 0x28
		::RPG::GameCore::GameEntity* AELNGMIHKLE; // 0x30
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x38
		::GMMNMPCKJEM* FDKJEDLPHEB; // 0x40
		::KFELGAIGHAP* JGELGCFNHMH; // 0x48
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGFNMNGJPIC*>* JNJPCGJJGGD; // 0x58
		::RPG::GameCore::FixPoint NFFICHBIEJE; // 0x60
		::System::UInt32 BLDMKIKHJBF; // 0x68
		::System::Boolean MINOCKBJCLP; // 0x6C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint CBHNEIJEAKH; // 0x70
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_CTOR_OFFSET))(this, a1);
		}

		::System::Void CIFDNJNHEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_CIFDNJNHEKD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGFNMNGJPIC*>* NPJHPFAAIAI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGFNMNGJPIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_NPJHPFAAIAI_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>* KLFCBFEHMDC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_KLFCBFEHMDC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>* NGLNEHBNNOO()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::OGFNMNGJPIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_NGLNEHBNNOO_OFFSET))(this);
		}

		::System::Void JFKOEPGLAJM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_JFKOEPGLAJM_OFFSET))(this, a1);
		}

		::System::Void AOKGEFACMEN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_AOKGEFACMEN_OFFSET))(this, a1);
		}

		::System::Void ANCIOKOAKIA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_ANCIOKOAKIA_OFFSET))(this, a1);
		}

		::System::Void EPPOMLEFPOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_EPPOMLEFPOI_OFFSET))(this, a1);
		}

		::System::Void NENKMMBJMFJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_NENKMMBJMFJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_DISPOSE_OFFSET))(this);
		}

		::System::Void HBIBCOCDJAL(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_HBIBCOCDJAL_OFFSET))(this, a1);
		}

		::System::Void PHDFPLAGOCK(::RPG::GameCore::TurnBasedModifierInstance* a1, ::KFELGAIGHAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PHDFPLAGOCK_OFFSET))(this, a1, a2);
		}

		::System::Void EFFAFEGBOIF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GridFightEquipCategory a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_EFFAFEGBOIF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALJGLNHKBPB(::OGFNMNGJPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGFNMNGJPIC*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_ALJGLNHKBPB_OFFSET))(this, a1);
		}

		::System::Void BLMOFGAKEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_BLMOFGAKEKC_OFFSET))(this);
		}

		::System::Boolean EFJEPEFNJNL(::System::UInt32 a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_EFJEPEFNJNL_OFFSET))(this, a1, a2);
		}

		::MGMJOPHJCNL* HMPDCLHIPHI()
		{
			return ((::MGMJOPHJCNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_HMPDCLHIPHI_OFFSET))(this);
		}

		static ::System::Boolean KNIJCNEHDML(::OJCBOMCCPDB* a1, ::OJCBOMCCPDB* a2)
		{
			return ((::System::Boolean(*)(::OJCBOMCCPDB*, ::OJCBOMCCPDB*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_KNIJCNEHDML_OFFSET))(a1, a2);
		}

		static ::System::Void BGLDCGCKOBG(::Google::Protobuf::Collections::RepeatedField_1<::PKDNDNABKII*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::PKDNDNABKII*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::PKDNDNABKII*>*, ::Google::Protobuf::Collections::RepeatedField_1<::PKDNDNABKII*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_BGLDCGCKOBG_OFFSET))(a1, a2);
		}

		static ::System::Void GIDLCFDOLNM(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_GIDLCFDOLNM_OFFSET))(a1, a2);
		}

		static ::System::Void PBDALENLKOK(::Google::Protobuf::Collections::RepeatedField_1<::PIOGCEBHNBF*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::PIOGCEBHNBF*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::PIOGCEBHNBF*>*, ::Google::Protobuf::Collections::RepeatedField_1<::PIOGCEBHNBF*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PBDALENLKOK_OFFSET))(a1, a2);
		}

		static ::System::Void LMBMDANOMCG(::Google::Protobuf::Collections::RepeatedField_1<::NIEGDAPHKGC*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::NIEGDAPHKGC*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::NIEGDAPHKGC*>*, ::Google::Protobuf::Collections::RepeatedField_1<::NIEGDAPHKGC*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_LMBMDANOMCG_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO(::NIEGDAPHKGC* a1, ::NIEGDAPHKGC* a2)
		{
			return ((::System::Boolean(*)(::NIEGDAPHKGC*, ::NIEGDAPHKGC*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_OFFSET))(a1, a2);
		}

		static ::System::Void IELCKICNFFG(::Google::Protobuf::Collections::RepeatedField_1<::BJGJBNJDLIK*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::BJGJBNJDLIK*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::BJGJBNJDLIK*>*, ::Google::Protobuf::Collections::RepeatedField_1<::BJGJBNJDLIK*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_IELCKICNFFG_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_1(::BJGJBNJDLIK* a1, ::BJGJBNJDLIK* a2)
		{
			return ((::System::Boolean(*)(::BJGJBNJDLIK*, ::BJGJBNJDLIK*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_2(::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>* a2)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>*, ::Google::Protobuf::Collections::RepeatedField_1<::ACFLKPFDHIM*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_3(::ACFLKPFDHIM* a1, ::ACFLKPFDHIM* a2)
		{
			return ((::System::Boolean(*)(::ACFLKPFDHIM*, ::ACFLKPFDHIM*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_3_OFFSET))(a1, a2);
		}

		static ::System::Void BCJCEOLMMAL(::Google::Protobuf::Collections::RepeatedField_1<::BGLCGNCLHLJ*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::BGLCGNCLHLJ*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::BGLCGNCLHLJ*>*, ::Google::Protobuf::Collections::RepeatedField_1<::BGLCGNCLHLJ*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_BCJCEOLMMAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_4(::BGLCGNCLHLJ* a1, ::BGLCGNCLHLJ* a2)
		{
			return ((::System::Boolean(*)(::BGLCGNCLHLJ*, ::BGLCGNCLHLJ*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_4_OFFSET))(a1, a2);
		}

		static ::System::Void HHOPEPPBICC(::Google::Protobuf::Collections::RepeatedField_1<::MLCLJKDKCDG*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::MLCLJKDKCDG*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::MLCLJKDKCDG*>*, ::Google::Protobuf::Collections::RepeatedField_1<::MLCLJKDKCDG*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_HHOPEPPBICC_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_5(::MLCLJKDKCDG* a1, ::MLCLJKDKCDG* a2)
		{
			return ((::System::Boolean(*)(::MLCLJKDKCDG*, ::MLCLJKDKCDG*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_5_OFFSET))(a1, a2);
		}

		static ::System::Void KACDJDBAPKB(::Google::Protobuf::Collections::RepeatedField_1<::KHFHMJEMBOF*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::KHFHMJEMBOF*>* a2)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::KHFHMJEMBOF*>*, ::Google::Protobuf::Collections::RepeatedField_1<::KHFHMJEMBOF*>*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_KACDJDBAPKB_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_6(::KHFHMJEMBOF* a1, ::KHFHMJEMBOF* a2)
		{
			return ((::System::Boolean(*)(::KHFHMJEMBOF*, ::KHFHMJEMBOF*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_6_OFFSET))(a1, a2);
		}

		static ::System::Void NJHGJPDPBHE(::MIPDJDJLGPL* a1, ::MIPDJDJLGPL* a2)
		{
			return ((::System::Void(*)(::MIPDJDJLGPL*, ::MIPDJDJLGPL*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_NJHGJPDPBHE_OFFSET))(a1, a2);
		}

		static ::System::Boolean PANMBOCJAGO_7(::MIPDJDJLGPL* a1, ::MIPDJDJLGPL* a2)
		{
			return ((::System::Boolean(*)(::MIPDJDJLGPL*, ::MIPDJDJLGPL*))((::PBYTE)hIl2Cpp + CEOJKPJCJCL_PANMBOCJAGO_7_OFFSET))(a1, a2);
		}

	};
