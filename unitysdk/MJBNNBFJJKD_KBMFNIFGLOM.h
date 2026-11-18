#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/WeatherV1CastV2Entry.h"

namespace MoleMole { class ConfigLevelWeather; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJBNNBFJJKD_KBMFNIFGLOM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x177C04B0)
#define MJBNNBFJJKD_KBMFNIFGLOM__CTOR_OFFSET UNITYSDK_OFFSET(0x177C04A0)

inline static constexpr unsigned int MJBNNBFJJKD_KBMFNIFGLOM_TypeDefinitionIndex = 55506;

class MJBNNBFJJKD_KBMFNIFGLOM : public ::System::Object
{
public:
	::System::Int32 GIBDHABECBD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_KBMFNIFGLOM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>*))((::PBYTE)hIl2Cpp + MJBNNBFJJKD_KBMFNIFGLOM_FLIAEJGDMLI_OFFSET))(this, KEJJKECGLOP);
	}
};
