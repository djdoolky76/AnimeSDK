#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define BFJHOHJEPJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB16F030)
#define BFJHOHJEPJM_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0xB16EFB0)
#define BFJHOHJEPJM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB16EEF0)

	class BFJHOHJEPJM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJHOHJEPJM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LittleGameLevelVariable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + BFJHOHJEPJM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean IsValueEqualsTo(::RPG::GameCore::LGameEntityRef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + BFJHOHJEPJM_ISVALUEEQUALSTO_OFFSET))(this, a1);
		}

	};
