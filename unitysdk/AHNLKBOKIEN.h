#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace RPG::GameCore { class TaskContext; }

#define AHNLKBOKIEN_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0xEB88E10)
#define AHNLKBOKIEN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB88760)
#define AHNLKBOKIEN_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xEB88770)
#define AHNLKBOKIEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB88890)
#define AHNLKBOKIEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB88D70)

	class AHNLKBOKIEN : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::GridFightWaitDragRole* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
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
