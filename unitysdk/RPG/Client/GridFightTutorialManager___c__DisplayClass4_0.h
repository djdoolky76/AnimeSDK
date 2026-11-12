#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF2E90)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS4_0__ISEQUIPBLOCKBYTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0xDCF6D50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialManager___c__DisplayClass4_0_TypeDefinitionIndex = 67426;

	class GridFightTutorialManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsEquipBlockByTutorial_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS4_0__ISEQUIPBLOCKBYTUTORIAL_B__0_OFFSET))(this, a1);
		}

	};
}
