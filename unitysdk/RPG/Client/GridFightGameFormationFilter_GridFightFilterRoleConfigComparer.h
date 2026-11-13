#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightRoleConfigRow; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D690FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D691A00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D691A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter_GridFightFilterRoleConfigComparer_TypeDefinitionIndex = 66227;

	class GridFightGameFormationFilter_GridFightFilterRoleConfigComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::GridFightRoleConfigRow* a1, ::RPG::GameCore::GridFightRoleConfigRow* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
