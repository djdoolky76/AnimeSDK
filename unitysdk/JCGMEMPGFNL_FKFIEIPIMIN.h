#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StageBattleEventRow; }

#define JCGMEMPGFNL_FKFIEIPIMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x16589D30)
#define JCGMEMPGFNL_FKFIEIPIMIN_MDOFJHCLPAC_OFFSET UNITYSDK_OFFSET(0x1658AC40)

	class JCGMEMPGFNL_FKFIEIPIMIN : public ::System::Object
	{
	public:
		::RPG::GameCore::StageBattleEventRow* FDKPNKAGNFO; // 0x10
		::System::Int32 HIJFONCLIEC; // 0x18
		::System::Int32 AHADHGCOFGI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_FKFIEIPIMIN_CTOR_OFFSET))(this);
		}

		::System::UInt32 MDOFJHCLPAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_FKFIEIPIMIN_MDOFJHCLPAC_OFFSET))(this);
		}

	};
