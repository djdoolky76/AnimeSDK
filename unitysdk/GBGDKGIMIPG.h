#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryShowSpaceZooNewCatDialog; }
namespace System { class Object; }

#define GBGDKGIMIPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1594C6A0)
#define GBGDKGIMIPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1594C6B0)
#define GBGDKGIMIPG_MAABOAEONEP_OFFSET UNITYSDK_OFFSET(0x1594C8E0)
#define GBGDKGIMIPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1594C770)
#define GBGDKGIMIPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1594C830)
#define GBGDKGIMIPG_TICK_OFFSET UNITYSDK_OFFSET(0x1594C880)

inline static constexpr unsigned int GBGDKGIMIPG_TypeDefinitionIndex = 58807;

	class GBGDKGIMIPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TryShowSpaceZooNewCatDialog* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryShowSpaceZooNewCatDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryShowSpaceZooNewCatDialog*))((::PBYTE)hIl2Cpp + GBGDKGIMIPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGDKGIMIPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGDKGIMIPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGDKGIMIPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBGDKGIMIPG_TICK_OFFSET))(this, a1);
		}

		::System::Void MAABOAEONEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBGDKGIMIPG_MAABOAEONEP_OFFSET))(this, a1);
		}

	};
