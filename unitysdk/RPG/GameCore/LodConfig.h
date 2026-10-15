#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F2A80)
#define RPG_GAMECORE_LODCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F2A90)
#define RPG_GAMECORE_LODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F2960)

namespace RPG::GameCore
{
	class LodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LodTemplate*>* LodTemplateMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NormDistanceLodTemplate*>* NormDistanceLodTemplateMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMappingPropLod; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LODCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
