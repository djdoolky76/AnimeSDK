#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NKLOMENKLHK;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define NKLOMENKLHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D22F780)
#define NKLOMENKLHK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D22F790)
#define NKLOMENKLHK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D22F740)

	class NKLOMENKLHK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean EKCOLKIKCHO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOMENKLHK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKLOMENKLHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKLOMENKLHK*))((::PBYTE)hIl2Cpp + NKLOMENKLHK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NKLOMENKLHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKLOMENKLHK*))((::PBYTE)hIl2Cpp + NKLOMENKLHK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
