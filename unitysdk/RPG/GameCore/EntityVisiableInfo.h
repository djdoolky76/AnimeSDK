#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityVisiableInfo; }

#define RPG_GAMECORE_ENTITYVISIABLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67B1C0)
#define RPG_GAMECORE_ENTITYVISIABLEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D67B0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityVisiableInfo_TypeDefinitionIndex = 21853;

	class EntityVisiableInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupNPCID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYVISIABLEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityVisiableInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityVisiableInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYVISIABLEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
