#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockCurrentSceneTransferAction; }
namespace RPG::GameCore { class TaskContext; }

#define PBLOJEGPEGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF49E0)
#define PBLOJEGPEGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFF4AE0)
#define PBLOJEGPEGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF4A10)

	class PBLOJEGPEGE
	{
	public:
		::System::Boolean POBCBCKMGCE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCurrentSceneTransferAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCurrentSceneTransferAction*))((::PBYTE)hIl2Cpp + PBLOJEGPEGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLOJEGPEGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLOJEGPEGE_DISPOSE_OFFSET))(this);
		}

	};
