#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameRefSpotLightRecommend; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFSPOTLIGHTRECOMMEND_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1CD538F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFSPOTLIGHTRECOMMEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD41940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefSpotLightRecommend_TypeDefinitionIndex = 66284;

	class GridFightGameRefSpotLightRecommend : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* SecondRecommends; // 0x10
		::RPG::Client::GridFightRole* Role; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* MainRecommends; // 0x20
		::System::Int32 Index; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFSPOTLIGHTRECOMMEND_CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightGameRefSpotLightRecommend* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFSPOTLIGHTRECOMMEND_COMPARETO_OFFSET))(this, a1);
		}

	};
}
