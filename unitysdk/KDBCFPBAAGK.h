#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SelectRubikGroup; }
namespace RPG::GameCore { class TaskContext; }

#define KDBCFPBAAGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB3470A0)
#define KDBCFPBAAGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3470D0)
#define KDBCFPBAAGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB347110)

	class KDBCFPBAAGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectRubikGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectRubikGroup*))((::PBYTE)hIl2Cpp + KDBCFPBAAGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBCFPBAAGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBCFPBAAGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
