#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class BNPCGCMCEOH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ShowBattleAlert; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLNMJIBJFHN_BDCLHLCDIAP_OFFSET UNITYSDK_OFFSET(0x15836710)
#define FLNMJIBJFHN_CTOR_OFFSET UNITYSDK_OFFSET(0x158362E0)
#define FLNMJIBJFHN_DEBAOKDPMPL_OFFSET UNITYSDK_OFFSET(0x158364E0)
#define FLNMJIBJFHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158362F0)
#define FLNMJIBJFHN_IKDIKFGFJAF_OFFSET UNITYSDK_OFFSET(0x158363F0)
#define FLNMJIBJFHN_JACMIHAPKAL_OFFSET UNITYSDK_OFFSET(0x15836950)
#define FLNMJIBJFHN_KMAPKMHBHKJ_OFFSET UNITYSDK_OFFSET(0x15836630)
#define FLNMJIBJFHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15836330)
#define FLNMJIBJFHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15836580)
#define FLNMJIBJFHN_TICK_OFFSET UNITYSDK_OFFSET(0x158365D0)

inline static constexpr unsigned int FLNMJIBJFHN_TypeDefinitionIndex = 56443;

	class FLNMJIBJFHN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowBattleAlert* OFKGLJOAMLD; // 0x20
		// static const ::System::String* HGLNLKJLOAL; // 0x0
		// static const ::System::String* BLHPACHICLE; // 0x0
		// static const ::System::String* PFJHPNNLNFE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleAlert* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleAlert*))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_TICK_OFFSET))(this, a1);
		}

		::System::Void IKDIKFGFJAF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_IKDIKFGFJAF_OFFSET))(this, a1);
		}

		::System::Void DEBAOKDPMPL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_DEBAOKDPMPL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BNPCGCMCEOH*>* BDCLHLCDIAP()
		{
			return ((::System::Collections::Generic::List_1<::BNPCGCMCEOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_BDCLHLCDIAP_OFFSET))(this);
		}

		::System::String* JACMIHAPKAL(::RPG::GameCore::SkillType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_JACMIHAPKAL_OFFSET))(this, a1);
		}

		::System::String* KMAPKMHBHKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNMJIBJFHN_KMAPKMHBHKJ_OFFSET))(this);
		}

	};
