#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestructibleBridgeBind; }

#define RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D0150)
#define RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D0030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestructibleBridgeBind_TypeDefinitionIndex = 17574;

	class DestructibleBridgeBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DestructibleChild1; // 0x10
		::System::UInt32 DestructibleChild2; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestructibleBridgeBind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestructibleBridgeBind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTRUCTIBLEBRIDGEBIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
