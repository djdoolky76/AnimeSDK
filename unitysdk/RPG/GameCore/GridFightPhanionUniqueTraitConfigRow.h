#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPhanionUniqueTraitConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTPHANIONUNIQUETRAITCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA57710)
#define RPG_GAMECORE_GRIDFIGHTPHANIONUNIQUETRAITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA57350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPhanionUniqueTraitConfigRow_TypeDefinitionIndex = 13845;

	class GridFightPhanionUniqueTraitConfigRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Double>* AllMemberPropertyList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Double>* OwnerPropertyList; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Double>* SpecialOwnerPropertyList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* SpecialSavedValueAddList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* SavedValueAddList; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::System::Double>* SpecialAllMemberPropertyList; // 0x38
		::System::UInt32 MaxStarBonusID; // 0x40
		::System::UInt32 Rarity; // 0x44
		::System::UInt32 Star; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPHANIONUNIQUETRAITCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPHANIONUNIQUETRAITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
