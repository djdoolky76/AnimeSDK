#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIMainPageBuddiesShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APHNELGEKEP_BIMMPOKCPPK_OFFSET UNITYSDK_OFFSET(0x14C265B0)
#define APHNELGEKEP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14C25FB0)
#define APHNELGEKEP_HPFNJEHIDGG_OFFSET UNITYSDK_OFFSET(0x14C26760)
#define APHNELGEKEP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14C264E0)
#define APHNELGEKEP_LOLNFBDNALK_OFFSET UNITYSDK_OFFSET(0x14C26BC0)
#define APHNELGEKEP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14C25F10)
#define APHNELGEKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x14C25E80)

inline static constexpr unsigned int APHNELGEKEP_TypeDefinitionIndex = 90982;

class APHNELGEKEP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ANACDLFGJMB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>* OODOINBDDMB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHNELGEKEP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + APHNELGEKEP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIMainPageBuddiesShow*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIMainPageBuddiesShow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APHNELGEKEP_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + APHNELGEKEP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean BIMMPOKCPPK(::System::Int32 MKKDGLGFANH, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + APHNELGEKEP_BIMMPOKCPPK_OFFSET))(this, MKKDGLGFANH, HMMMOCJAEOA);
	}

	::System::Void HPFNJEHIDGG(::MoleMole::ConfigUIMainPageBuddiesShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageBuddiesShow*))((::PBYTE)hIl2Cpp + APHNELGEKEP_HPFNJEHIDGG_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean LOLNFBDNALK(::System::Int32 MKKDGLGFANH, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*& DHMLKNEDOAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*&))((::PBYTE)hIl2Cpp + APHNELGEKEP_LOLNFBDNALK_OFFSET))(this, MKKDGLGFANH, DHMLKNEDOAH);
	}
};
