#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E368AA0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressNodeControl_TypeDefinitionIndex = 82011;

	class PixAirGameProgressNodeControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODECONTROL_CTOR_OFFSET))(this);
		}

	};
}
