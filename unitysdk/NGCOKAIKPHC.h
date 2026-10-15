#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NGCOKAIKPHC;

#define NGCOKAIKPHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D205000)
#define NGCOKAIKPHC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D205010)
#define NGCOKAIKPHC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D204FD0)

	class NGCOKAIKPHC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCOKAIKPHC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGCOKAIKPHC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGCOKAIKPHC*))((::PBYTE)hIl2Cpp + NGCOKAIKPHC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NGCOKAIKPHC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGCOKAIKPHC*))((::PBYTE)hIl2Cpp + NGCOKAIKPHC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
