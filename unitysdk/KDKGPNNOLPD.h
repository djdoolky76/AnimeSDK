#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAKMOAAHALN.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FKNKBAOGJOA;
class MKBBPOFGLOF;
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KDKGPNNOLPD_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1297DD00)
#define KDKGPNNOLPD_EENMCHPAKBG_OFFSET UNITYSDK_OFFSET(0x1297E860)
#define KDKGPNNOLPD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1297DC90)
#define KDKGPNNOLPD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1297D970)
#define KDKGPNNOLPD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1297EB60)
#define KDKGPNNOLPD_KOMODALOELM_OFFSET UNITYSDK_OFFSET(0x1297E8C0)
#define KDKGPNNOLPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1297E600)

inline static constexpr unsigned int KDKGPNNOLPD_TypeDefinitionIndex = 60647;

class KDKGPNNOLPD : public ::MHMFINLCNFN
{
public:
	::FKNKBAOGJOA* HDIEABKPPNF; // 0x28
	::MKBBPOFGLOF* KAHEKAGHBMO; // 0x30
	::KCMIFNGABDC_1<::System::Single>* HMMGKADBNFO; // 0x38
	::KCMIFNGABDC_1<::System::String*>* BDICGABONNI; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* FIMDALIJLLI; // 0x48
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* FIBFCPEHIOD; // 0x50
	::KCMIFNGABDC_1<::System::Single>* JKOFNGLKCPO; // 0x58
	::KCMIFNGABDC_1<::System::String*>* HBDAMPKJIME; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKGPNNOLPD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::MoleMole::Utils::NapCameraSequence* EENMCHPAKBG(::BAKMOAAHALN OBNIAHNMHPF)
	{
		return ((::MoleMole::Utils::NapCameraSequence*(*)(::BAKMOAAHALN))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_EENMCHPAKBG_OFFSET))(OBNIAHNMHPF);
	}

	static ::MoleMole::Utils::INapCameraSequenceDataTableEntry* KOMODALOELM(::System::String* MCOHLHMKLIP, ::MoleMole::Utils::NapCameraSequence* BDAJIGIOAMM)
	{
		return ((::MoleMole::Utils::INapCameraSequenceDataTableEntry*(*)(::System::String*, ::MoleMole::Utils::NapCameraSequence*))((::PBYTE)hIl2Cpp + KDKGPNNOLPD_KOMODALOELM_OFFSET))(MCOHLHMKLIP, BDAJIGIOAMM);
	}
};
