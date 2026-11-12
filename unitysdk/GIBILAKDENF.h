#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GIBILAKDENF_CTOR_OFFSET UNITYSDK_OFFSET(0x1696AB50)

inline static constexpr unsigned int GIBILAKDENF_TypeDefinitionIndex = 57399;

	class GIBILAKDENF : public ::System::Object
	{
	public:
		::KFELGAIGHAP* CMFJBFKOFDC; // 0x10
		::KFELGAIGHAP* MGEBFBDCNHM; // 0x18
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x20
		::RPG::GameCore::BattleQTEBaseConfig* COKHBDEGLIA; // 0x28
		::KFELGAIGHAP* JGNEPMDIHEC; // 0x30
		::KFELGAIGHAP* CGJEGFIAMIK; // 0x38
		::System::Single MCEAIMBIHGH; // 0x40
		::System::Void _ctor(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GIBILAKDENF_CTOR_OFFSET))(this, a1, a2);
		}

	};
