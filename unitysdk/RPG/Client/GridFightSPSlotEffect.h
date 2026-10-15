#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMFAGKJIIM.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0xD26B610)
#define RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD26BBE0)
#define RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD26B5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSPSlotEffect_TypeDefinitionIndex = 64836;

	class GridFightSPSlotEffect : public ::EBMFAGKJIIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* a1, ::RPG::Client::GridFightGridData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPSLOTEFFECT_CANCASTER_OFFSET))(this, a1, a2);
		}

	};
}
