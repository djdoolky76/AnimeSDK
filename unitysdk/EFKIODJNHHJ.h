#pragma once
#include "unitysdk/unitysdk.h"
class HIOAMIPNLIN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfectModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFKIODJNHHJ_CMDBOHMFIOP_OFFSET UNITYSDK_OFFSET(0x13A56B60)
#define EFKIODJNHHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A55720)
#define EFKIODJNHHJ_NPNDBALHAEC_OFFSET UNITYSDK_OFFSET(0x13A56330)
#define EFKIODJNHHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A55750)

inline static constexpr unsigned int EFKIODJNHHJ_TypeDefinitionIndex = 55108;

	class EFKIODJNHHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfectModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfectModifier*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKIODJNHHJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean CMDBOHMFIOP(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ_CMDBOHMFIOP_OFFSET))(this, a1, a2);
		}

		::System::Void NPNDBALHAEC(::System::Collections::Generic::List_1<::HIOAMIPNLIN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HIOAMIPNLIN*>*))((::PBYTE)hIl2Cpp + EFKIODJNHHJ_NPNDBALHAEC_OFFSET))(this, a1);
		}

	};
