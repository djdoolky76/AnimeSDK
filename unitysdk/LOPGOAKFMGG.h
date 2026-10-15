#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
class LOPGOAKFMGG;

#define LOPGOAKFMGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D123BA0)
#define LOPGOAKFMGG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D123BB0)
#define LOPGOAKFMGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D123B50)

	class LOPGOAKFMGG : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget HILNFHCPEAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPGOAKFMGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LOPGOAKFMGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LOPGOAKFMGG*))((::PBYTE)hIl2Cpp + LOPGOAKFMGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LOPGOAKFMGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LOPGOAKFMGG*))((::PBYTE)hIl2Cpp + LOPGOAKFMGG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
