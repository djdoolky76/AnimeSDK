#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsMessageItemViewModel.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLASTLINEMESSAGEITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF070)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLastLineMessageItemViewModel_TypeDefinitionIndex = 83215;

	class LimaoNewsLastLineMessageItemViewModel : public ::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLASTLINEMESSAGEITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
