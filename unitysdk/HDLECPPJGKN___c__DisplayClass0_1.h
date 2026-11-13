#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define HDLECPPJGKN___C__DISPLAYCLASS0_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7D14C0)
#define HDLECPPJGKN___C__DISPLAYCLASS0_1__SATISFY_B__5_OFFSET UNITYSDK_OFFSET(0x1B7D15C0)

inline static constexpr unsigned int HDLECPPJGKN___c__DisplayClass0_1_TypeDefinitionIndex = 66582;

	template <typename T>
	class HDLECPPJGKN___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::UInt32 baseID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__5(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + HDLECPPJGKN___C__DISPLAYCLASS0_1__SATISFY_B__5_OFFSET))(this, a1);
		}

	};
