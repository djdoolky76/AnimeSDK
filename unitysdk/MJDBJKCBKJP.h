#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MJDBJKCBKJP;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define MJDBJKCBKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B45C0)
#define MJDBJKCBKJP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1B45D0)
#define MJDBJKCBKJP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1B4590)

	class MJDBJKCBKJP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* BGCCFFPEALM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDBJKCBKJP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MJDBJKCBKJP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJDBJKCBKJP*))((::PBYTE)hIl2Cpp + MJDBJKCBKJP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MJDBJKCBKJP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MJDBJKCBKJP*))((::PBYTE)hIl2Cpp + MJDBJKCBKJP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
