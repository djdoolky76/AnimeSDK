#pragma once
#include "unitysdk/unitysdk.h"
class IIGFBMADNLB;
namespace RPG::GameCore { class LockActionDelayChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }

#define OIJEBAMFEOJ_CIADNCBDFDL_OFFSET UNITYSDK_OFFSET(0xBE95E70)
#define OIJEBAMFEOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE955D0)
#define OIJEBAMFEOJ_IJCIMJBOGCJ_OFFSET UNITYSDK_OFFSET(0xBE95C70)
#define OIJEBAMFEOJ_OLCDGLIGMIK_OFFSET UNITYSDK_OFFSET(0xBE95FD0)
#define OIJEBAMFEOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE95600)

inline static constexpr unsigned int OIJEBAMFEOJ_TypeDefinitionIndex = 55145;

	class OIJEBAMFEOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockActionDelayChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockActionDelayChange*))((::PBYTE)hIl2Cpp + OIJEBAMFEOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJEBAMFEOJ_ONTASKBEGIN_OFFSET))(this);
		}

		::IIGFBMADNLB* OLCDGLIGMIK(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
		{
			return ((::IIGFBMADNLB*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + OIJEBAMFEOJ_OLCDGLIGMIK_OFFSET))(this, a1, a2);
		}

		::System::Void IJCIMJBOGCJ(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::IIGFBMADNLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::IIGFBMADNLB*))((::PBYTE)hIl2Cpp + OIJEBAMFEOJ_IJCIMJBOGCJ_OFFSET))(this, a1, a2);
		}

		::System::Void CIADNCBDFDL(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::System::String*))((::PBYTE)hIl2Cpp + OIJEBAMFEOJ_CIADNCBDFDL_OFFSET))(this, a1, a2);
		}

	};
