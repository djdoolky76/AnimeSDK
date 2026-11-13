#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTRECOMMEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16AF30)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTRECOMMEND_GET_DISPLAYROLE_OFFSET UNITYSDK_OFFSET(0x1E16AEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightRecommend_TypeDefinitionIndex = 66225;

	class GridFightSpotLightRecommend : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SecondSpotLightIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* PrimarySpotLightIDs; // 0x18
		::System::UInt32 RoleID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTRECOMMEND_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_DisplayRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTRECOMMEND_GET_DISPLAYROLE_OFFSET))(this);
		}

	};
}
