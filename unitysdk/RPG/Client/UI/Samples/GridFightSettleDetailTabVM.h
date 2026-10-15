#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/GridFightSettleTabViewModel.h"

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLEDETAILTABVM_CTOR_OFFSET UNITYSDK_OFFSET(0xE410910)

namespace RPG::Client::Ui::Samples
{
	class GridFightSettleDetailTabVM : public ::RPG::Client::Ui::Samples::GridFightSettleTabViewModel
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLEDETAILTABVM_CTOR_OFFSET))(this);
		}

	};
}
