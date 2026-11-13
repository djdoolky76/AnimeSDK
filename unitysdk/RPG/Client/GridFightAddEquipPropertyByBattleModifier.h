#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7183D0)
#define RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_GET_EQUIPUID_OFFSET UNITYSDK_OFFSET(0x1C718A30)
#define RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_GET_PROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x1C718A50)
#define RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_SET_EQUIPUID_OFFSET UNITYSDK_OFFSET(0x1C718A40)
#define RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C7189B0)
#define RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER__UPDATE_OFFSET UNITYSDK_OFFSET(0x1C718480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAddEquipPropertyByBattleModifier_TypeDefinitionIndex = 66655;

	class GridFightAddEquipPropertyByBattleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _PropertyMap; // 0x28
		::System::UInt32 _EquipUid_k__BackingField; // 0x30
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void _Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER__UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_GET_EQUIPUID_OFFSET))(this);
		}

		::System::Void set_EquipUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_SET_EQUIPUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_PropertyMap()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDEQUIPPROPERTYBYBATTLEMODIFIER_GET_PROPERTYMAP_OFFSET))(this);
		}

	};
}
