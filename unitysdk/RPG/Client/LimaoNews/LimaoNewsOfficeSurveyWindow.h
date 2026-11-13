#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC35C0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyWindow_TypeDefinitionIndex = 83149;

	class LimaoNewsOfficeSurveyWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYWINDOW_CTOR_OFFSET))(this);
		}

	};
}
