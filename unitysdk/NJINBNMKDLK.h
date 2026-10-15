#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define NJINBNMKDLK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC11220)
#define NJINBNMKDLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC11250)

	class NJINBNMKDLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + NJINBNMKDLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJINBNMKDLK_ONTASKBEGIN_OFFSET))(this);
		}

	};
