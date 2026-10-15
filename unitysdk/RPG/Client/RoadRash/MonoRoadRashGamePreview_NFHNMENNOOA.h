#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGamePreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGamePreview_PreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_NFHNMENNOOA_CTOR_OFFSET UNITYSDK_OFFSET(0xDED36E0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGamePreview_NFHNMENNOOA_TypeDefinitionIndex = 75857;

	class MonoRoadRashGamePreview_NFHNMENNOOA : public ::System::Object
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar* EABKOHGCHFP; // 0x10
		::RPG::Client::RoadRash::MonoRoadRashGamePreviewCar* FMJPMFEDIJL; // 0x18
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* NDJINIMPHFH; // 0x20
		::System::Single BJOCBPFKJDP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_NFHNMENNOOA_CTOR_OFFSET))(this);
		}

	};
}
