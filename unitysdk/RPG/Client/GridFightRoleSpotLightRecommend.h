#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_CTOR_OFFSET UNITYSDK_OFFSET(0xDC46FF0)
#define RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_GET_FIRSTRECOMMENDSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC646E0)
#define RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xDC646D0)
#define RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_GET_SECONDRECOMMENDSPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC64750)
#define RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND__CREATESPOTLIGHTCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC644A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSpotLightRecommend_TypeDefinitionIndex = 66841;

	class GridFightRoleSpotLightRecommend : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _BackSecondRecommendSpotLightConfigs; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _FrontFirstRecommendSpotLightConfigs; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _FrontSecondRecommendSpotLightConfigs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _BackFirstRecommendSpotLightConfigs; // 0x30
		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_GET_ROLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* get_FirstRecommendSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_GET_FIRSTRECOMMENDSPOTLIGHTCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* get_SecondRecommendSpotLightConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND_GET_SECONDRECOMMENDSPOTLIGHTCONFIGS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>* _CreateSpotLightConfigs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotLightConfig*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESPOTLIGHTRECOMMEND__CREATESPOTLIGHTCONFIGS_OFFSET))(a1);
		}

	};
}
