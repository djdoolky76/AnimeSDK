#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRolePropertyConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5CE30)
#define RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5CAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRolePropertyConfigRow_TypeDefinitionIndex = 13615;

	class GridFightRolePropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* MiniIconPath; // 0x18
		::System::UInt32 ExtraEffectID; // 0x20
		::System::UInt32 Order; // 0x24
		::RPG::Client::TextID PanelPropertyName; // 0x28
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x38
		::System::Boolean IsDisplay; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID PropertyName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRolePropertyConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRolePropertyConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEPROPERTYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
