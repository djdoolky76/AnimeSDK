#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetCustomAssetPreloadState; }
namespace RPG::GameCore { class TaskContext; }

#define EEKDEIGBAOK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A31AA0)
#define EEKDEIGBAOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A31AD0)
#define EEKDEIGBAOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A31B10)

	class EEKDEIGBAOK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetCustomAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetCustomAssetPreloadState*))((::PBYTE)hIl2Cpp + EEKDEIGBAOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKDEIGBAOK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKDEIGBAOK_ONTASKBEGIN_OFFSET))(this);
		}

	};
