#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD3CCBD0)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsOfficeSurveyWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYWINDOW_CTOR_OFFSET))(this);
		}

	};
}
