#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F3E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_GET_INFECTEDROLEUIDS_OFFSET UNITYSDK_OFFSET(0x1E15F440)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0x1E15F4E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E15F3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightInfectionAddProperty_TypeDefinitionIndex = 66653;

	class GridFightSpotLightInfectionAddProperty : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_InfectedRoleUIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_GET_INFECTEDROLEUIDS_OFFSET))(this);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTINFECTIONADDPROPERTY_GET_SPOTLIGHTID_OFFSET))(this);
		}

	};
}
