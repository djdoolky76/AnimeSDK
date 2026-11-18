#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJPFPDLFPEN.h"
#include "unitysdk/IMPGHLBGMNJ.h"
#include "unitysdk/LDIENANCAPG.h"
#include "unitysdk/MoleMole/RealtimeQTEProgressBarUIWidgetType.h"
#include "unitysdk/MoleMole/RealtimeQTETaskUIProgressBarPositionType.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole::Config { class ButtonQTETaskMultiPressByProgressEntry; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }

#define IEJNBGNMOCO_APLAGIBFPMI_OFFSET UNITYSDK_OFFSET(0x1609DEE0)
#define IEJNBGNMOCO_BKBIPOMPLDO_OFFSET UNITYSDK_OFFSET(0x1609DFE0)
#define IEJNBGNMOCO_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1609E040)
#define IEJNBGNMOCO_EDOECGJCCIN_OFFSET UNITYSDK_OFFSET(0x1609DF80)
#define IEJNBGNMOCO_IJOCPOKBNEN_OFFSET UNITYSDK_OFFSET(0x1609E120)
#define IEJNBGNMOCO_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x1609DD20)
#define IEJNBGNMOCO_KAJKGHMFAEC_OFFSET UNITYSDK_OFFSET(0x1609DD10)
#define IEJNBGNMOCO_KNCABOEMGGK_OFFSET UNITYSDK_OFFSET(0x1609DE80)
#define IEJNBGNMOCO_MHGLFNCBLJF_OFFSET UNITYSDK_OFFSET(0x1609E270)
#define IEJNBGNMOCO_NGNJGAMEADM_OFFSET UNITYSDK_OFFSET(0x1609DF30)
#define IEJNBGNMOCO_OMJDKLJNKLF_OFFSET UNITYSDK_OFFSET(0x1609DE20)
#define IEJNBGNMOCO_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1609E300)
#define IEJNBGNMOCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1609DD30)

inline static constexpr unsigned int IEJNBGNMOCO_TypeDefinitionIndex = 65667;

class IEJNBGNMOCO : public ::LDIENANCAPG
{
public:
	::MoleMole::Config::ButtonQTETaskMultiPressByProgressEntry* IFPBLAMBEFP; // 0x40
	::System::Single CHBNOAELLHM; // 0x48
	::System::Single KOGBBBCAPOB; // 0x4C
	::System::Single PICLCKLBDFJ; // 0x50

	::System::Void _ctor(::MoleMole::Config::RealtimeQTETaskEntryBase* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTETaskEntryBase*))((::PBYTE)hIl2Cpp + IEJNBGNMOCO__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::IMPGHLBGMNJ KAJKGHMFAEC()
	{
		return ((::IMPGHLBGMNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_KAJKGHMFAEC_OFFSET))(this);
	}

	::EJPFPDLFPEN JLGPJGAOOPC()
	{
		return ((::EJPFPDLFPEN(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_JLGPJGAOOPC_OFFSET))(this);
	}

	::Foundation::AssetPath OMJDKLJNKLF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_OMJDKLJNKLF_OFFSET))(this);
	}

	::Foundation::AssetPath KNCABOEMGGK()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_KNCABOEMGGK_OFFSET))(this);
	}

	::System::Single APLAGIBFPMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_APLAGIBFPMI_OFFSET))(this);
	}

	::System::Single NGNJGAMEADM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_NGNJGAMEADM_OFFSET))(this);
	}

	::MoleMole::RealtimeQTETaskUIProgressBarPositionType EDOECGJCCIN()
	{
		return ((::MoleMole::RealtimeQTETaskUIProgressBarPositionType(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_EDOECGJCCIN_OFFSET))(this);
	}

	::MoleMole::RealtimeQTEProgressBarUIWidgetType BKBIPOMPLDO()
	{
		return ((::MoleMole::RealtimeQTEProgressBarUIWidgetType(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_BKBIPOMPLDO_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IJOCPOKBNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_IJOCPOKBNEN_OFFSET))(this);
	}

	::System::Void MHGLFNCBLJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_MHGLFNCBLJF_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEJNBGNMOCO_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
