#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define JOOCKPPGDHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2AEAC0)
#define JOOCKPPGDHN_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0xB2AEA40)
#define JOOCKPPGDHN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB2AE980)

	class JOOCKPPGDHN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOCKPPGDHN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LittleGameLevelVariable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + JOOCKPPGDHN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean IsValueEqualsTo(::RPG::GameCore::LevelEntityRef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelEntityRef*))((::PBYTE)hIl2Cpp + JOOCKPPGDHN_ISVALUEEQUALSTO_OFFSET))(this, a1);
		}

	};
