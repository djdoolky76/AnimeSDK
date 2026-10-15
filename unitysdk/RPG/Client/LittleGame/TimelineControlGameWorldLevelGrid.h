#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPCKCJDCNFM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLDLEVELGRID_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DB1D0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorldLevelGrid_TypeDefinitionIndex = 42519;

	class TimelineControlGameWorldLevelGrid : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HPCKCJDCNFM*>* Actors; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLDLEVELGRID_CTOR_OFFSET))(this);
		}

	};
}
