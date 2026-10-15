#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::GameCore { class AdvEntityKeepFacingTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NKOPIMHENEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC45E80)
#define NKOPIMHENEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC45E90)
#define NKOPIMHENEE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBC46300)
#define NKOPIMHENEE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBC46310)
#define NKOPIMHENEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC45FD0)
#define NKOPIMHENEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC45F30)
#define NKOPIMHENEE_TICK_OFFSET UNITYSDK_OFFSET(0xBC46270)
#define NKOPIMHENEE__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xBC46360)

inline static constexpr unsigned int NKOPIMHENEE_TypeDefinitionIndex = 52365;

	class NKOPIMHENEE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvEntityKeepFacingTo* OFKGLJOAMLD; // 0x18
		::NJFHGODIBPN_BNDKBMLLKBO* IAHKANFGGDM; // 0x20
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityKeepFacingTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityKeepFacingTo*))((::PBYTE)hIl2Cpp + NKOPIMHENEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOPIMHENEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOPIMHENEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOPIMHENEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKOPIMHENEE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOPIMHENEE_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOPIMHENEE_ONSKIP_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOPIMHENEE__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
