#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoYoGroupStreamingTemplateConfig; }
namespace RPG::GameCore { class HoYoGroupStreamingTemplateItem; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D743560)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D743470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingTemplateConfig_TypeDefinitionIndex = 17354;

	class HoYoGroupStreamingTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoYoGroupStreamingTemplateItem*>* Items; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoYoGroupStreamingTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoYoGroupStreamingTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
