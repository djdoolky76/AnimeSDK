#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD123AD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1__ISALLEQUIPGOT_B__0_OFFSET UNITYSDK_OFFSET(0xD124230)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass8_1_TypeDefinitionIndex = 65352;

	template <typename T>
	class GridFightEquipTrackUtils___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::UInt32 equipItemID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllEquipGot_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS8_1__ISALLEQUIPGOT_B__0_OFFSET))(this, a1);
		}

	};
}
