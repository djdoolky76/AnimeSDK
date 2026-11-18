#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPDADFGDKBI.h"
#include "unitysdk/NCLAADKAKGP.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T1, typename T2> class IndexedList_2; }

#define BPCGLLEGGKN_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14265110)
#define BPCGLLEGGKN_BGEBJIDMOCH_OFFSET UNITYSDK_OFFSET(0x14771270)
#define BPCGLLEGGKN_BNIOJBHHHAO_OFFSET UNITYSDK_OFFSET(0x14266240)
#define BPCGLLEGGKN_DEAFHAMFDOE_OFFSET UNITYSDK_OFFSET(0x14265640)
#define BPCGLLEGGKN_DIEEIAALCFD_OFFSET UNITYSDK_OFFSET(0x14265E30)
#define BPCGLLEGGKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14265190)
#define BPCGLLEGGKN_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x14265150)
#define BPCGLLEGGKN_FBKAJMLNBFD_1_OFFSET UNITYSDK_OFFSET(0x14770F50)
#define BPCGLLEGGKN_FBKAJMLNBFD_OFFSET UNITYSDK_OFFSET(0x14770EF0)
#define BPCGLLEGGKN_FLNKHKMHJNM_OFFSET UNITYSDK_OFFSET(0x14771350)
#define BPCGLLEGGKN_HJCBGBFKAFF_OFFSET UNITYSDK_OFFSET(0x14265D40)
#define BPCGLLEGGKN_JHNELGGIIMH_OFFSET UNITYSDK_OFFSET(0x14265200)
#define BPCGLLEGGKN_KLLBLHHOLFH_OFFSET UNITYSDK_OFFSET(0x14265370)
#define BPCGLLEGGKN_KMAPCFNLJIL_OFFSET UNITYSDK_OFFSET(0x14265260)
#define BPCGLLEGGKN_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x142661D0)
#define BPCGLLEGGKN_ODBGOFKKOGP_OFFSET UNITYSDK_OFFSET(0x14771020)
#define BPCGLLEGGKN_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x14265BE0)
#define BPCGLLEGGKN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x142655E0)
#define BPCGLLEGGKN_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14264E70)
#define BPCGLLEGGKN__CTOR_OFFSET UNITYSDK_OFFSET(0x14265250)

inline static constexpr unsigned int BPCGLLEGGKN_TypeDefinitionIndex = 87764;

class BPCGLLEGGKN
{
public:
	::Nap::NapECS::IndexedList_2<::NCLAADKAKGP, ::DPDADFGDKBI>* HEMNFHGMBIP; // 0x10
	::System::Single CLOLBFDHDDG; // 0x18
	::System::Byte _padding0[0x4];
	::System::Double MFNINOJOGIH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCGLLEGGKN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_DISPOSE_OFFSET))(this);
	}

	::System::Void JHNELGGIIMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_JHNELGGIIMH_OFFSET))(this);
	}

	::System::Single KMAPCFNLJIL(::System::UInt32 IAFJJGDFDDM, ::System::UInt32 IIBCCDAPEKD)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_KMAPCFNLJIL_OFFSET))(this, IAFJJGDFDDM, IIBCCDAPEKD);
	}

	::System::Void KLLBLHHOLFH(::System::UInt32 BKLGNCBNEGM, ::System::Boolean POPIEJPGGEJ, ::System::Boolean IOLJAMNNEAG, ::System::Boolean JBENFFMDENP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_KLLBLHHOLFH_OFFSET))(this, BKLGNCBNEGM, POPIEJPGGEJ, IOLJAMNNEAG, JBENFFMDENP);
	}

	::System::Void OKJCHFGIKBH(::System::Single NJLILJMLPFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_OKJCHFGIKBH_OFFSET))(this, NJLILJMLPFF);
	}

	::System::Void DEAFHAMFDOE(::System::Single PMCFOMOFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_DEAFHAMFDOE_OFFSET))(this, PMCFOMOFIHN);
	}

	::System::Void OJFBBOMGIEN(::System::Single EAGACABMJLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_OJFBBOMGIEN_OFFSET))(this, EAGACABMJLH);
	}

	::DPDADFGDKBI& HJCBGBFKAFF(::System::UInt32 BEDODAFECEE, ::System::UInt32 FLEDHKJGAEP)
	{
		return ((::DPDADFGDKBI&(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_HJCBGBFKAFF_OFFSET))(this, BEDODAFECEE, FLEDHKJGAEP);
	}

	::System::Void DIEEIAALCFD(::DPDADFGDKBI& BOEKNOJNJDN)
	{
		return ((::System::Void(*)(::PVOID, ::DPDADFGDKBI&))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_DIEEIAALCFD_OFFSET))(this, BOEKNOJNJDN);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void BNIOJBHHHAO(::System::UInt32 FJHKFEJAKMD, ::System::UInt32 PLHBNHMIAEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_BNIOJBHHHAO_OFFSET))(this, FJHKFEJAKMD, PLHBNHMIAEF);
	}

	::System::Void FBKAJMLNBFD(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_FBKAJMLNBFD_OFFSET))(this, HOLFNDIMGJJ);
	}

	::System::Void FBKAJMLNBFD_1(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_FBKAJMLNBFD_1_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void ODBGOFKKOGP(::System::UInt32 IAFJJGDFDDM, ::System::UInt32 IIBCCDAPEKD, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_ODBGOFKKOGP_OFFSET))(this, IAFJJGDFDDM, IIBCCDAPEKD, EGEGIMGMJHN);
	}

	::System::Void BGEBJIDMOCH(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_BGEBJIDMOCH_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void FLNKHKMHJNM(::System::UInt32 FJHKFEJAKMD, ::System::UInt32 PLHBNHMIAEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGLLEGGKN_FLNKHKMHJNM_OFFSET))(this, FJHKFEJAKMD, PLHBNHMIAEF);
	}
};
