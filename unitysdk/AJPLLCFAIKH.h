#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class DLIBCMNBLGF;
class FNNMLBJJPBJ;
class JGGNIOIBDBC;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class GridFightAvatarRow_AvatarCommonRowWrap; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJPLLCFAIKH_ABDHMOCLEEI_OFFSET UNITYSDK_OFFSET(0x19D4EBF0)
#define AJPLLCFAIKH_AICKIGBNKMC_OFFSET UNITYSDK_OFFSET(0x19D4CAB0)
#define AJPLLCFAIKH_APKBCBCOHNJ_OFFSET UNITYSDK_OFFSET(0x19D4CDC0)
#define AJPLLCFAIKH_BAIKJPCLHJN_OFFSET UNITYSDK_OFFSET(0x19D4CED0)
#define AJPLLCFAIKH_BENAMPEGOGE_OFFSET UNITYSDK_OFFSET(0x19D4AC00)
#define AJPLLCFAIKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x19D51FC0)
#define AJPLLCFAIKH_CJLKCJOJPPC_OFFSET UNITYSDK_OFFSET(0x19D51550)
#define AJPLLCFAIKH_CTOR_OFFSET UNITYSDK_OFFSET(0x19D51F40)
#define AJPLLCFAIKH_DGNCJMELHGH_OFFSET UNITYSDK_OFFSET(0x19D517D0)
#define AJPLLCFAIKH_EAFOEJEAOIG_OFFSET UNITYSDK_OFFSET(0x19D51410)
#define AJPLLCFAIKH_EOOGDJKDAAA_OFFSET UNITYSDK_OFFSET(0x19D50110)
#define AJPLLCFAIKH_FENHKKBCLIH_OFFSET UNITYSDK_OFFSET(0x19D503C0)
#define AJPLLCFAIKH_FGLPAAAFECE_1_OFFSET UNITYSDK_OFFSET(0x19D4C850)
#define AJPLLCFAIKH_FGLPAAAFECE_2_OFFSET UNITYSDK_OFFSET(0x19D4C090)
#define AJPLLCFAIKH_FGLPAAAFECE_OFFSET UNITYSDK_OFFSET(0x19D4C1E0)
#define AJPLLCFAIKH_FLEAILCNIAB_OFFSET UNITYSDK_OFFSET(0x19D51BD0)
#define AJPLLCFAIKH_FLGPFHBJHOC_OFFSET UNITYSDK_OFFSET(0x19D51690)
#define AJPLLCFAIKH_FOHAGAJNFJK_OFFSET UNITYSDK_OFFSET(0x19D4C660)
#define AJPLLCFAIKH_FPAGOGEAFBM_OFFSET UNITYSDK_OFFSET(0x19D4C2B0)
#define AJPLLCFAIKH_GGMOPCEPOKH_OFFSET UNITYSDK_OFFSET(0x19D4BED0)
#define AJPLLCFAIKH_IENJFDMOJEH_OFFSET UNITYSDK_OFFSET(0x19D51240)
#define AJPLLCFAIKH_ILFFKEMIPFP_OFFSET UNITYSDK_OFFSET(0x19D4CBD0)
#define AJPLLCFAIKH_JLPNANJKNIB_OFFSET UNITYSDK_OFFSET(0x19D4CCB0)
#define AJPLLCFAIKH_KHBKMGKKKMK_OFFSET UNITYSDK_OFFSET(0x19D4F340)
#define AJPLLCFAIKH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19D4E6C0)
#define AJPLLCFAIKH_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x19D4EB20)
#define AJPLLCFAIKH_MELEKHKLCBE_OFFSET UNITYSDK_OFFSET(0x19D4E780)
#define AJPLLCFAIKH_MHDILIJLFPL_OFFSET UNITYSDK_OFFSET(0x19D4DB50)
#define AJPLLCFAIKH_MIILFJOLINH_OFFSET UNITYSDK_OFFSET(0x19D50570)
#define AJPLLCFAIKH_MMEJOPHJBNL_OFFSET UNITYSDK_OFFSET(0x19D4C8E0)
#define AJPLLCFAIKH_MPKEBCJHBOE_OFFSET UNITYSDK_OFFSET(0x19D51E50)
#define AJPLLCFAIKH_NKGLNFLOHKJ_OFFSET UNITYSDK_OFFSET(0x19D4D5C0)
#define AJPLLCFAIKH_OHKHBHOGOHD_OFFSET UNITYSDK_OFFSET(0x19D4FFF0)
#define AJPLLCFAIKH_PDPMKMDLJFE_OFFSET UNITYSDK_OFFSET(0x19D4D620)
#define AJPLLCFAIKH_PKMKCFFKKKF_OFFSET UNITYSDK_OFFSET(0x19D4CB20)

inline static constexpr unsigned int AJPLLCFAIKH_TypeDefinitionIndex = 57453;

	class AJPLLCFAIKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AbilityProperty, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*>* BNGHGMDPEFJ; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* POPPELOGCPF; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::RPG::GameCore::LineUpCharacter* DLOBMJMELPF; // 0x28
		::RPG::GameCore::AbilityProperty MOBKPCEGFBH; // 0x30
		::System::Boolean EGDLBDALBFO; // 0x34
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AbilityProperty>** StaticGet_CPAOAFGLKGG()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AbilityProperty>**)UnitySDK::FromName("", "AJPLLCFAIKH")->GetStaticField(0x59860);
		}

		static ::System::Collections::BitArray** StaticGet_CPNHNNNFMLP()
		{
			return (::System::Collections::BitArray**)UnitySDK::FromName("", "AJPLLCFAIKH")->GetStaticField(0x59868);
		}

		static ::System::Collections::BitArray** StaticGet_CACMLKAHGEE()
		{
			return (::System::Collections::BitArray**)UnitySDK::FromName("", "AJPLLCFAIKH")->GetStaticField(0x59870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJPLLCFAIKH_CCTOR_OFFSET))();
		}

		::System::Void BENAMPEGOGE(::RPG::GameCore::AvatarRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_BENAMPEGOGE_OFFSET))(this, a1);
		}

		::System::Void GGMOPCEPOKH(::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAvatarRow_AvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_GGMOPCEPOKH_OFFSET))(this, a1);
		}

		::System::Void FPAGOGEAFBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FPAGOGEAFBM_OFFSET))(this, a1);
		}

		::System::Void MMEJOPHJBNL(::RPG::GameCore::BattleGridFightEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_MMEJOPHJBNL_OFFSET))(this, a1);
		}

		::System::Void FOHAGAJNFJK(::FNNMLBJJPBJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::FNNMLBJJPBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FOHAGAJNFJK_OFFSET))(this, a1, a2);
		}

		::System::Void FGLPAAAFECE(::RPG::GameCore::AvatarPropertyValue* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyValue*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FGLPAAAFECE_OFFSET))(this, a1, a2);
		}

		::System::Void FGLPAAAFECE_1(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FGLPAAAFECE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGLPAAAFECE_2(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FGLPAAAFECE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAIKJPCLHJN(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_BAIKJPCLHJN_OFFSET))(this, a1, a2);
		}

		::System::Void MHDILIJLFPL(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_MHDILIJLFPL_OFFSET))(this, a1);
		}

		static ::System::Boolean JLPNANJKNIB(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_JLPNANJKNIB_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::LineUpCharacter* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::RPG::GameCore::LineUpCharacter*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AbilityProperty>* ABDHMOCLEEI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AbilityProperty>*(*)())((::PBYTE)hIl2Cpp + AJPLLCFAIKH_ABDHMOCLEEI_OFFSET))();
		}

		static ::RPG::GameCore::AbilityProperty ILFFKEMIPFP(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AbilityProperty(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_ILFFKEMIPFP_OFFSET))(a1);
		}

		::System::Void MELEKHKLCBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_MELEKHKLCBE_OFFSET))(this);
		}

		::System::Void KHBKMGKKKMK(::RPG::GameCore::AvatarRowData* a1, ::DLIBCMNBLGF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::DLIBCMNBLGF*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_KHBKMGKKKMK_OFFSET))(this, a1, a2);
		}

		::System::Void OHKHBHOGOHD(::RPG::GameCore::AvatarRowData* a1, ::DLIBCMNBLGF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::DLIBCMNBLGF*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_OHKHBHOGOHD_OFFSET))(this, a1, a2);
		}

		::System::Void EOOGDJKDAAA(::DLIBCMNBLGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLIBCMNBLGF*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_EOOGDJKDAAA_OFFSET))(this, a1);
		}

		::System::Void FENHKKBCLIH(::RPG::GameCore::AvatarRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FENHKKBCLIH_OFFSET))(this, a1);
		}

		::System::Void IENJFDMOJEH(::RPG::GameCore::AvatarRowData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_IENJFDMOJEH_OFFSET))(this, a1);
		}

		::JGGNIOIBDBC* EAFOEJEAOIG(::RPG::GameCore::AvatarRowData* a1, ::DLIBCMNBLGF* a2)
		{
			return ((::JGGNIOIBDBC*(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::DLIBCMNBLGF*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_EAFOEJEAOIG_OFFSET))(this, a1, a2);
		}

		::System::Void APKBCBCOHNJ(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_APKBCBCOHNJ_OFFSET))(this, a1, a2);
		}

		::System::Void MIILFJOLINH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_MIILFJOLINH_OFFSET))(this);
		}

		::System::Void PDPMKMDLJFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_PDPMKMDLJFE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DGNCJMELHGH(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::AbilityProperty a2, ::RPG::GameCore::AbilityProperty a3, ::RPG::GameCore::AbilityProperty a4, ::RPG::GameCore::AbilityProperty a5)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_DGNCJMELHGH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FLEAILCNIAB(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FLEAILCNIAB_OFFSET))(this, a1);
		}

		static ::System::Boolean CJLKCJOJPPC(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_CJLKCJOJPPC_OFFSET))(a1);
		}

		static ::System::Boolean FLGPFHBJHOC(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_FLGPFHBJHOC_OFFSET))(a1);
		}

		static ::System::Boolean NKGLNFLOHKJ(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_NKGLNFLOHKJ_OFFSET))(a1);
		}

		static ::System::Collections::BitArray* MPKEBCJHBOE(::Il2CppArray<::RPG::GameCore::AbilityProperty>* a1)
		{
			return ((::System::Collections::BitArray*(*)(::Il2CppArray<::RPG::GameCore::AbilityProperty>*))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_MPKEBCJHBOE_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint AICKIGBNKMC(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_AICKIGBNKMC_OFFSET))(this, a1);
		}

		::System::Void PKMKCFFKKKF(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AJPLLCFAIKH_PKMKCFFKKKF_OFFSET))(this, a1, a2);
		}

	};
