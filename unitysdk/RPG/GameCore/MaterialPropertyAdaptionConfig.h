#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MaterialPropertyAdaptionConfig; }
namespace RPG::GameCore { class MaterialPropertyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8306A0)
#define RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D830590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialPropertyAdaptionConfig_TypeDefinitionIndex = 16508;

	class MaterialPropertyAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RenderName; // 0x10
		::RPG::GameCore::MaterialPropertyConfig* MaterialPropertyConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MaterialPropertyAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MaterialPropertyAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
