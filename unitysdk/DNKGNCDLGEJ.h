#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/ConfigUIAvatarShowData_RuntimeMainPage3DInfo.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace MoleMole { class MainPageItemShowSetting; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DNKGNCDLGEJ_BIMMPOKCPPK_OFFSET UNITYSDK_OFFSET(0x12BD4F60)
#define DNKGNCDLGEJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12BD4960)
#define DNKGNCDLGEJ_HPFNJEHIDGG_OFFSET UNITYSDK_OFFSET(0x12BD5110)
#define DNKGNCDLGEJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12BD4E90)
#define DNKGNCDLGEJ_LOLNFBDNALK_OFFSET UNITYSDK_OFFSET(0x12BD5560)
#define DNKGNCDLGEJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12BD48C0)
#define DNKGNCDLGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD4830)

inline static constexpr unsigned int DNKGNCDLGEJ_TypeDefinitionIndex = 69211;

class DNKGNCDLGEJ
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ANACDLFGJMB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MainPageItemShowSetting*>* OODOINBDDMB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIMainPageSkinShow*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIMainPageSkinShow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean BIMMPOKCPPK(::System::Int32 MKKDGLGFANH, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::ConfigUIAvatarShowData_RuntimeMainPage3DInfo&))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ_BIMMPOKCPPK_OFFSET))(this, MKKDGLGFANH, HMMMOCJAEOA);
	}

	::System::Void HPFNJEHIDGG(::MoleMole::ConfigUIMainPageSkinShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageSkinShow*))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ_HPFNJEHIDGG_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean LOLNFBDNALK(::System::Int32 MKKDGLGFANH, ::MoleMole::MainPageItemShowSetting*& PANBKFEPDFO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MainPageItemShowSetting*&))((::PBYTE)hIl2Cpp + DNKGNCDLGEJ_LOLNFBDNALK_OFFSET))(this, MKKDGLGFANH, PANBKFEPDFO);
	}
};
