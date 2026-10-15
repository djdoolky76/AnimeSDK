#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenMiniGameGoodsConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76E510)
#define RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76E3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameGoodsConfig_TypeDefinitionIndex = 16789;

	class HipplenMiniGameGoodsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AnchorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenMiniGameGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenMiniGameGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
