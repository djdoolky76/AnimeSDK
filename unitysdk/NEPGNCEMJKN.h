#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NEPGNCEMJKN;
namespace RPG::GameCore { class DynamicString; }

#define NEPGNCEMJKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FE500)
#define NEPGNCEMJKN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1FE510)
#define NEPGNCEMJKN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1FE4D0)

	class NEPGNCEMJKN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* IPKCFNKIDMB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEPGNCEMJKN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NEPGNCEMJKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEPGNCEMJKN*))((::PBYTE)hIl2Cpp + NEPGNCEMJKN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NEPGNCEMJKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NEPGNCEMJKN*))((::PBYTE)hIl2Cpp + NEPGNCEMJKN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
