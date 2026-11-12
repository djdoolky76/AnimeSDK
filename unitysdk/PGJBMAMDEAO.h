#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
class DEEJKBIMHAA;
class OONGDLIDJJJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkillByComplexSkillAI; }

#define PGJBMAMDEAO_CTOR_OFFSET UNITYSDK_OFFSET(0xCB04830)
#define PGJBMAMDEAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB04840)
#define PGJBMAMDEAO_HAOEOOKKLBN_OFFSET UNITYSDK_OFFSET(0xCB04BC0)
#define PGJBMAMDEAO_IBCBIAKDGMO_OFFSET UNITYSDK_OFFSET(0xCB05D10)
#define PGJBMAMDEAO_IHLGLALKIME_OFFSET UNITYSDK_OFFSET(0xCB05600)
#define PGJBMAMDEAO_NLNDNMIOMDF_OFFSET UNITYSDK_OFFSET(0xCB05130)
#define PGJBMAMDEAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB048E0)
#define PGJBMAMDEAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB05FB0)
#define PGJBMAMDEAO_TICK_OFFSET UNITYSDK_OFFSET(0xCB04880)

inline static constexpr unsigned int PGJBMAMDEAO_TypeDefinitionIndex = 55559;

	class PGJBMAMDEAO : public ::GELIALJDFBL
	{
	public:
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x18
		::OONGDLIDJJJ* LAPCOHEMCJN; // 0x20
		::RPG::GameCore::UseSkillByComplexSkillAI* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkillByComplexSkillAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkillByComplexSkillAI*))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HAOEOOKKLBN(::System::Int32 a1, ::RPG::GameCore::ControlSkillType a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_HAOEOOKKLBN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IBCBIAKDGMO(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_IBCBIAKDGMO_OFFSET))(this, a1, a2);
		}

		::System::Void IHLGLALKIME(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_IHLGLALKIME_OFFSET))(this, a1, a2);
		}

		::System::Void NLNDNMIOMDF(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_NLNDNMIOMDF_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJBMAMDEAO_ONTASKRESET_OFFSET))(this);
		}

	};
