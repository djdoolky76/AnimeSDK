#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIMainPageShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJHDIAELECK_BIMMPOKCPPK_OFFSET UNITYSDK_OFFSET(0xE0A1EA0)
#define NJHDIAELECK_CREATEOP_OFFSET UNITYSDK_OFFSET(0xE0A17C0)
#define NJHDIAELECK_HPFNJEHIDGG_OFFSET UNITYSDK_OFFSET(0xE0A2050)
#define NJHDIAELECK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xE0A24B0)
#define NJHDIAELECK_LOLNFBDNALK_OFFSET UNITYSDK_OFFSET(0xE0A1CF0)
#define NJHDIAELECK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xE0A1720)
#define NJHDIAELECK__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A1690)

inline static constexpr unsigned int NJHDIAELECK_TypeDefinitionIndex = 91248;

class NJHDIAELECK
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ANACDLFGJMB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MainPageItemShowSetting*>*>* OODOINBDDMB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHDIAELECK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NJHDIAELECK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIMainPageShow*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIMainPageShow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHDIAELECK_CREATEOP_OFFSET))(this);
	}

	::System::Boolean LOLNFBDNALK(::System::Int32 MKKDGLGFANH, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*& DHMLKNEDOAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::MainPageItemShowSetting*>*&))((::PBYTE)hIl2Cpp + NJHDIAELECK_LOLNFBDNALK_OFFSET))(this, MKKDGLGFANH, DHMLKNEDOAH);
	}

	::System::Boolean BIMMPOKCPPK(::System::Int32 MKKDGLGFANH, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + NJHDIAELECK_BIMMPOKCPPK_OFFSET))(this, MKKDGLGFANH, HMMMOCJAEOA);
	}

	::System::Void HPFNJEHIDGG(::MoleMole::ConfigUIMainPageShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageShow*))((::PBYTE)hIl2Cpp + NJHDIAELECK_HPFNJEHIDGG_OFFSET))(this, DFMKILICPFB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NJHDIAELECK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
