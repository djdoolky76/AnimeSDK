#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KOFKLJILCOE;

#define KOFKLJILCOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BED20)
#define KOFKLJILCOE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0BED30)
#define KOFKLJILCOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0BEC60)

	class KOFKLJILCOE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFKLJILCOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KOFKLJILCOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KOFKLJILCOE*))((::PBYTE)hIl2Cpp + KOFKLJILCOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KOFKLJILCOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KOFKLJILCOE*))((::PBYTE)hIl2Cpp + KOFKLJILCOE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
