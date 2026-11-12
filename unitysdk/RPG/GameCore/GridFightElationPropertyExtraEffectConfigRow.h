#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightElationPropertyExtraEffectConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E937500)
#define RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9373D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationPropertyExtraEffectConfigRow_TypeDefinitionIndex = 13836;

	class GridFightElationPropertyExtraEffectConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x10
		::System::UInt32 ExtraEffectID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
