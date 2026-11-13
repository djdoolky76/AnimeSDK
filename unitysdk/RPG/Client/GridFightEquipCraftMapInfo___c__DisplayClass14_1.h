#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS14_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1D172520)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS14_1___CANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0x1D173380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass14_1_TypeDefinitionIndex = 66052;

	template <typename T>
	class GridFightEquipCraftMapInfo___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> costItem; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS14_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __CanCraftByElationLaughPointEquips_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS14_1___CANCRAFTBYELATIONLAUGHPOINTEQUIPS_B__0_OFFSET))(this, a1);
		}

	};
}
