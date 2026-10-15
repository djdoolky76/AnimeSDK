#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleAreaRow; }

#define KJDMIECBFCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB442210)
#define KJDMIECBFCJ_IMHKCDCAFFK_OFFSET UNITYSDK_OFFSET(0xB442170)

	class KJDMIECBFCJ : public ::System::Object
	{
	public:
		::System::UInt32 NJIOMOHBILM; // 0x10
		::System::UInt32 FFLDMJCEMDC; // 0x14
		::System::UInt32 FIMNPJLNLEE; // 0x18
		::System::UInt32 HNEIIAGADGO; // 0x1C
		::System::UInt32 LLDCHLHNADA; // 0x20
		::System::UInt32 GKAENDDHNOG; // 0x24
		::System::UInt32 NMBKAIEIAPE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDMIECBFCJ_CTOR_OFFSET))(this);
		}

		::System::Void IMHKCDCAFFK(::RPG::GameCore::BattleAreaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAreaRow*))((::PBYTE)hIl2Cpp + KJDMIECBFCJ_IMHKCDCAFFK_OFFSET))(this, a1);
		}

	};
