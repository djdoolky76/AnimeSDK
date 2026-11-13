#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/FeverCookingDecisionKind.h"
class IFKJDMIGAMG;

#define PPPJEIACOLG_CTOR_OFFSET UNITYSDK_OFFSET(0x3E8E050)
#define PPPJEIACOLG_DJGFJGNIAON_OFFSET UNITYSDK_OFFSET(0x1B8BF050)
#define PPPJEIACOLG_GET_DISHID_OFFSET UNITYSDK_OFFSET(0x723600)
#define PPPJEIACOLG_GET_GOAL_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define PPPJEIACOLG_GET_KIND_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define PPPJEIACOLG_HMOGOHOFPFG_OFFSET UNITYSDK_OFFSET(0x1B8BEFD0)
#define PPPJEIACOLG_KDNFFFLAAMM_OFFSET UNITYSDK_OFFSET(0x1B8BF0C0)

inline static constexpr unsigned int PPPJEIACOLG_TypeDefinitionIndex = 79963;

	struct alignas(8) PPPJEIACOLG
	{
		::RPG::Client::LittleGame::ComicDessert::FeverCookingDecisionKind _Kind_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::IFKJDMIGAMG* _Goal_k__BackingField; // 0x18
		::System::UInt32 _DishID_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::FeverCookingDecisionKind a1, ::IFKJDMIGAMG* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::FeverCookingDecisionKind, ::IFKJDMIGAMG*, ::System::UInt32))((::PBYTE)hIl2Cpp + PPPJEIACOLG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::ComicDessert::FeverCookingDecisionKind get_Kind()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::FeverCookingDecisionKind(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPJEIACOLG_GET_KIND_OFFSET))(this);
		}

		::IFKJDMIGAMG* get_Goal()
		{
			return ((::IFKJDMIGAMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPJEIACOLG_GET_GOAL_OFFSET))(this);
		}

		::System::UInt32 get_DishID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPJEIACOLG_GET_DISHID_OFFSET))(this);
		}

		/*
		static ::PPPJEIACOLG HMOGOHOFPFG(::IFKJDMIGAMG* a1)
		{
			return ((::PPPJEIACOLG(*)(::IFKJDMIGAMG*))((::PBYTE)hIl2Cpp + PPPJEIACOLG_HMOGOHOFPFG_OFFSET))(a1);
		}
		*/

		/*
		static ::PPPJEIACOLG DJGFJGNIAON()
		{
			return ((::PPPJEIACOLG(*)())((::PBYTE)hIl2Cpp + PPPJEIACOLG_DJGFJGNIAON_OFFSET))();
		}
		*/

		/*
		static ::PPPJEIACOLG KDNFFFLAAMM(::System::UInt32 a1)
		{
			return ((::PPPJEIACOLG(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPPJEIACOLG_KDNFFFLAAMM_OFFSET))(a1);
		}
		*/

	};
