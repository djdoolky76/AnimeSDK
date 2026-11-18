#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/WeatherV1CastV2Entry.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigLevelWeather; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJBNNBFJJKD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x151D6B50)
#define MJBNNBFJJKD_GBLGFAFEAGO_OFFSET UNITYSDK_OFFSET(0x151D6EC0)
#define MJBNNBFJJKD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x151D78E0)
#define MJBNNBFJJKD_MEEGJLLNFJC_OFFSET UNITYSDK_OFFSET(0x151D76B0)
#define MJBNNBFJJKD_NBFCKEGNHDK_OFFSET UNITYSDK_OFFSET(0x151D7550)
#define MJBNNBFJJKD_PAPMDMLHIHG_OFFSET UNITYSDK_OFFSET(0x151D6C70)
#define MJBNNBFJJKD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x151D6AB0)
#define MJBNNBFJJKD__CTOR_OFFSET UNITYSDK_OFFSET(0x151D6A20)

inline static constexpr unsigned int MJBNNBFJJKD_TypeDefinitionIndex = 55504;

class MJBNNBFJJKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBNNBFJJKD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::WeatherType PAPMDMLHIHG(::System::String* DOAJPOIAPEN)
	{
		return ((::MoleMole::Config::WeatherType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_PAPMDMLHIHG_OFFSET))(this, DOAJPOIAPEN);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>* GBLGFAFEAGO(::System::Int32 GIBDHABECBD, ::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>*))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_GBLGFAFEAGO_OFFSET))(GIBDHABECBD, KEJJKECGLOP);
	}

	::System::Boolean MEEGJLLNFJC(::MoleMole::Config::WeatherType LBHFBKBDNHN, ::MoleMole::Config::TimePeriodType LIPBBPKOEEG, ::System::String*& MIHBPMANGOH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::String*&))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_MEEGJLLNFJC_OFFSET))(this, LBHFBKBDNHN, LIPBBPKOEEG, MIHBPMANGOH);
	}

	static ::System::Boolean NBFCKEGNHDK(::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>* KAGOKBBBFCL, ::MoleMole::Config::WeatherType LBHFBKBDNHN, ::MoleMole::Config::TimePeriodType LIPBBPKOEEG, ::System::String*& MIHBPMANGOH)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*, ::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::String*&))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_NBFCKEGNHDK_OFFSET))(KAGOKBBBFCL, LBHFBKBDNHN, LIPBBPKOEEG, MIHBPMANGOH);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
