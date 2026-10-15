#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityLodLoadingArtData; }
namespace RPG::GameCore { class EntityLodModelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYLODLOADINGARTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D677F50)
#define RPG_GAMECORE_ENTITYLODLOADINGARTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D677D80)
#define RPG_GAMECORE_ENTITYLODLOADINGARTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D646A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodLoadingArtData_TypeDefinitionIndex = 19215;

	class EntityLodLoadingArtData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityLodModelConfig*>* LodModelConfig; // 0x10
		::System::String* EntityLodQuality; // 0x18
		::RPG::GameCore::EntityLodTemplateName EntityLodTemplateName; // 0x20
		::System::Boolean IsUseGameObjectPool; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGARTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodLoadingArtData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodLoadingArtData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGARTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodLoadingArtData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodLoadingArtData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGARTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
