#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBMFAGKJIIM.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0xD188A70)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD188E50)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD1887F0)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_INITROLES_OFFSET UNITYSDK_OFFSET(0xD188840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridCyreneEffect_TypeDefinitionIndex = 64837;

	class GridFightGridCyreneEffect : public ::EBMFAGKJIIM
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RoleIDs; // 0x10
		// static const ::System::Object _CyreneRoleID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Void InitRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_INITROLES_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* a1, ::RPG::Client::GridFightGridData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT_CANCASTER_OFFSET))(this, a1, a2);
		}

	};
}
