#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubNatureConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47D6E0)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D47D010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubNatureConfigRow_TypeDefinitionIndex = 12926;

	class BoxingClubNatureConfigRow : public ::System::Object
	{
	public:
		::System::String* BoxingBuffIcon; // 0x10
		::System::String* NatureIconBackGround; // 0x18
		::System::String* BoxingBuffIconBackground; // 0x20
		::System::String* BoxingBuffBackground; // 0x28
		::RPG::GameCore::AttackDamageType BoxingClubNatureType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoxingClubNatureConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoxingClubNatureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
