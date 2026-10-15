#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GIBILAKDENF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A30420)

inline static constexpr unsigned int GIBILAKDENF_TypeDefinitionIndex = 56187;

	class GIBILAKDENF : public ::System::Object
	{
	public:
		::KFELGAIGHAP* CGJEGFIAMIK; // 0x10
		::KFELGAIGHAP* JGNEPMDIHEC; // 0x18
		::RPG::GameCore::BattleQTEBaseConfig* COKHBDEGLIA; // 0x20
		::KFELGAIGHAP* CMFJBFKOFDC; // 0x28
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x30
		::KFELGAIGHAP* MGEBFBDCNHM; // 0x38
		::System::Single MCEAIMBIHGH; // 0x40
		::System::Void _ctor(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GIBILAKDENF_CTOR_OFFSET))(this, a1, a2);
		}

	};
