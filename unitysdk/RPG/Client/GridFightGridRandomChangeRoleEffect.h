#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMFAGKJIIM.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTGRIDRANDOMCHANGEROLEEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0xDB64910)
#define RPG_CLIENT_GRIDFIGHTGRIDRANDOMCHANGEROLEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDB64BA0)
#define RPG_CLIENT_GRIDFIGHTGRIDRANDOMCHANGEROLEEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDB648C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridRandomChangeRoleEffect_TypeDefinitionIndex = 66379;

	class GridFightGridRandomChangeRoleEffect : public ::EBMFAGKJIIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDRANDOMCHANGEROLEEFFECT_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDRANDOMCHANGEROLEEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* a1, ::RPG::Client::GridFightGridData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDRANDOMCHANGEROLEEFFECT_CANCASTER_OFFSET))(this, a1, a2);
		}

	};
}
