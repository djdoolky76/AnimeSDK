#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityModelAssetInfo; }

#define RPG_GAMECORE_ENTITYMODELASSETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64B7A0)
#define RPG_GAMECORE_ENTITYMODELASSETINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D64B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityModelAssetInfo_TypeDefinitionIndex = 19212;

	class EntityModelAssetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMODELASSETINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityModelAssetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityModelAssetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMODELASSETINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
