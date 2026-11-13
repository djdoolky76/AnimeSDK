#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace RPG::GameCore { class TaskContext; }

#define AHNLKBOKIEN_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0x19B29880)
#define AHNLKBOKIEN_CTOR_OFFSET UNITYSDK_OFFSET(0x19B291D0)
#define AHNLKBOKIEN_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x19B291E0)
#define AHNLKBOKIEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B29300)
#define AHNLKBOKIEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19B297E0)

inline static constexpr unsigned int AHNLKBOKIEN_TypeDefinitionIndex = 54756;

	class AHNLKBOKIEN : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::GridFightWaitDragRole* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + AHNLKBOKIEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLKBOKIEN_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLKBOKIEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNLKBOKIEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHNLKBOKIEN_BLBGBLLHDAB_OFFSET))(this, a1);
		}

	};
