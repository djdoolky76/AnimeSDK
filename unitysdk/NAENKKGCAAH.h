#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class ConfigMainCityObject;
class MainCityObjectState_ScriptConfig;
class TrafficRedLimitArea;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAENKKGCAAH_ALILGJNDDBD_OFFSET UNITYSDK_OFFSET(0x18C477A0)
#define NAENKKGCAAH_BAHBNHIACBK_OFFSET UNITYSDK_OFFSET(0x18C47A20)
#define NAENKKGCAAH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18C47560)
#define NAENKKGCAAH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18C47950)
#define NAENKKGCAAH_MKIBGCHJLJL_OFFSET UNITYSDK_OFFSET(0x18C47B50)
#define NAENKKGCAAH_OFOMGMKHLOD_OFFSET UNITYSDK_OFFSET(0x18C47C80)
#define NAENKKGCAAH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18C474C0)
#define NAENKKGCAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x18C47430)

inline static constexpr unsigned int NAENKKGCAAH_TypeDefinitionIndex = 83545;

class NAENKKGCAAH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENKKGCAAH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NAENKKGCAAH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::ConfigMainCityObject*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::ConfigMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENKKGCAAH_CREATEOP_OFFSET))(this);
	}

	::System::Int32 ALILGJNDDBD(::System::Int32 KLAAEIAPIKP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAENKKGCAAH_ALILGJNDDBD_OFFSET))(this, KLAAEIAPIKP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NAENKKGCAAH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* BAHBNHIACBK()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENKKGCAAH_BAHBNHIACBK_OFFSET))(this);
	}

	::TrafficRedLimitArea* MKIBGCHJLJL(::System::String* NNDPEENOBEO)
	{
		return ((::TrafficRedLimitArea*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAENKKGCAAH_MKIBGCHJLJL_OFFSET))(this, NNDPEENOBEO);
	}

	::MainCityObjectState_ScriptConfig* OFOMGMKHLOD(::System::String* CAGFMLEKFGG)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAENKKGCAAH_OFOMGMKHLOD_OFFSET))(this, CAGFMLEKFGG);
	}
};
