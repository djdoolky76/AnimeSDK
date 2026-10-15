#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetStance; }
namespace RPG::GameCore { class TaskContext; }

#define JCLMKBGCJCA_CTOR_OFFSET UNITYSDK_OFFSET(0x16597B60)
#define JCLMKBGCJCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16597B70)
#define JCLMKBGCJCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16597BB0)
#define JCLMKBGCJCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16598220)
#define JCLMKBGCJCA_TICK_OFFSET UNITYSDK_OFFSET(0x16598270)

inline static constexpr unsigned int JCLMKBGCJCA_TypeDefinitionIndex = 55319;

	class JCLMKBGCJCA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ResetStance* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetStance*))((::PBYTE)hIl2Cpp + JCLMKBGCJCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMKBGCJCA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMKBGCJCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLMKBGCJCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCLMKBGCJCA_TICK_OFFSET))(this, a1);
		}

	};
