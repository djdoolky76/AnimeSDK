#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ProjectileTemplateConfig; }
namespace RPG::GameCore { class ProjectileTemplateData; }

#define RPG_GAMECORE_PROJECTILETEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D917220)
#define RPG_GAMECORE_PROJECTILETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileTemplateConfig_TypeDefinitionIndex = 15654;

	class ProjectileTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileTemplateData*>* TemplateDataList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILETEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ProjectileTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ProjectileTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
