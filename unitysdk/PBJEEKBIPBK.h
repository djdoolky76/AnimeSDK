#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntityResetCameraRootTransform; }
namespace RPG::GameCore { class TaskContext; }

#define PBJEEKBIPBK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF1850)
#define PBJEEKBIPBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF1880)

	class PBJEEKBIPBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityResetCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityResetCameraRootTransform*))((::PBYTE)hIl2Cpp + PBJEEKBIPBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJEEKBIPBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
