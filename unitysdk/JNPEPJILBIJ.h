#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJHKEDBIPPK.h"
#include "unitysdk/MoleMole/Config/ETrainingRoomItemType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/PJHKDJEGJOG.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AHIKNHGPAMH;
class BFAAEKNOCEC;
class BPHGNMNLLHF;
class FCBNEBOPNIF;
class NHEBOOMFOMJ;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNPEPJILBIJ_AEGLFAPOJAK_OFFSET UNITYSDK_OFFSET(0x17B57C10)
#define JNPEPJILBIJ_CPILLLFCIKP_OFFSET UNITYSDK_OFFSET(0x17B58060)
#define JNPEPJILBIJ_DKOCBPHCLGJ_OFFSET UNITYSDK_OFFSET(0x17B570A0)
#define JNPEPJILBIJ_EGEGFGBNPEE_OFFSET UNITYSDK_OFFSET(0x17B56E10)
#define JNPEPJILBIJ_FHFHPENGCBL_OFFSET UNITYSDK_OFFSET(0x17B57DD0)
#define JNPEPJILBIJ_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x17B57A10)
#define JNPEPJILBIJ_IAECMPACKPK_OFFSET UNITYSDK_OFFSET(0x17B57590)
#define JNPEPJILBIJ_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x17B57CD0)
#define JNPEPJILBIJ_IHEEBLGGLDJ_OFFSET UNITYSDK_OFFSET(0x17B57DB0)
#define JNPEPJILBIJ_IJODNCDEOKI_OFFSET UNITYSDK_OFFSET(0x17B57010)
#define JNPEPJILBIJ_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x17B57DA0)
#define JNPEPJILBIJ_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x17B573D0)
#define JNPEPJILBIJ_JNFHGMJPEJO_OFFSET UNITYSDK_OFFSET(0x17B57E60)
#define JNPEPJILBIJ_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x17B55FF0)
#define JNPEPJILBIJ_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0x17B57CE0)
#define JNPEPJILBIJ_KMLILMANEJF_OFFSET UNITYSDK_OFFSET(0x17B577D0)
#define JNPEPJILBIJ_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x17B573C0)
#define JNPEPJILBIJ_MBFAIMBMCCH_OFFSET UNITYSDK_OFFSET(0x17B56090)
#define JNPEPJILBIJ_MCDCDOPNIGO_OFFSET UNITYSDK_OFFSET(0x17B56D00)
#define JNPEPJILBIJ_NDKGFDFCDIK_OFFSET UNITYSDK_OFFSET(0x17B578F0)
#define JNPEPJILBIJ_ODLCDFLIGDK_OFFSET UNITYSDK_OFFSET(0x17B57C00)
#define JNPEPJILBIJ_OEIAICHIGNF_OFFSET UNITYSDK_OFFSET(0x17B57060)
#define JNPEPJILBIJ_OPKPDCJDLNB_OFFSET UNITYSDK_OFFSET(0x17B57B70)
#define JNPEPJILBIJ_PAFICJMKCGE_OFFSET UNITYSDK_OFFSET(0x17B568A0)
#define JNPEPJILBIJ_PEJOICLLJLA_OFFSET UNITYSDK_OFFSET(0x17B57DC0)
#define JNPEPJILBIJ_PMPPPHOAFGD_OFFSET UNITYSDK_OFFSET(0x17B57C40)
#define JNPEPJILBIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B57AC0)

inline static constexpr unsigned int JNPEPJILBIJ_TypeDefinitionIndex = 50701;

class JNPEPJILBIJ : public ::PJHKDJEGJOG
{
public:
	::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* HFGHOGKOLGK; // 0x2F8
	::AHIKNHGPAMH* CNKOBAMOGPP; // 0x300
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ETrainingRoomItemType, ::System::Int32>* JHKPFMJMFEM; // 0x308
	::System::Int32 DMBDPANMAHE; // 0x310
	::System::Int32 CHEKOJEKGHB; // 0x314
	::UnityEngine::Vector3 EIGBNACKHNA; // 0x318
	::System::UInt32 MEHIKNLAGJF; // 0x324
	::System::Int64 JFKINEMMHJE; // 0x328
	::System::Boolean KCKEOOGILHK; // 0x330
	::System::Boolean PJGOJCOFHFE; // 0x331
	::System::Boolean EMONJGDOLMD; // 0x332
	::System::Byte _padding0[0x1];
	::System::Int32 ILKAGCMONFM; // 0x334
	::UnityEngine::Vector3 MBJGNIPKPKH; // 0x338
	::System::Single FNIOPKPHDEH; // 0x344
	::System::Boolean NHLPDDOPONA; // 0x348
	::System::Boolean NDKFGIELJMH; // 0x349
	::System::Boolean HEHGOOMDFEI; // 0x34A
	::System::Boolean OKBLIMJPFPC; // 0x34B
	::System::Int32 ANLKJOLEPPD; // 0x34C
	::System::Boolean FIGNOGEKDBJ; // 0x350
	::System::Boolean BNALIONMCLL; // 0x351

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::System::Void MBFAIMBMCCH(::NHEBOOMFOMJ* FOHOENDPLML)
	{
		return ((::System::Void(*)(::PVOID, ::NHEBOOMFOMJ*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_MBFAIMBMCCH_OFFSET))(this, FOHOENDPLML);
	}

	::System::Boolean MCDCDOPNIGO(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*& FKBMPFCJCBG, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& BBKDIIJOMPG, ::System::Collections::Generic::List_1<::System::Int32>*& APNIOBJFHAE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*&, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_MCDCDOPNIGO_OFFSET))(this, FKBMPFCJCBG, BBKDIIJOMPG, APNIOBJFHAE);
	}

	::System::Int32 IJODNCDEOKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_IJODNCDEOKI_OFFSET))(this);
	}

	::System::Boolean OEIAICHIGNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_OEIAICHIGNF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EGEGFGBNPEE()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_EGEGFGBNPEE_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Void KMLILMANEJF(::HJHKEDBIPPK KEFEEGHGAMA)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_KMLILMANEJF_OFFSET))(this, KEFEEGHGAMA);
	}

	::System::Void NDKGFDFCDIK(::HJHKEDBIPPK ENCMFDGCEDM)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_NDKGFDFCDIK_OFFSET))(this, ENCMFDGCEDM);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void OPKPDCJDLNB(::HJHKEDBIPPK MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_OPKPDCJDLNB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 ODLCDFLIGDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_ODLCDFLIGDK_OFFSET))(this);
	}

	::System::Void AEGLFAPOJAK(::System::Boolean EBFCACIEKBC, ::BFAAEKNOCEC* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BFAAEKNOCEC*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_AEGLFAPOJAK_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}

	::System::Boolean PMPPPHOAFGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_PMPPPHOAFGD_OFFSET))(this);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PAFICJMKCGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_PAFICJMKCGE_OFFSET))(this);
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Void IHEEBLGGLDJ(::NHEBOOMFOMJ* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::NHEBOOMFOMJ*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_IHEEBLGGLDJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean PEJOICLLJLA(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*& MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& KMGKAIDEIBA, ::System::Collections::Generic::List_1<::System::Int32>*& FDHMCIFPNCK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*&, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_PEJOICLLJLA_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void IAECMPACKPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_IAECMPACKPK_OFFSET))(this);
	}

	::System::Void DKOCBPHCLGJ(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MOGGEOEAKJP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_DKOCBPHCLGJ_OFFSET))(this, MOGGEOEAKJP);
	}

	::System::Void FHFHPENGCBL(::HJHKEDBIPPK MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_FHFHPENGCBL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JNFHGMJPEJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_JNFHGMJPEJO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* CPILLLFCIKP()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPEPJILBIJ_CPILLLFCIKP_OFFSET))(this);
	}
};
