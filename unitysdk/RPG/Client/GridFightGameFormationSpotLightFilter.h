#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationSpotLightFilter_RoleFilterType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightSpotlightTagConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xDB1FA10)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_FILTERDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xDB1E520)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_FILTERTAG_OFFSET UNITYSDK_OFFSET(0xDB1E400)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETALLDIFFICULTYADDS_OFFSET UNITYSDK_OFFSET(0xDB1F690)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETALLTAGCONFIGS_OFFSET UNITYSDK_OFFSET(0xDB1EC50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTSFORALLROLES_OFFSET UNITYSDK_OFFSET(0xDB1EB60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTSWITHOUTROLE_OFFSET UNITYSDK_OFFSET(0xDB1EBB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTS_1_OFFSET UNITYSDK_OFFSET(0xDB1EAC0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTS_OFFSET UNITYSDK_OFFSET(0xDB1E840)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GET_DIFFICULTYFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xDB1E7F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GET_ISFILTERON_OFFSET UNITYSDK_OFFSET(0xDB1E730)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GET_TAGFILTEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xDB1E7A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_ISFILTEREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xDB1E5E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_ISFILTEREDTAG_OFFSET UNITYSDK_OFFSET(0xDB1E4C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_REMOVEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xDB1E580)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_REMOVETAG_OFFSET UNITYSDK_OFFSET(0xDB1E460)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_RESET_OFFSET UNITYSDK_OFFSET(0xDB1E640)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__APPLY_OFFSET UNITYSDK_OFFSET(0xDB1E890)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__ENSUREALLLOADED_OFFSET UNITYSDK_OFFSET(0xDB1ECA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__SATISFYROLE_OFFSET UNITYSDK_OFFSET(0xDB1F880)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__SATISFY_OFFSET UNITYSDK_OFFSET(0xDB1F6E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___SATISFY_B__21_0_OFFSET UNITYSDK_OFFSET(0xDB1FAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationSpotLightFilter_TypeDefinitionIndex = 66234;

	class GridFightGameFormationSpotLightFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _FilteredDifficultyAdds; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _AllDifficultyAdds; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FilteredTagIDs; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _CachedFilteredSpotLights; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _AllSpotLights; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>* _AllTagConfigs; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void FilterTag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_FILTERTAG_OFFSET))(this, a1);
		}

		::System::Void RemoveTag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_REMOVETAG_OFFSET))(this, a1);
		}

		::System::Boolean IsFilteredTag(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_ISFILTEREDTAG_OFFSET))(this, a1);
		}

		::System::Void FilterDifficulty(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_FILTERDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Void RemoveDifficulty(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_REMOVEDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Boolean IsFilteredDifficulty(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_ISFILTEREDDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_RESET_OFFSET))(this);
		}

		::System::Boolean get_IsFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GET_ISFILTERON_OFFSET))(this);
		}

		::System::Int32 get_TagFilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GET_TAGFILTEREDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_DifficultyFilteredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GET_DIFFICULTYFILTEREDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* GetFilteredSpotLights()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* GetFilteredSpotLights_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTS_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* GetFilteredSpotLightsForAllRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTSFORALLROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* GetFilteredSpotLightsWithoutRole(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETFILTEREDSPOTLIGHTSWITHOUTROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>* GetAllTagConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETALLTAGCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetAllDifficultyAdds()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER_GETALLDIFFICULTYADDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _Apply(::System::UInt32 a1, ::RPG::Client::GridFightGameFormationSpotLightFilter_RoleFilterType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightGameFormationSpotLightFilter_RoleFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__APPLY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _Satisfy(::RPG::Client::GridFightSpotLightConfig* a1, ::System::UInt32 a2, ::RPG::Client::GridFightGameFormationSpotLightFilter_RoleFilterType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32, ::RPG::Client::GridFightGameFormationSpotLightFilter_RoleFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__SATISFY_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean _SatisfyRole(::RPG::Client::GridFightSpotLightConfig* a1, ::System::UInt32 a2, ::RPG::Client::GridFightGameFormationSpotLightFilter_RoleFilterType a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32, ::RPG::Client::GridFightGameFormationSpotLightFilter_RoleFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__SATISFYROLE_OFFSET))(a1, a2, a3);
		}

		::System::Void _EnsureAllLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER__ENSUREALLLOADED_OFFSET))(this);
		}

		::System::Boolean __Satisfy_b__21_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___SATISFY_B__21_0_OFFSET))(this, a1);
		}

	};
}
