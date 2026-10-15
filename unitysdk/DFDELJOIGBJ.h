#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DFDELJOIGBJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define DFDELJOIGBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD147D0)
#define DFDELJOIGBJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD147E0)
#define DFDELJOIGBJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD147A0)

	class DFDELJOIGBJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::FormatString FHLJGDGMMHK; // 0x20
		::System::Boolean EKFIEAALOFF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDELJOIGBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DFDELJOIGBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFDELJOIGBJ*))((::PBYTE)hIl2Cpp + DFDELJOIGBJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DFDELJOIGBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFDELJOIGBJ*))((::PBYTE)hIl2Cpp + DFDELJOIGBJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
