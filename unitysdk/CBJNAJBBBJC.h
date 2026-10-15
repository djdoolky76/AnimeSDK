#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class CBJNAJBBBJC;
namespace RPG::Client::StoryToken { class StoryTokenActivityData; }

#define CBJNAJBBBJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4AF410)
#define CBJNAJBBBJC_GET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xC4AF3F0)
#define CBJNAJBBBJC_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC4AF2E0)
#define CBJNAJBBBJC_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0xC4AF360)
#define CBJNAJBBBJC_SET_CURRENTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xC4AF400)

	class CBJNAJBBBJC : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::StoryToken::StoryTokenActivityData* _CurrentActivityData_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJNAJBBBJC_CTOR_OFFSET))(this);
		}

		static ::CBJNAJBBBJC* GGBLHEHJBDO()
		{
			return ((::CBJNAJBBBJC*(*)())((::PBYTE)hIl2Cpp + CBJNAJBBBJC_GGBLHEHJBDO_OFFSET))();
		}

		::System::Boolean KHBGONMDCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJNAJBBBJC_KHBGONMDCPI_OFFSET))(this);
		}

		::RPG::Client::StoryToken::StoryTokenActivityData* get_CurrentActivityData()
		{
			return ((::RPG::Client::StoryToken::StoryTokenActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJNAJBBBJC_GET_CURRENTACTIVITYDATA_OFFSET))(this);
		}

		::System::Void set_CurrentActivityData(::RPG::Client::StoryToken::StoryTokenActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StoryToken::StoryTokenActivityData*))((::PBYTE)hIl2Cpp + CBJNAJBBBJC_SET_CURRENTACTIVITYDATA_OFFSET))(this, a1);
		}

	};
