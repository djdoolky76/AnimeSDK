#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGood.h"
#include "unitysdk/RPG/Client/GridFightTrailblazeGoodDisplayType.h"
class AMNAMDLMADK;
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBBC30)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_GET_DISPLAYOBJ_OFFSET UNITYSDK_OFFSET(0xDCBBCE0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xDCBBC90)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xDCBBC80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeRoleGood_TypeDefinitionIndex = 67287;

	class GridFightTrailblazeRoleGood : public ::RPG::Client::GridFightTrailblazeGood
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x50
		::System::Void _ctor(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_GET_ROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightTrailblazeGoodDisplayType get_DisplayType()
		{
			return ((::RPG::Client::GridFightTrailblazeGoodDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Object* get_DisplayObj()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEROLEGOOD_GET_DISPLAYOBJ_OFFSET))(this);
		}

	};
}
