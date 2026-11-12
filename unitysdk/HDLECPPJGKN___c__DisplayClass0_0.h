#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfig; }

#define HDLECPPJGKN___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16B80BE0)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET UNITYSDK_OFFSET(0x16B81180)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__4_OFFSET UNITYSDK_OFFSET(0x16B81120)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__6_OFFSET UNITYSDK_OFFSET(0x16B81220)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__7_OFFSET UNITYSDK_OFFSET(0x16B812B0)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_G___HASBASETRAIT_2_OFFSET UNITYSDK_OFFSET(0x16B80BF0)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_G___HASEQUIPGRANTEDTRAIT_3_OFFSET UNITYSDK_OFFSET(0x16B80D50)
#define HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_G___HASEQUIPPEDSAME_1_OFFSET UNITYSDK_OFFSET(0x16B80EE0)

inline static constexpr unsigned int HDLECPPJGKN___c__DisplayClass0_0_TypeDefinitionIndex = 66581;

	class HDLECPPJGKN___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::RPG::Client::GridFightEquipItemData* equipItemData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__4(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__4_OFFSET))(this, a1);
		}

		::System::Boolean _Satisfy_b__0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _Satisfy_g___HasEquippedSame_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_G___HASEQUIPPEDSAME_1_OFFSET))(this);
		}

		::System::Boolean _Satisfy_g___HasBaseTrait_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_G___HASBASETRAIT_2_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__6(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__6_OFFSET))(this, a1);
		}

		::System::Boolean _Satisfy_g___HasEquipGrantedTrait_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_G___HASEQUIPGRANTEDTRAIT_3_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__7(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_0__SATISFY_B__7_OFFSET))(this, a1);
		}

	};
