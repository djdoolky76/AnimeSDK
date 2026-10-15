#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelEntityRef; }

#define RPG_GAMECORE_LEVELENTITYREF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77E410)
#define RPG_GAMECORE_LEVELENTITYREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77E320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRef_TypeDefinitionIndex = 18899;

	class LevelEntityRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREF_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelEntityRef* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelEntityRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREF_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
