#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonoEffectLodConfig; }
namespace RPG::GameCore { class MonoEffectLodDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOEFFECTLODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89BB80)
#define RPG_GAMECORE_MONOEFFECTLODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89BA80)

namespace RPG::GameCore
{
	class MonoEffectLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonoEffectLodDetail*>* MonoEffectLODDetailMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonoEffectLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonoEffectLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
