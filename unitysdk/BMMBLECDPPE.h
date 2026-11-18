#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/System/Object.h"

class KIHFMFLBPHM;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMMBLECDPPE_ABFNLJAFIBB_OFFSET UNITYSDK_OFFSET(0x115FF4B0)
#define BMMBLECDPPE_BPPABFPCMGP_OFFSET UNITYSDK_OFFSET(0x115FF2C0)
#define BMMBLECDPPE_CGJIMHBPJKI_OFFSET UNITYSDK_OFFSET(0x115FF250)
#define BMMBLECDPPE_GJDAGNMPEPP_OFFSET UNITYSDK_OFFSET(0x115FF240)
#define BMMBLECDPPE_IOMLKKAIGNI_OFFSET UNITYSDK_OFFSET(0x115FF3D0)
#define BMMBLECDPPE_JMLCPADPPNM_OFFSET UNITYSDK_OFFSET(0x115FF340)
#define BMMBLECDPPE_MDOODANKFBM_OFFSET UNITYSDK_OFFSET(0x115FF420)
#define BMMBLECDPPE_NHAICMHAHMB_OFFSET UNITYSDK_OFFSET(0x115FF430)
#define BMMBLECDPPE_OAGGCNKLPNB_OFFSET UNITYSDK_OFFSET(0x115FF0C0)
#define BMMBLECDPPE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x115FECC0)
#define BMMBLECDPPE__CTOR_OFFSET UNITYSDK_OFFSET(0x115FEC30)

inline static constexpr unsigned int BMMBLECDPPE_TypeDefinitionIndex = 44416;

class BMMBLECDPPE : public ::System::Object
{
public:
	::System::Action_2<::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType>* AAPEMJCIHCO; // 0x10
	::System::Collections::Generic::List_1<::KIHFMFLBPHM*>* AOCENFKKBGK; // 0x18
	::System::Int32 IHGNBHHODCG; // 0x20
	::System::Int32 _FPDGFLCJDBN_k__BackingField; // 0x24
	::MoleMole::StatusEffectType NKFLKAPEILP; // 0x28
	::MoleMole::StatusEffectType MFLCCPAHBKN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMBLECDPPE__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMBLECDPPE_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void GJDAGNMPEPP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMMBLECDPPE_GJDAGNMPEPP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CGJIMHBPJKI(::MoleMole::StatusEffectType OBNIAHNMHPF, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::StatusEffectType, ::System::Boolean))((::PBYTE)hIl2Cpp + BMMBLECDPPE_CGJIMHBPJKI_OFFSET))(this, OBNIAHNMHPF, EGEGIMGMJHN);
	}

	::System::Void BPPABFPCMGP(::System::Action_2<::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType>*))((::PBYTE)hIl2Cpp + BMMBLECDPPE_BPPABFPCMGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JMLCPADPPNM(::System::Int32 MPIFCEINJFL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BMMBLECDPPE_JMLCPADPPNM_OFFSET))(this, MPIFCEINJFL);
	}

	::System::Int32 MDOODANKFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMBLECDPPE_MDOODANKFBM_OFFSET))(this);
	}

	::System::Void NHAICMHAHMB(::System::Action_2<::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType>*))((::PBYTE)hIl2Cpp + BMMBLECDPPE_NHAICMHAHMB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ABFNLJAFIBB(::KIHFMFLBPHM* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::KIHFMFLBPHM*))((::PBYTE)hIl2Cpp + BMMBLECDPPE_ABFNLJAFIBB_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Boolean IOMLKKAIGNI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMBLECDPPE_IOMLKKAIGNI_OFFSET))(this);
	}

	::System::Void OAGGCNKLPNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMBLECDPPE_OAGGCNKLPNB_OFFSET))(this);
	}
};
