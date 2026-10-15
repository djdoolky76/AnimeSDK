#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateBuffSlotType.h"
#include "unitysdk/System/Object.h"
class EGEFJOHILLD;
class FCOEMCEDLNL;

#define EGEFJOHILLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7BDE0)
#define EGEFJOHILLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD7BBF0)

	class EGEFJOHILLD : public ::System::Object
	{
	public:
		::System::UInt32 AEDGAKOBDOC; // 0x10
		::System::UInt32 FMLGGKAFMKC; // 0x14
		::System::UInt32 HNAMEIDAANH; // 0x18
		::RPG::GameCore::FateBuffSlotType MPADIDFJBEF; // 0x1C
		::System::UInt32 IOHKGPKODJL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFJOHILLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGEFJOHILLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGEFJOHILLD*))((::PBYTE)hIl2Cpp + EGEFJOHILLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
