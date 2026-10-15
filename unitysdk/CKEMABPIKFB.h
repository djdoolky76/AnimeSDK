#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyCurvePropGroupPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CKEMABPIKFB_CTOR_OFFSET UNITYSDK_OFFSET(0xD758DD0)
#define CKEMABPIKFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD758E00)

	class CKEMABPIKFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + CKEMABPIKFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEMABPIKFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
