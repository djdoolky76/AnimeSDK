#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionToType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionTriggerType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
class FHLBIPIKFEJ;
class GELIALJDFBL;
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define BMHGFJLDCDO_AIKDAHGHDEI_OFFSET UNITYSDK_OFFSET(0xBDAE450)
#define BMHGFJLDCDO_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBDAE950)
#define BMHGFJLDCDO_CFFJKMHBMOO_OFFSET UNITYSDK_OFFSET(0xBDAE600)
#define BMHGFJLDCDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDAE3C0)
#define BMHGFJLDCDO_DBPMBODGAHO_OFFSET UNITYSDK_OFFSET(0xBDAE900)
#define BMHGFJLDCDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDAE530)
#define BMHGFJLDCDO_DPAMNCLDNLI_OFFSET UNITYSDK_OFFSET(0xBDAE6E0)
#define BMHGFJLDCDO_GJIHIJNKIHF_OFFSET UNITYSDK_OFFSET(0xBDAE8E0)
#define BMHGFJLDCDO_KICNCHJMFNB_OFFSET UNITYSDK_OFFSET(0xBDAE920)
#define BMHGFJLDCDO_NENLPBDFKJA_OFFSET UNITYSDK_OFFSET(0xBDAE770)
#define BMHGFJLDCDO_PCHAMOCLBBD_OFFSET UNITYSDK_OFFSET(0xBDAE940)

	class BMHGFJLDCDO : public ::System::Object
	{
	public:
		::RPG::GameCore::StateTreeTransitionConfig* OFKGLJOAMLD; // 0x10
		::GELIALJDFBL* OLPNJHPNJNG; // 0x18
		::FHLBIPIKFEJ* DLNIGFGLPLJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::String* FEMHOGGGPIG; // 0x30
		::System::Single NDHHEFKHPLE; // 0x38
		::System::Void _ctor(::RPG::GameCore::StateTreeTransitionConfig* a1, ::RPG::GameCore::TaskContext* a2, ::FHLBIPIKFEJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeTransitionConfig*, ::RPG::GameCore::TaskContext*, ::FHLBIPIKFEJ*))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AIKDAHGHDEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_AIKDAHGHDEI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CFFJKMHBMOO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_CFFJKMHBMOO_OFFSET))(this, a1);
		}

		::System::Boolean DPAMNCLDNLI(::RPG::GameCore::TaskState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_DPAMNCLDNLI_OFFSET))(this, a1);
		}

		::System::Void NENLPBDFKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_NENLPBDFKJA_OFFSET))(this);
		}

		::RPG::GameCore::StateTreeTransitionTriggerType GJIHIJNKIHF()
		{
			return ((::RPG::GameCore::StateTreeTransitionTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_GJIHIJNKIHF_OFFSET))(this);
		}

		::RPG::GameCore::StateTreeTransitionToType DBPMBODGAHO()
		{
			return ((::RPG::GameCore::StateTreeTransitionToType(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_DBPMBODGAHO_OFFSET))(this);
		}

		::System::String* KICNCHJMFNB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_KICNCHJMFNB_OFFSET))(this);
		}

		::System::String* PCHAMOCLBBD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_PCHAMOCLBBD_OFFSET))(this);
		}

		::FHLBIPIKFEJ* BGDKFHEBDFJ()
		{
			return ((::FHLBIPIKFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHGFJLDCDO_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
