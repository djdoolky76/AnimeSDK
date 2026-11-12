#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJPKBDFIHKF;
class GGAKNLJJNEI;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }

#define BJPKBDFIHKF___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC0FE630)
#define BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__0_OFFSET UNITYSDK_OFFSET(0xC100A60)
#define BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__1_OFFSET UNITYSDK_OFFSET(0xC100AA0)
#define BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__2_OFFSET UNITYSDK_OFFSET(0xC100AD0)
#define BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__3_OFFSET UNITYSDK_OFFSET(0xC100B20)

inline static constexpr unsigned int BJPKBDFIHKF___c__DisplayClass11_0_TypeDefinitionIndex = 66537;

	class BJPKBDFIHKF___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::BJPKBDFIHKF* __4__this; // 0x10
		::GGAKNLJJNEI* npcSever; // 0x18
		::System::Boolean craft; // 0x20
		::System::Boolean trackDress; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateNPC_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateNPC_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateNPC_b__2(::RPG::Client::GridFightEquipDressEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipDressEvent*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateNPC_b__3(::RPG::Client::GridFightEquipReturnPackEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipReturnPackEvent*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS11_0__UPDATENPC_B__3_OFFSET))(this, a1);
		}

	};
