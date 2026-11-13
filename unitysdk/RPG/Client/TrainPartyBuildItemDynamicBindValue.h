#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE45390)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_TypeDefinitionIndex = 70831;

	class TrainPartyBuildItemDynamicBindValue : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_CTOR_OFFSET))(this);
		}

	};
}
