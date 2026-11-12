#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBonfireEventOption.h"

#define RPG_CLIENT_GRIDFIGHTBONFIREBACKTOEVENTOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D720)
#define RPG_CLIENT_GRIDFIGHTBONFIREBACKTOEVENTOPTION_GET_ISBACKTOEVENT_OFFSET UNITYSDK_OFFSET(0xDA7D930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireBackToEventOption_TypeDefinitionIndex = 65873;

	class GridFightBonfireBackToEventOption : public ::RPG::Client::GridFightBonfireEventOption
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREBACKTOEVENTOPTION_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBackToEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREBACKTOEVENTOPTION_GET_ISBACKTOEVENT_OFFSET))(this);
		}

	};
}
