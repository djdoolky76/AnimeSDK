#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherEntry.h"
#include "unitysdk/MoleMole/DynamicOverrideWeatherV2Entry.h"

class HIHLALJHLJC_LKAJOKLPNBE;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIHLALJHLJC_CIBAMCIJEDJ_OFFSET UNITYSDK_OFFSET(0x17A4B180)
#define HIHLALJHLJC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17A4B060)
#define HIHLALJHLJC_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x17A4B380)
#define HIHLALJHLJC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17A4BD90)
#define HIHLALJHLJC_NHCLLECONLO_OFFSET UNITYSDK_OFFSET(0x17A4BB90)
#define HIHLALJHLJC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17A4AFC0)
#define HIHLALJHLJC__CTOR_OFFSET UNITYSDK_OFFSET(0x17A4AF30)

inline static constexpr unsigned int HIHLALJHLJC_TypeDefinitionIndex = 87560;

class HIHLALJHLJC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHLALJHLJC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HIHLALJHLJC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHLALJHLJC_CREATEOP_OFFSET))(this);
	}

	::System::Boolean CIBAMCIJEDJ(::System::String* MIHBPMANGOH, ::MoleMole::DynamicOverrideWeatherV2Entry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::DynamicOverrideWeatherV2Entry&))((::PBYTE)hIl2Cpp + HIHLALJHLJC_CIBAMCIJEDJ_OFFSET))(this, MIHBPMANGOH, EGEGIMGMJHN);
	}

	static ::HIHLALJHLJC_LKAJOKLPNBE* HOEPJPJODKF(::System::Int32 GIBDHABECBD, ::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* KEJJKECGLOP)
	{
		return ((::HIHLALJHLJC_LKAJOKLPNBE*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>*))((::PBYTE)hIl2Cpp + HIHLALJHLJC_HOEPJPJODKF_OFFSET))(GIBDHABECBD, KEJJKECGLOP);
	}

	::System::Boolean NHCLLECONLO(::System::String* MIHBPMANGOH, ::MoleMole::DynamicOverrideWeatherEntry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::DynamicOverrideWeatherEntry&))((::PBYTE)hIl2Cpp + HIHLALJHLJC_NHCLLECONLO_OFFSET))(this, MIHBPMANGOH, EGEGIMGMJHN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HIHLALJHLJC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
