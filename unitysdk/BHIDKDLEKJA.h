#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHIDKDLEKJA_InnerState.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SynchronouslyTriggerSound; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define BHIDKDLEKJA_CBIBKBILMAA_OFFSET UNITYSDK_OFFSET(0xB488BA0)
#define BHIDKDLEKJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB488250)
#define BHIDKDLEKJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB488680)
#define BHIDKDLEKJA_ECNAOKJMHEB_OFFSET UNITYSDK_OFFSET(0xB488430)
#define BHIDKDLEKJA_GBMNHHNKCDG_OFFSET UNITYSDK_OFFSET(0xB4889A0)
#define BHIDKDLEKJA_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xB488AC0)
#define BHIDKDLEKJA_MAKLFCBAKBO_OFFSET UNITYSDK_OFFSET(0xB488A30)
#define BHIDKDLEKJA_MKABIFOMCAO_OFFSET UNITYSDK_OFFSET(0xB4884F0)
#define BHIDKDLEKJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB488260)
#define BHIDKDLEKJA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4886C0)
#define BHIDKDLEKJA_TICK_OFFSET UNITYSDK_OFFSET(0xB488710)

inline static constexpr unsigned int BHIDKDLEKJA_TypeDefinitionIndex = 56473;

	class BHIDKDLEKJA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::String* CBBKMNEHIMB; // 0x28
		::RPG::GameCore::SynchronouslyTriggerSound* OFKGLJOAMLD; // 0x30
		::System::String* EKNDOJDMBPM; // 0x38
		::System::UInt32 DHEOFFACDEK; // 0x40
		::BHIDKDLEKJA_InnerState DLNIGFGLPLJ; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SynchronouslyTriggerSound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SynchronouslyTriggerSound*))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_TICK_OFFSET))(this, a1);
		}

		::System::Void MKABIFOMCAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_MKABIFOMCAO_OFFSET))(this);
		}

		::System::Void CBIBKBILMAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_CBIBKBILMAA_OFFSET))(this, a1);
		}

		::System::Void LLBFBLIGNDG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_LLBFBLIGNDG_OFFSET))(this, a1);
		}

		::System::Int32 MAKLFCBAKBO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_MAKLFCBAKBO_OFFSET))(this);
		}

		::System::Int32 GBMNHHNKCDG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_GBMNHHNKCDG_OFFSET))(this);
		}

		::System::Boolean ECNAOKJMHEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHIDKDLEKJA_ECNAOKJMHEB_OFFSET))(this);
		}

	};
