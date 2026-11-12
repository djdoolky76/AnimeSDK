#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD6020)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS8_0__ISRECIPECANCRAFTINCLUDEDRESSED_B__0_OFFSET UNITYSDK_OFFSET(0xDAD78C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftUtils___c__DisplayClass8_0_TypeDefinitionIndex = 66534;

	class GridFightEquipCraftUtils___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> kv; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRecipeCanCraftIncludeDressed_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTUTILS___C__DISPLAYCLASS8_0__ISRECIPECANCRAFTINCLUDEDRESSED_B__0_OFFSET))(this, a1);
		}

	};
}
