#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsMessageItemViewModel.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLASTLINEMESSAGEITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD3BAFA0)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsLastLineMessageItemViewModel : public ::RPG::Client::LimaoNews::LimaoNewsMessageItemViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLASTLINEMESSAGEITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
