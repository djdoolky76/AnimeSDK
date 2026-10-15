#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationEntityEffect; }
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONENTITYEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82F310)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82F1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationEntityEffect_TypeDefinitionIndex = 17028;

	class MapRotationEntityEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Boolean IsMaterialEffect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationEntityEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationEntityEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
