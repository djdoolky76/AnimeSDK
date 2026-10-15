#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AddSneakEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MGBJMJODKIE_ACBFJLICJHF_OFFSET UNITYSDK_OFFSET(0xB915820)
#define MGBJMJODKIE_CHMCKCNPDIM_OFFSET UNITYSDK_OFFSET(0xB915B60)
#define MGBJMJODKIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB914F10)
#define MGBJMJODKIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB914F20)
#define MGBJMJODKIE_KEFHDAABHMJ_OFFSET UNITYSDK_OFFSET(0xB915640)
#define MGBJMJODKIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9150C0)
#define MGBJMJODKIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB915D20)
#define MGBJMJODKIE_TICK_OFFSET UNITYSDK_OFFSET(0xB915C50)

inline static constexpr unsigned int MGBJMJODKIE_TypeDefinitionIndex = 52329;

	class MGBJMJODKIE : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* MIDNKFFEBMG; // 0x18
		::RPG::GameCore::AddSneakEffect* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::CharacterVisibleComponent* MDDDGNIOKOF; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38
		::System::Boolean DIMECBLLOGB; // 0x40
		::System::Boolean NMACOLODPPD; // 0x41
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddSneakEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + MGBJMJODKIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBJMJODKIE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBJMJODKIE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KEFHDAABHMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGBJMJODKIE_KEFHDAABHMJ_OFFSET))(this, a1);
		}

		::System::Void CHMCKCNPDIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGBJMJODKIE_CHMCKCNPDIM_OFFSET))(this, a1);
		}

		::System::Void ACBFJLICJHF(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MGBJMJODKIE_ACBFJLICJHF_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGBJMJODKIE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBJMJODKIE_ONTASKRESET_OFFSET))(this);
		}

	};
