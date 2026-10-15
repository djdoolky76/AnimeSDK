#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define GCMCEDELOJL___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15984160)
#define GCMCEDELOJL___C__DISPLAYCLASS9_0__GETNONETEMPORARYEQUIPITEMCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x15984350)

inline static constexpr unsigned int GCMCEDELOJL___c__DisplayClass9_0_TypeDefinitionIndex = 65322;

	class GCMCEDELOJL___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMCEDELOJL___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNoneTemporaryEquipItemCount_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + GCMCEDELOJL___C__DISPLAYCLASS9_0__GETNONETEMPORARYEQUIPITEMCOUNT_B__0_OFFSET))(this, a1);
		}

	};
