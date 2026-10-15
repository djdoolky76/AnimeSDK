#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD43DD40)

namespace RPG::Client::LittleGame::FiveDim
{
	class FiveDimPropView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMPROPVIEW_CTOR_OFFSET))(this);
		}

	};
}
