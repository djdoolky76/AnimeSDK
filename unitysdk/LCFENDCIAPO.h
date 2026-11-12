#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifierReattachEffect; }
namespace RPG::GameCore { class TaskContext; }

#define LCFENDCIAPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA68C0)
#define LCFENDCIAPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEA68D0)
#define LCFENDCIAPO_MKGEJPKAPLO_OFFSET UNITYSDK_OFFSET(0xBEA6C90)
#define LCFENDCIAPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA6910)
#define LCFENDCIAPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEA6D60)
#define LCFENDCIAPO_TICK_OFFSET UNITYSDK_OFFSET(0xBEA6DB0)

inline static constexpr unsigned int LCFENDCIAPO_TypeDefinitionIndex = 56366;

	class LCFENDCIAPO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifierReattachEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifierReattachEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifierReattachEffect*))((::PBYTE)hIl2Cpp + LCFENDCIAPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENDCIAPO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENDCIAPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFENDCIAPO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LCFENDCIAPO_TICK_OFFSET))(this, a1);
		}

		::RPG::MVector3 MKGEJPKAPLO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LCFENDCIAPO_MKGEJPKAPLO_OFFSET))(this, a1);
		}

	};
