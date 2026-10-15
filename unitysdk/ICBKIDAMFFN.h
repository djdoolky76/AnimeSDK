#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowGuideTalk; }
namespace RPG::GameCore { class TaskContext; }

#define ICBKIDAMFFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4B870)
#define ICBKIDAMFFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E4B880)
#define ICBKIDAMFFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E4B8C0)
#define ICBKIDAMFFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E4BA90)
#define ICBKIDAMFFN_TICK_OFFSET UNITYSDK_OFFSET(0x15E4BAE0)

	class ICBKIDAMFFN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowGuideTalk* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideTalk*))((::PBYTE)hIl2Cpp + ICBKIDAMFFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBKIDAMFFN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBKIDAMFFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBKIDAMFFN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICBKIDAMFFN_TICK_OFFSET))(this, a1);
		}

	};
