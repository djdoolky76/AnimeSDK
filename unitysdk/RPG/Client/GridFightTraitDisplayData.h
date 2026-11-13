#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F0A20)
#define RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ISDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D3F7540)
#define RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ISEXTRA_OFFSET UNITYSDK_OFFSET(0x1D3F7530)
#define RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ISNOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3F7550)
#define RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ORIGINALINDEX_OFFSET UNITYSDK_OFFSET(0x1D3F7560)
#define RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1D3F7520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitDisplayData_TypeDefinitionIndex = 67329;

	class GridFightTraitDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfigBase* _TraitConfig_k__BackingField; // 0x10
		::System::Boolean _IsExtra_k__BackingField; // 0x18
		::System::Boolean _IsNotCount_k__BackingField; // 0x19
		::System::Boolean _IsDeactivated_k__BackingField; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Int32 _OriginalIndex_k__BackingField; // 0x1C
		::System::Void _ctor(::RPG::Client::GridFightTraitConfigBase* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::GridFightTraitConfigBase* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_TRAITCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ISEXTRA_OFFSET))(this);
		}

		::System::Boolean get_IsDeactivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ISDEACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_IsNotCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ISNOTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OriginalIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITDISPLAYDATA_GET_ORIGINALINDEX_OFFSET))(this);
		}

	};
}
