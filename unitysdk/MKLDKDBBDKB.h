#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/STDetectMoneyType.h"
class FCOEMCEDLNL;
class MKLDKDBBDKB;

#define MKLDKDBBDKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CB720)
#define MKLDKDBBDKB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CB5D0)

	class MKLDKDBBDKB : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LABDELLPODK; // 0x10
		::RPG::GameCore::STDetectMoneyType ABFDDDEHDGN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLDKDBBDKB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MKLDKDBBDKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MKLDKDBBDKB*))((::PBYTE)hIl2Cpp + MKLDKDBBDKB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
