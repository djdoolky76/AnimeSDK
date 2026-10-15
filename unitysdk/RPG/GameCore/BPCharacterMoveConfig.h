#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BPCharacterMoveConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BPCHARACTERMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D437300)
#define RPG_GAMECORE_BPCHARACTERMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D437200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BPCharacterMoveConfig_TypeDefinitionIndex = 18146;

	class BPCharacterMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BodySize>* AvatarBodySizeMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BPCHARACTERMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BPCharacterMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BPCharacterMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BPCHARACTERMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
