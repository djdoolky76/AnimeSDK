#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEMASTERMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCB14AF0)

namespace RPG::Client::ChimeraDuel
{
	class ChimeraDuelBattleMasterModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEMASTERMODEL_CTOR_OFFSET))(this);
		}

	};
}
