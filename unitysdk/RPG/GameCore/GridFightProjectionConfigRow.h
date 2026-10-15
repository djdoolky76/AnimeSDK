#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightProjectionUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightProjectionConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73BAE0)
#define RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73B620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightProjectionConfigRow_TypeDefinitionIndex = 13495;

	class GridFightProjectionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AllMemberGeneralPropertyList; // 0x10
		::Il2CppArray<::System::UInt32>* TraitList; // 0x18
		::Il2CppArray<::System::UInt32>* ActivationTraitLayerList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* TraitListMemberGeneralPropertyList; // 0x30
		::System::UInt32 RoleID; // 0x38
		::RPG::GameCore::GridFightProjectionUnlockType UnlockType; // 0x3C
		::System::UInt32 Rarity; // 0x40
		::System::UInt32 ID; // 0x44
		::System::UInt32 MazebuffID; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ProjectionName; // 0x50
		::RPG::Client::TextID ProjectionDesc; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightProjectionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightProjectionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPROJECTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
