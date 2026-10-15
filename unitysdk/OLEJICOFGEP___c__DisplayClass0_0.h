#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define OLEJICOFGEP___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF031F0)
#define OLEJICOFGEP___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET UNITYSDK_OFFSET(0xBF03210)

inline static constexpr unsigned int OLEJICOFGEP___c__DisplayClass0_0_TypeDefinitionIndex = 64980;

	class OLEJICOFGEP___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* equipItemData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEJICOFGEP___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + OLEJICOFGEP___C__DISPLAYCLASS0_0__SATISFY_B__0_OFFSET))(this, a1);
		}

	};
