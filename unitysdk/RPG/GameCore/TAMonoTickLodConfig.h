#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TAMONOTICKLODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB52FE0)
#define RPG_GAMECORE_TAMONOTICKLODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB52F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TAMonoTickLodConfig_TypeDefinitionIndex = 19201;

	class TAMonoTickLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TAMonoTickLodTemplate*>* LodTemplateMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TAMonoTickLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TAMonoTickLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAMONOTICKLODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
