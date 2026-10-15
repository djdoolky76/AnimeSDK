#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }

#define GNGFAOHODAP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B08360)
#define GNGFAOHODAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B08300)
#define GNGFAOHODAP_LGLMFPLICIE_OFFSET UNITYSDK_OFFSET(0x15B080A0)
#define GNGFAOHODAP_MJNAKKNCLKO_OFFSET UNITYSDK_OFFSET(0x15B08170)
#define GNGFAOHODAP_PALMIFPPCAJ_OFFSET UNITYSDK_OFFSET(0x15B082A0)

	class GNGFAOHODAP : public ::System::Object
	{
	public:
		::RPG::Client::UIController* IMIDEBKGLJO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGFAOHODAP_CTOR_OFFSET))(this);
		}

		::System::Void LGLMFPLICIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGFAOHODAP_LGLMFPLICIE_OFFSET))(this);
		}

		::System::Void MJNAKKNCLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGFAOHODAP_MJNAKKNCLKO_OFFSET))(this);
		}

		::System::Void PALMIFPPCAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGFAOHODAP_PALMIFPPCAJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGFAOHODAP_DISPOSE_OFFSET))(this);
		}

	};
