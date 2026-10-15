#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCAABF20)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesGameplayStarViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Boolean IsFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSTARVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
