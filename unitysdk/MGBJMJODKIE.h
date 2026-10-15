#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AddSneakEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MGBJMJODKIE_ACBFJLICJHF_OFFSET UNITYSDK_OFFSET(0xB90F7D0)
#define MGBJMJODKIE_CHMCKCNPDIM_OFFSET UNITYSDK_OFFSET(0xB90FB10)
#define MGBJMJODKIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB90EEC0)
#define MGBJMJODKIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB90EED0)
#define MGBJMJODKIE_KEFHDAABHMJ_OFFSET UNITYSDK_OFFSET(0xB90F5F0)
#define MGBJMJODKIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90F070)
#define MGBJMJODKIE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB90FCE0)
#define MGBJMJODKIE_TICK_OFFSET UNITYSDK_OFFSET(0xB90FC00)

inline static constexpr unsigned int MGBJMJODKIE_TypeDefinitionIndex = 52329;

	class MGBJMJODKIE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::RPG::GameCore::AddSneakEffect* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* MIDNKFFEBMG; // 0x30
		::RPG::GameCore::CharacterVisibleComponent* MDDDGNIOKOF; // 0x38
		::System::Boolean NMACOLODPPD; // 0x40
		::System::Boolean DIMECBLLOGB; // 0x41
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
