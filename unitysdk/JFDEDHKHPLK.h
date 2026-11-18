#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class PINBHKFHPAL;
class PNHAEMFHHEB;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JFDEDHKHPLK_ANIPOFNEIKI_OFFSET UNITYSDK_OFFSET(0x13074410)
#define JFDEDHKHPLK_BIOEHNHCKJM_OFFSET UNITYSDK_OFFSET(0x13073E50)
#define JFDEDHKHPLK_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x130746D0)
#define JFDEDHKHPLK_BOBHLBHMHEM_OFFSET UNITYSDK_OFFSET(0x13074B50)
#define JFDEDHKHPLK_CIFIOLNCOBM_OFFSET UNITYSDK_OFFSET(0x13074290)
#define JFDEDHKHPLK_CMCFCJGPDHM_OFFSET UNITYSDK_OFFSET(0x130745A0)
#define JFDEDHKHPLK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13073A70)
#define JFDEDHKHPLK_EALEEPFLAJE_OFFSET UNITYSDK_OFFSET(0x13074850)
#define JFDEDHKHPLK_EMIKEEICOFK_OFFSET UNITYSDK_OFFSET(0x13074130)
#define JFDEDHKHPLK_GAGFHCHMJIL_OFFSET UNITYSDK_OFFSET(0x13074DD0)
#define JFDEDHKHPLK_GBOAMFCLJMH_OFFSET UNITYSDK_OFFSET(0x13074670)
#define JFDEDHKHPLK_JCBEFKBFNBD_1_OFFSET UNITYSDK_OFFSET(0x130744E0)
#define JFDEDHKHPLK_JCBEFKBFNBD_2_OFFSET UNITYSDK_OFFSET(0x13074770)
#define JFDEDHKHPLK_JCBEFKBFNBD_OFFSET UNITYSDK_OFFSET(0x13074420)
#define JFDEDHKHPLK_LDNGMMGKMGF_1_OFFSET UNITYSDK_OFFSET(0x13074A70)
#define JFDEDHKHPLK_LDNGMMGKMGF_OFFSET UNITYSDK_OFFSET(0x130748C0)
#define JFDEDHKHPLK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13074F70)
#define JFDEDHKHPLK_NDFHKPMMMCA_OFFSET UNITYSDK_OFFSET(0x13074DE0)
#define JFDEDHKHPLK_NIGFHKDGMPB_OFFSET UNITYSDK_OFFSET(0x13074090)
#define JFDEDHKHPLK_PLGEMFDIPBH_OFFSET UNITYSDK_OFFSET(0x13074350)
#define JFDEDHKHPLK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13073CC0)
#define JFDEDHKHPLK__CTOR_OFFSET UNITYSDK_OFFSET(0x13073EB0)

inline static constexpr unsigned int JFDEDHKHPLK_TypeDefinitionIndex = 65758;

class JFDEDHKHPLK : public ::FJCAJJEAJPC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FMOPONHPKPA; // 0x40
	::Nap::NapECS::EcsFilter* _CIPMGHEAKLG_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GKLIFNIAHBE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDEDHKHPLK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BIOEHNHCKJM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_BIOEHNHCKJM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NIGFHKDGMPB(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_NIGFHKDGMPB_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void EMIKEEICOFK(::PNHAEMFHHEB* GBELIHABEDH, ::System::String* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::String*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_EMIKEEICOFK_OFFSET))(GBELIHABEDH, JKBLDFBGBPK);
	}

	static ::System::Void PLGEMFDIPBH(::PNHAEMFHHEB* GBELIHABEDH, ::System::Int32 GLAHMEGJPMK)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::Int32))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_PLGEMFDIPBH_OFFSET))(GBELIHABEDH, GLAHMEGJPMK);
	}

	::System::Void ANIPOFNEIKI(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_ANIPOFNEIKI_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void JCBEFKBFNBD(::PNHAEMFHHEB* GBELIHABEDH, ::System::Int32 GLAHMEGJPMK, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_JCBEFKBFNBD_OFFSET))(GBELIHABEDH, GLAHMEGJPMK, EGEGIMGMJHN);
	}

	static ::System::Void JCBEFKBFNBD_1(::PNHAEMFHHEB* GBELIHABEDH, ::System::Int32 GLAHMEGJPMK, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_JCBEFKBFNBD_1_OFFSET))(GBELIHABEDH, GLAHMEGJPMK, EGEGIMGMJHN);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CMCFCJGPDHM(::PNHAEMFHHEB* GBELIHABEDH)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_CMCFCJGPDHM_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void GBOAMFCLJMH(::PNHAEMFHHEB* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_GBOAMFCLJMH_OFFSET))(GBELIHABEDH);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JCBEFKBFNBD_2(::PNHAEMFHHEB* GBELIHABEDH, ::System::Int32 GLAHMEGJPMK, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_JCBEFKBFNBD_2_OFFSET))(GBELIHABEDH, GLAHMEGJPMK, EGEGIMGMJHN);
	}

	::System::Void EALEEPFLAJE(::PNHAEMFHHEB* KNENMPAIHBJ, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>* DCADCBMNELE)
	{
		return ((::System::Void(*)(::PVOID, ::PNHAEMFHHEB*, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_EALEEPFLAJE_OFFSET))(this, KNENMPAIHBJ, DCADCBMNELE);
	}

	static ::System::Void LDNGMMGKMGF(::PNHAEMFHHEB* KNENMPAIHBJ, ::System::String* AEGEMEHIKKO, ::PINBHKFHPAL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::String*, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_LDNGMMGKMGF_OFFSET))(KNENMPAIHBJ, AEGEMEHIKKO, AAOCANGHBDG);
	}

	::System::Void LDNGMMGKMGF_1(::PNHAEMFHHEB* KNENMPAIHBJ, ::System::String* AEGEMEHIKKO)
	{
		return ((::System::Void(*)(::PVOID, ::PNHAEMFHHEB*, ::System::String*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_LDNGMMGKMGF_1_OFFSET))(this, KNENMPAIHBJ, AEGEMEHIKKO);
	}

	::System::Void BOBHLBHMHEM(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_BOBHLBHMHEM_OFFSET))(this, KECKGDFIALJ);
	}

	::Nap::NapECS::EcsFilter* GAGFHCHMJIL()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_GAGFHCHMJIL_OFFSET))(this);
	}

	static ::System::Void CIFIOLNCOBM(::PNHAEMFHHEB* GBELIHABEDH, ::System::Int32 GLAHMEGJPMK)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*, ::System::Int32))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_CIFIOLNCOBM_OFFSET))(GBELIHABEDH, GLAHMEGJPMK);
	}

	static ::System::Void NDFHKPMMMCA(::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_NDFHKPMMMCA_OFFSET))(KNENMPAIHBJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + JFDEDHKHPLK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
