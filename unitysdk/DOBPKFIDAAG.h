#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCCMMPKKCBC.h"
#include "unitysdk/EMCCOLIGOPC_FHJKNMCPDAK.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/PABMDBLGGPH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EMCCOLIGOPC.h"

class ABCGMHDCNML;
class GDGBPCOGIEN;
namespace Foundation { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOBPKFIDAAG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1EDEF8F0)
#define DOBPKFIDAAG_BJHEEHPPHAK_OFFSET UNITYSDK_OFFSET(0x1EDF0710)
#define DOBPKFIDAAG_DIOFFOEFKIM_OFFSET UNITYSDK_OFFSET(0x1EDEFFE0)
#define DOBPKFIDAAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDEF4E0)
#define DOBPKFIDAAG_EOODFEDFFCJ_OFFSET UNITYSDK_OFFSET(0x1EDEFF70)
#define DOBPKFIDAAG_FFGJMBDDJPB_OFFSET UNITYSDK_OFFSET(0x1EDF09A0)
#define DOBPKFIDAAG_FGGLKJGHEHF_OFFSET UNITYSDK_OFFSET(0x1EDEF650)
#define DOBPKFIDAAG_IAPOLJCPIDL_OFFSET UNITYSDK_OFFSET(0x1EDF0210)
#define DOBPKFIDAAG_IGMOCLGENLA_OFFSET UNITYSDK_OFFSET(0x1EDEFFF0)
#define DOBPKFIDAAG_KOLHFNPMEBP_OFFSET UNITYSDK_OFFSET(0x1EDEF640)
#define DOBPKFIDAAG_NALELAEJDGB_OFFSET UNITYSDK_OFFSET(0x1EDEF8E0)
#define DOBPKFIDAAG_NBBPHLBEOMO_OFFSET UNITYSDK_OFFSET(0x1EDF09B0)
#define DOBPKFIDAAG_NCACFPANCKB_OFFSET UNITYSDK_OFFSET(0x1EDEFFD0)
#define DOBPKFIDAAG_PAOHAMINACO_OFFSET UNITYSDK_OFFSET(0x1EDF0720)
#define DOBPKFIDAAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDEF630)

inline static constexpr unsigned int DOBPKFIDAAG_TypeDefinitionIndex = 18752;

class DOBPKFIDAAG : public ::System::Object
{
public:
	::GDGBPCOGIEN* _FAJLPCKOFMC_k__BackingField; // 0x10
	::Foundation::IEntity* _IEKFOOPPGNC_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* KMPMJGFFGLH; // 0x20
	::System::Collections::Generic::HashSet_1<::BCCMMPKKCBC>* OABIEHHKFPF; // 0x28
	::Foundation::IEntity* _FKEDEGKBAIJ_k__BackingField; // 0x30
	::ABCGMHDCNML* _CJAMGGCGCAN_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::BCCMMPKKCBC, ::System::Single>* CNJLJKDAPGH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBPKFIDAAG__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_DISPOSE_OFFSET))(this);
	}

	::System::Void KOLHFNPMEBP(::Foundation::IEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_KOLHFNPMEBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FGGLKJGHEHF(::NCJLKIIGPIC GEEKODJDNLG, ::GPJMHAAEIKO HIAIKHDFCLN, ::PABMDBLGGPH IIDKBMFGAOL, ::System::Single FDHPKGPNIHN)
	{
		return ((::System::Void(*)(::PVOID, ::NCJLKIIGPIC, ::GPJMHAAEIKO, ::PABMDBLGGPH, ::System::Single))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_FGGLKJGHEHF_OFFSET))(this, GEEKODJDNLG, HIAIKHDFCLN, IIDKBMFGAOL, FDHPKGPNIHN);
	}

	::ABCGMHDCNML* NALELAEJDGB()
	{
		return ((::ABCGMHDCNML*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_NALELAEJDGB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Foundation::IEntity* KHGFAKJKDGG, ::Foundation::IEntity* HODAIDNDKHD, ::ABCGMHDCNML* KBPFBOGDMAD, ::System::Collections::Generic::IReadOnlyList_1<::EMCCOLIGOPC>* LIPJFCMPJAH, ::GDGBPCOGIEN* JIJFBNLHFGK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Foundation::IEntity*, ::ABCGMHDCNML*, ::System::Collections::Generic::IReadOnlyList_1<::EMCCOLIGOPC>*, ::GDGBPCOGIEN*))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_BBOMJDBNHIC_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD, KBPFBOGDMAD, LIPJFCMPJAH, JIJFBNLHFGK);
	}

	::System::Void NCACFPANCKB(::ABCGMHDCNML* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ABCGMHDCNML*))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_NCACFPANCKB_OFFSET))(this, EGEGIMGMJHN);
	}

	::Foundation::IEntity* DIOFFOEFKIM()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_DIOFFOEFKIM_OFFSET))(this);
	}

	::Foundation::IEntity* IGMOCLGENLA()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_IGMOCLGENLA_OFFSET))(this);
	}

	::Foundation::IEntity* EOODFEDFFCJ(::EMCCOLIGOPC_FHJKNMCPDAK KDEHMPGOCEP)
	{
		return ((::Foundation::IEntity*(*)(::PVOID, ::EMCCOLIGOPC_FHJKNMCPDAK))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_EOODFEDFFCJ_OFFSET))(this, KDEHMPGOCEP);
	}

	::System::Boolean IAPOLJCPIDL(::EMCCOLIGOPC HAOCENELOMG, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::EMCCOLIGOPC, ::System::Single&))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_IAPOLJCPIDL_OFFSET))(this, HAOCENELOMG, EGEGIMGMJHN);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Foundation::Buff::GameplayEffectModifier>* BJHEEHPPHAK()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::Buff::GameplayEffectModifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_BJHEEHPPHAK_OFFSET))(this);
	}

	::System::Void PAOHAMINACO(::NCJLKIIGPIC GEEKODJDNLG, ::GPJMHAAEIKO HIAIKHDFCLN, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NCJLKIIGPIC, ::GPJMHAAEIKO, ::System::Single))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_PAOHAMINACO_OFFSET))(this, GEEKODJDNLG, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void FFGJMBDDJPB(::GDGBPCOGIEN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GDGBPCOGIEN*))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_FFGJMBDDJPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NBBPHLBEOMO(::Foundation::IEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + DOBPKFIDAAG_NBBPHLBEOMO_OFFSET))(this, EGEGIMGMJHN);
	}
};
