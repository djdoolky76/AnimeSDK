#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95A470)
#define RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E95A210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectIdConfigRow_TypeDefinitionIndex = 13801;

	class GridFightTraitEffectIdConfigRow : public ::System::Object
	{
	public:
		::System::String* TraitEffectIconPath; // 0x10
		::System::String* TraitEffectJson; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::GridFightTraitEffectType TraitEffectType; // 0x24
		::RPG::Client::TextID TraitEffectDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitEffectIdConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEFFECTIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
